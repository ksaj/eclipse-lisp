#|
BINDING REFERENCES ref to bindings (use *print-circle*?)
  Captured binding references must be to listing in defcomp form.
  References in FRAME must create binding objects.
CONTINUATION REFERENCES and other introduced catch/throw tags must be
 unique objects.
FRAME STATEMENT returns no value.  Make sure any pending
  effects/exits happen inside frame. 
COALESCE CONSTANTS in file, pending declarations
FLATTEN FRAMES.  Do this AFTER "frame statement"
BINDING REFERENCES become stack references, and frames dissappear
  entirely.  Must be done after "flatten frames", "frame statement". 
|#

(defparameter *byte-code-dispatch* (copy-pprint-dispatch nil))

(macrolet ((def-type-disp (type (stream form priority) &body body)
	       `(set-pprint-dispatch
		 ',type #'(lambda (,stream ,form) ,@body)
		 ,priority *byte-code-dispatch*)))

  ;; Actually needs to reflect index, package, etc.!!!
  (def-type-disp RUNTIME-BINDING (s b 0)
    (format s "#S(RUNTIME-BINDING :NAME '~a)" (binding-name b)))

  ;; Actually needs to reflect index, package, etc.!!!
  (def-type-disp BLOCK-CONT (s b 0)
    (write `',(block-cont-label b) :stream s))

  (def-type-disp BYTE-COMPILED-FUNCTION (s f 0)
    (with-slots (code name env) f
      (print `(defcomp ,name
		;; We're making an assumption here about where to find the boundary env!!!
		,(boundary-env-enclosed-bindings (frame-env env))
		,code) s))))



(defmacro with-byte-code-syntax (&body body)
  `(let ((package *package*))
     (with-standard-io-syntax
      (let ((*print-pprint-dispatch* *byte-code-dispatch*)
	    (*print-pretty* t)
	    (*print-readably* nil)
	    (*print-circle* t)
	    (*package* package))
	,@body))))


(defstruct (FILE-COMPILER (:include byte-compiler))
  (instructions nil))
(defstruct (BYTE-FILE-COMPILER (:include file-compiler)))

(defmethod ADD-LOAD-INSTRUCTION ((processor FILE-COMPILER) instruction)
  (push instruction (file-compiler-instructions processor))
  instruction)
 
(defmethod COMPILER-DUMP ((processor BYTE-FILE-COMPILER)
			  stream loader-name)
  (declare (ignore loader-name))
  (with-byte-code-syntax 
   (format stream ";;; Generated by ~a ~a ~@[for ~a ~]on ~a.~%;;; "
	   (lisp-implementation-type) (lisp-implementation-version)
	   (user-id) (machine-instance))
   (date stream)
   (loop for instruction in (nreverse (file-compiler-instructions processor))
	 do (print instruction stream))))


  