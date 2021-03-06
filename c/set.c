/* Generated by Eclipse Common Lisp 1.1-HOSTED on cad0.
   Wednesday the eighth of April, 1998, 1:52:17 pm CDT. */
#include <eclipse.h>

clObject clAtom(clProto), clCar(clProto), clCdr(clProto),
  clCharpSimpleBaseString __P((clCharp)), clCheckKeys(clProto),
  clCons(clProto), clEndp(clProto), clEql(clProto),
  clExtraArgs(clProto), clFuncall(clProto), clKeyArg(clProto),
  clMakeKeyword(clProto), clMember1(clProto), clMissingArgs(clProto),
  clNot(clProto), clNull(clProto), clRplacd(clProto),
  clSatisfiesTheTest(clProto);

extern clObject clIDENTITY, clINTERSECTION, clMEMBER_IF,
  clMEMBER_IF_NOT, clNINTERSECTION, clNONE, clNSET_DIFFERENCE,
  clNSET_EXCLUSIVE_OR, clNUNION, clSET_DIFFERENCE, clSET_EXCLUSIVE_OR,
  clSUBSETP, clTAILP, clUNION;

static clObject CONS_0, CONS_1, CONS_2, CONS_3, I_1, I_2, keyKEY,
  keyTEST, keyTEST_NOT, STR_KEY__0, STR_TEST_NOT__2, STR_TEST__1;

clObject clMemberIf clVdecl(_ap)
{ clObject L_ap, predicate, list, L_keys, key;
  { clBeginParse(_ap);
    clSetq(predicate,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(list,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clNIL);
    clCheckKeys(L_keys, CONS_0, clEOA);
    clEndParse(_ap); }
  { clObject L_4;
    clSetq(L_4, key);
    return(clMember1(clNONE, list, predicate, clNIL, L_4, clEOA)); } }

clObject clMemberIfNot clVdecl(_ap)
{ clObject L_ap, predicate, list, L_keys, key;
  { clBeginParse(_ap);
    clSetq(predicate,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(list,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clNIL);
    clCheckKeys(L_keys, CONS_0, clEOA);
    clEndParse(_ap); }
  { clObject L_4;
    clSetq(L_4, key);
    return(clMember1(clNONE, list, clNIL, predicate, L_4, clEOA)); } }

clObject clTailp clVdecl(_ap)
{ clObject sublist, list;
  { clBeginParse(_ap);
    clSetq(sublist,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(list,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  { clObject list__R1;
    clSetq(list__R1, list);
    clLabel(l_ITERATE395);
    if (clTrue(clAtom(list__R1, clEOA)))
      return(clEql(list__R1, sublist, clEOA));
    if (clTrue(clEql(sublist, list__R1, clEOA)))
      return(clValues1(clT));
    { clObject L_value396;
      clSetq(L_value396, clCdr(list__R1, clEOA));
      clSetq(list__R1, L_value396); }
    goto l_ITERATE395; } }

clObject clUnion clVdecl(_ap)
{ clObject L_ap, list1, list2, L_keys, test, test_not, key, res;
  { clBeginParse(_ap);
    clSetq(list1,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(list2,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test, clCar(L_0, clEOA)); }
    else clSetq(test, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST_NOT, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test_not, clCar(L_0, clEOA)); }
    else clSetq(test_not, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clSymbolFunctionValue(clIDENTITY));
    clSetq(res, list2);
    clCheckKeys(L_keys, CONS_1, clEOA);
    clEndParse(_ap); }
  { clObject L_sublist402, elt;
    clSetq(L_sublist402, list1);
    clSetq(elt, clCar(L_sublist402, clEOA));
    clLabel(l_ITERATE403);
    if (clTrue(clEndp(L_sublist402, clEOA))) clLocalReturn(NIL);
    { clObject L_test;
      { clObject L_0;
        { clObject L_4, L_3, L_2, L_0__R1;
          { clObject L_0__R2;
            clSetq(L_0__R2, key);
            clSetq(L_0__R1, clFuncall(L_0__R2, elt, clEOA)); }
          clSetq(L_2, test);
          clSetq(L_3, test_not);
          clSetq(L_4, key);
          clSetq(L_0,
                 clMember1(L_0__R1, list2, L_2, L_3, L_4, clEOA)); }
        clSetq(L_test, clNot(L_0, clEOA)); }
      if (clTrue(L_test))
        { clObject L_1;
          clSetq(L_1, res);
          clSetq(res, clCons(elt, L_1, clEOA)); } }
    { clObject L_0;
      clSetq(L_0, L_sublist402);
      clSetq(L_sublist402, clCdr(L_0, clEOA)); }
    { clObject L_0;
      clSetq(L_0, L_sublist402);
      clSetq(elt, clCar(L_0, clEOA)); }
    goto l_ITERATE403; }
  clBlockEnd(NIL);
  return(clValues1(res)); }

clObject clIntersection clVdecl(_ap)
{ clObject L_ap, list1, list2, L_keys, test, test_not, key, res;
  { clBeginParse(_ap);
    clSetq(list1,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(list2,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test, clCar(L_0, clEOA)); }
    else clSetq(test, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST_NOT, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test_not, clCar(L_0, clEOA)); }
    else clSetq(test_not, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clSymbolFunctionValue(clIDENTITY));
    clSetq(res, clNIL);
    clCheckKeys(L_keys, CONS_1, clEOA);
    clEndParse(_ap); }
  { clObject L_sublist409, elt;
    clSetq(L_sublist409, list1);
    clSetq(elt, clCar(L_sublist409, clEOA));
    clLabel(l_ITERATE410);
    if (clTrue(clEndp(L_sublist409, clEOA))) clLocalReturn(NIL);
    { clObject L_test;
      { clObject L_4, L_3, L_2, L_0;
        { clObject L_0__R1;
          clSetq(L_0__R1, key);
          clSetq(L_0, clFuncall(L_0__R1, elt, clEOA)); }
        clSetq(L_2, test);
        clSetq(L_3, test_not);
        clSetq(L_4, key);
        clSetq(L_test, clMember1(L_0, list2, L_2, L_3, L_4, clEOA)); }
      if (clTrue(L_test))
        { clObject L_1;
          clSetq(L_1, res);
          clSetq(res, clCons(elt, L_1, clEOA)); } }
    { clObject L_0;
      clSetq(L_0, L_sublist409);
      clSetq(L_sublist409, clCdr(L_0, clEOA)); }
    { clObject L_0;
      clSetq(L_0, L_sublist409);
      clSetq(elt, clCar(L_0, clEOA)); }
    goto l_ITERATE410; }
  clBlockEnd(NIL);
  return(clValues1(res)); }

clObject clSetDifference clVdecl(_ap)
{ clObject L_ap, list1, list2, L_keys, test, test_not, key, res;
  { clBeginParse(_ap);
    clSetq(list1,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(list2,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test, clCar(L_0, clEOA)); }
    else clSetq(test, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST_NOT, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test_not, clCar(L_0, clEOA)); }
    else clSetq(test_not, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clSymbolFunctionValue(clIDENTITY));
    clSetq(res, clNIL);
    clCheckKeys(L_keys, CONS_1, clEOA);
    clEndParse(_ap); }
  { clObject L_sublist416, elt;
    clSetq(L_sublist416, list1);
    clSetq(elt, clCar(L_sublist416, clEOA));
    clLabel(l_ITERATE417);
    if (clTrue(clEndp(L_sublist416, clEOA))) clLocalReturn(NIL);
    { clObject L_test;
      { clObject L_0;
        { clObject L_4, L_3, L_2, L_0__R1;
          { clObject L_0__R2;
            clSetq(L_0__R2, key);
            clSetq(L_0__R1, clFuncall(L_0__R2, elt, clEOA)); }
          clSetq(L_2, test);
          clSetq(L_3, test_not);
          clSetq(L_4, key);
          clSetq(L_0,
                 clMember1(L_0__R1, list2, L_2, L_3, L_4, clEOA)); }
        clSetq(L_test, clNot(L_0, clEOA)); }
      if (clTrue(L_test))
        { clObject L_1;
          clSetq(L_1, res);
          clSetq(res, clCons(elt, L_1, clEOA)); } }
    { clObject L_0;
      clSetq(L_0, L_sublist416);
      clSetq(L_sublist416, clCdr(L_0, clEOA)); }
    { clObject L_0;
      clSetq(L_0, L_sublist416);
      clSetq(elt, clCar(L_0, clEOA)); }
    goto l_ITERATE417; }
  clBlockEnd(NIL);
  return(clValues1(res)); }

clObject clSetExclusiveOr clVdecl(_ap)
{ clObject L_ap, list1, list2, L_keys, test, test_not, key, res;
  { clBeginParse(_ap);
    clSetq(list1,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(list2,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test, clCar(L_0, clEOA)); }
    else clSetq(test, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST_NOT, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test_not, clCar(L_0, clEOA)); }
    else clSetq(test_not, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clSymbolFunctionValue(clIDENTITY));
    clSetq(res, clNIL);
    clCheckKeys(L_keys, CONS_1, clEOA);
    clEndParse(_ap); }
  { clObject L_sublist424, elt;
    clSetq(L_sublist424, list1);
    clSetq(elt, clCar(L_sublist424, clEOA));
    clLabel(l_ITERATE425);
    if (clTrue(clEndp(L_sublist424, clEOA))) clLocalReturn(NIL);
    { clObject L_test;
      { clObject L_0;
        { clObject L_4, L_3, L_2, L_0__R1;
          { clObject L_0__R2;
            clSetq(L_0__R2, key);
            clSetq(L_0__R1, clFuncall(L_0__R2, elt, clEOA)); }
          clSetq(L_2, test);
          clSetq(L_3, test_not);
          clSetq(L_4, key);
          clSetq(L_0,
                 clMember1(L_0__R1, list2, L_2, L_3, L_4, clEOA)); }
        clSetq(L_test, clNot(L_0, clEOA)); }
      if (clTrue(L_test))
        { clObject L_1;
          clSetq(L_1, res);
          clSetq(res, clCons(elt, L_1, clEOA)); } }
    { clObject L_0;
      clSetq(L_0, L_sublist424);
      clSetq(L_sublist424, clCdr(L_0, clEOA)); }
    { clObject L_0;
      clSetq(L_0, L_sublist424);
      clSetq(elt, clCar(L_0, clEOA)); }
    goto l_ITERATE425; }
  clBlockEnd(NIL);
  { clObject L_sublist426, elt;
    clSetq(L_sublist426, list2);
    clSetq(elt, clCar(L_sublist426, clEOA));
    clLabel(l_ITERATE427);
    if (clTrue(clEndp(L_sublist426, clEOA))) clLocalReturn(NIL__r2);
    { clObject L_sublist428, elt1;
      clSetq(L_sublist428, list1);
      clSetq(elt1, clCar(L_sublist428, clEOA));
      clLabel(l_ITERATE429);
      if (clTrue(clEndp(L_sublist428, clEOA)))
        { { clObject L_1;
            clSetq(L_1, res);
            clSetq(res, clCons(elt, L_1, clEOA)); }
          clLocalReturn(NIL__r1); }
      { clObject L_test;
        { clObject L_4, L_3, L_2, L_0;
          { clObject L_0__R1;
            clSetq(L_0__R1, key);
            clSetq(L_0, clFuncall(L_0__R1, elt1, clEOA)); }
          clSetq(L_2, test);
          clSetq(L_3, test_not);
          clSetq(L_4, key);
          clSetq(L_test,
                 clSatisfiesTheTest(L_0, elt, L_2, L_3, L_4, clEOA)); }
        if (clTrue(L_test)) clLocalReturn(NIL__r1); }
      { clObject L_0;
        clSetq(L_0, L_sublist428);
        clSetq(L_sublist428, clCdr(L_0, clEOA)); }
      { clObject L_0;
        clSetq(L_0, L_sublist428);
        clSetq(elt1, clCar(L_0, clEOA)); }
      goto l_ITERATE429; }
    clBlockEnd(NIL__r1);
    { clObject L_0;
      clSetq(L_0, L_sublist426);
      clSetq(L_sublist426, clCdr(L_0, clEOA)); }
    { clObject L_0;
      clSetq(L_0, L_sublist426);
      clSetq(elt, clCar(L_0, clEOA)); }
    goto l_ITERATE427; }
  clBlockEnd(NIL__r2);
  return(clValues1(res)); }

clObject clSubsetp clVdecl(_ap)
{ clObject L_ap, list1, list2, L_keys, test, test_not, key, res;
  { clBeginParse(_ap);
    clSetq(list1,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(list2,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test, clCar(L_0, clEOA)); }
    else clSetq(test, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST_NOT, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test_not, clCar(L_0, clEOA)); }
    else clSetq(test_not, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clSymbolFunctionValue(clIDENTITY));
    clSetq(res, clT);
    clCheckKeys(L_keys, CONS_1, clEOA);
    clEndParse(_ap); }
  { clObject L_sublist437, elt;
    clSetq(L_sublist437, list1);
    clSetq(elt, clCar(L_sublist437, clEOA));
    clLabel(l_ITERATE438);
    if (clTrue(clEndp(L_sublist437, clEOA))) clLocalReturn(NIL);
    { clObject L_test;
      { clObject L_0;
        { clObject L_4, L_3, L_2, L_0__R1;
          { clObject L_0__R2;
            clSetq(L_0__R2, key);
            clSetq(L_0__R1, clFuncall(L_0__R2, elt, clEOA)); }
          clSetq(L_2, test);
          clSetq(L_3, test_not);
          clSetq(L_4, key);
          clSetq(L_0,
                 clMember1(L_0__R1, list2, L_2, L_3, L_4, clEOA)); }
        clSetq(L_test, clNot(L_0, clEOA)); }
      if (clTrue(L_test)) return(clValues1(clNIL)); }
    { clObject L_0;
      clSetq(L_0, L_sublist437);
      clSetq(L_sublist437, clCdr(L_0, clEOA)); }
    { clObject L_0;
      clSetq(L_0, L_sublist437);
      clSetq(elt, clCar(L_0, clEOA)); }
    goto l_ITERATE438; }
  clBlockEnd(NIL);
  return(clValues1(res)); }

clObject clNunion clVdecl(_ap)
{ clObject L_ap, list1, list2, L_keys, test, test_not, key, first,
  last;
  { clBeginParse(_ap);
    clSetq(list1,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(list2,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test, clCar(L_0, clEOA)); }
    else clSetq(test, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST_NOT, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test_not, clCar(L_0, clEOA)); }
    else clSetq(test_not, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clSymbolFunctionValue(clIDENTITY));
    clSetq(first, clNIL);
    clSetq(last, clNIL);
    clCheckKeys(L_keys, CONS_1, clEOA);
    clEndParse(_ap); }
  { clObject sub;
    clSetq(sub, list1);
    clLabel(l_ITERATE444);
    if (clTrue(clEndp(sub, clEOA)))
      { if (clTrue(last))
          clRplacd(last, list2, clEOA);
        else clSetq(first, list2);
        return(clValues1(first)); }
    { clObject L_test;
      { clObject L_0;
        { clObject L_4, L_3, L_2, L_0__R1;
          { clObject L_0__R2;
            clSetq(L_0__R2, key);
            clSetq(L_0__R1,
                   clFuncall(L_0__R2, clCar(sub, clEOA), clEOA)); }
          clSetq(L_2, test);
          clSetq(L_3, test_not);
          clSetq(L_4, key);
          clSetq(L_0,
                 clMember1(L_0__R1, list2, L_2, L_3, L_4, clEOA)); }
        clSetq(L_test, clNot(L_0, clEOA)); }
      if (clTrue(L_test))
        { if (clTrue(last))
            clRplacd(last, sub, clEOA);
          else clSetq(first, sub);
          clSetq(last, sub); } }
    { clObject L_value445;
      clSetq(L_value445, clCdr(sub, clEOA));
      clSetq(sub, L_value445); }
    goto l_ITERATE444; } }

clObject clNintersection clVdecl(_ap)
{ clObject L_ap, list1, list2, L_keys, test, test_not, key, first,
  last;
  { clBeginParse(_ap);
    clSetq(list1,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(list2,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test, clCar(L_0, clEOA)); }
    else clSetq(test, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST_NOT, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test_not, clCar(L_0, clEOA)); }
    else clSetq(test_not, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clSymbolFunctionValue(clIDENTITY));
    clSetq(first, clNIL);
    clSetq(last, clNIL);
    clCheckKeys(L_keys, CONS_1, clEOA);
    clEndParse(_ap); }
  { clObject sub;
    clSetq(sub, list1);
    clLabel(l_ITERATE450);
    if (clTrue(clEndp(sub, clEOA)))
      { if (clTrue(last))
          clRplacd(last, clNIL, clEOA);
        else clSetq(first, clNIL);
        return(clValues1(first)); }
    { clObject L_test;
      { clObject L_4, L_3, L_2, L_0;
        { clObject L_0__R1;
          clSetq(L_0__R1, key);
          clSetq(L_0, clFuncall(L_0__R1, clCar(sub, clEOA), clEOA)); }
        clSetq(L_2, test);
        clSetq(L_3, test_not);
        clSetq(L_4, key);
        clSetq(L_test, clMember1(L_0, list2, L_2, L_3, L_4, clEOA)); }
      if (clTrue(L_test))
        { if (clTrue(last))
            clRplacd(last, sub, clEOA);
          else clSetq(first, sub);
          clSetq(last, sub); } }
    { clObject L_value451;
      clSetq(L_value451, clCdr(sub, clEOA));
      clSetq(sub, L_value451); }
    goto l_ITERATE450; } }

clObject clNsetDifference clVdecl(_ap)
{ clObject L_ap, list1, list2, L_keys, test, test_not, key, first,
  last;
  { clBeginParse(_ap);
    clSetq(list1,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(list2,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test, clCar(L_0, clEOA)); }
    else clSetq(test, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST_NOT, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test_not, clCar(L_0, clEOA)); }
    else clSetq(test_not, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clSymbolFunctionValue(clIDENTITY));
    clSetq(first, clNIL);
    clSetq(last, clNIL);
    clCheckKeys(L_keys, CONS_1, clEOA);
    clEndParse(_ap); }
  { clObject sub;
    clSetq(sub, list1);
    clLabel(l_ITERATE456);
    if (clTrue(clEndp(sub, clEOA)))
      { if (clTrue(last))
          clRplacd(last, clNIL, clEOA);
        else clSetq(first, clNIL);
        return(clValues1(first)); }
    { clObject L_test;
      { clObject L_0;
        { clObject L_4, L_3, L_2, L_0__R1;
          { clObject L_0__R2;
            clSetq(L_0__R2, key);
            clSetq(L_0__R1,
                   clFuncall(L_0__R2, clCar(sub, clEOA), clEOA)); }
          clSetq(L_2, test);
          clSetq(L_3, test_not);
          clSetq(L_4, key);
          clSetq(L_0,
                 clMember1(L_0__R1, list2, L_2, L_3, L_4, clEOA)); }
        clSetq(L_test, clNot(L_0, clEOA)); }
      if (clTrue(L_test))
        { if (clTrue(last))
            clRplacd(last, sub, clEOA);
          else clSetq(first, sub);
          clSetq(last, sub); } }
    { clObject L_value457;
      clSetq(L_value457, clCdr(sub, clEOA));
      clSetq(sub, L_value457); }
    goto l_ITERATE456; } }

clObject clNsetExclusiveOr clVdecl(_ap)
{ clObject L_ap, list1, list2, L_keys, test, test_not, key;
  { clBeginParse(_ap);
    clSetq(list1,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(list2,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    clSetq(L_keys, clVargs(_ap));
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test, clCar(L_0, clEOA)); }
    else clSetq(test, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyTEST_NOT, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(test_not, clCar(L_0, clEOA)); }
    else clSetq(test_not, clNIL);
    if (clTrue(clSetq(L_ap, clKeyArg(keyKEY, L_keys, clEOA))))
      { clObject L_0;
        clSetq(L_0, L_ap);
        clSetq(key, clCar(L_0, clEOA)); }
    else clSetq(key, clSymbolFunctionValue(clIDENTITY));
    clCheckKeys(L_keys, CONS_1, clEOA);
    clEndParse(_ap); }
  { clObject list1__R1, list2__R1, x, splicex;
    clSetq(list1__R1, list1);
    clSetq(list2__R1, list2);
    clSetq(x, list1);
    clSetq(splicex, clNIL);
    clLabel(l_ITERATE458);
    if (clTrue(clEndp(x, clEOA)))
      { if (clTrue(clNull(splicex, clEOA)))
          clSetq(list1__R1, list2__R1);
        else clRplacd(splicex, list2__R1, clEOA);
        return(clValues1(list1__R1)); }
    { clObject y, splicey;
      clSetq(y, list2__R1);
      clSetq(splicey, clNIL);
      clLabel(l_ITERATE459);
      if (clTrue(clEndp(y, clEOA)))
        { clSetq(splicex, x); clLocalReturn(NIL); }
      { clObject L_test;
        { clObject L_4, L_3, L_2, L_1, L_0;
          { clObject L_0__R1;
            clSetq(L_0__R1, key);
            clSetq(L_0, clFuncall(L_0__R1, clCar(x, clEOA), clEOA)); }
          clSetq(L_1, clCar(y, clEOA));
          clSetq(L_2, test);
          clSetq(L_3, test_not);
          clSetq(L_4, key);
          clSetq(L_test,
                 clSatisfiesTheTest(L_0, L_1, L_2, L_3, L_4, clEOA)); }
        if (clTrue(L_test))
          { { clObject L_test__R1;
              { clObject L_0;
                clSetq(L_0, splicex);
                clSetq(L_test__R1, clNull(L_0, clEOA)); }
              if (clTrue(L_test__R1))
                clSetq(list1__R1, clCdr(x, clEOA));
              else
                { clObject L_0;
                  clSetq(L_0, splicex);
                  clRplacd(L_0, clCdr(x, clEOA), clEOA); } }
            if (clTrue(clNull(splicey, clEOA)))
              clSetq(list2__R1, clCdr(y, clEOA));
            else clRplacd(splicey, clCdr(y, clEOA), clEOA);
            clLocalReturn(NIL); }
        else clSetq(splicey, y); }
      { clObject L_value460;
        clSetq(L_value460, clCdr(y, clEOA));
        clSetq(y, L_value460); }
      goto l_ITERATE459; }
    clBlockEnd(NIL);
    { clObject L_value461;
      clSetq(L_value461, clCdr(x, clEOA));
      clSetq(x, L_value461); }
    goto l_ITERATE458; } }

void clInitSet __P((void)) 
{ clDbind(clstarPACKAGEstar);
  clDbind(clstarREADTABLEstar);
  clDbind(clstarLOAD_TRUENAMEstar);
  clDbind(clstarLOAD_PATHNAMEstar);
  clSetq(I_1, clIntFixnum(1));
  clSetq(I_2, clIntFixnum(2));
  clSetq(STR_KEY__0,
         clCharpSimpleBaseString("KEY"));
  clSetq(keyKEY, clMakeKeyword(STR_KEY__0, clEOA));
  clSetq(CONS_0, clCons(keyKEY, clNIL, clEOA));
  clSetq(STR_TEST__1,
         clCharpSimpleBaseString("TEST"));
  clSetq(keyTEST, clMakeKeyword(STR_TEST__1, clEOA));
  clSetq(STR_TEST_NOT__2,
         clCharpSimpleBaseString("TEST-NOT"));
  clSetq(keyTEST_NOT, clMakeKeyword(STR_TEST_NOT__2, clEOA));
  clSetq(CONS_3, clCons(keyTEST, clNIL, clEOA));
  clSetq(CONS_2, clCons(keyTEST_NOT, CONS_3, clEOA));
  clSetq(CONS_1, clCons(keyKEY, CONS_2, clEOA));

  clSetSymbolFunctionValue(clMEMBER_IF,
                           clMakeClosure(0, clMemberIf, clNULL_HOOK));
  (void) clMEMBER_IF;
  clSetSymbolFunctionValue(clMEMBER_IF_NOT,
                           clMakeClosure(0,
                                         clMemberIfNot,
                                         clNULL_HOOK));
  (void) clMEMBER_IF_NOT;
  clSetSymbolFunctionValue(clTAILP,
                           clMakeClosure(0, clTailp, clNULL_HOOK));
  (void) clTAILP;
  clSetSymbolFunctionValue(clUNION,
                           clMakeClosure(0, clUnion, clNULL_HOOK));
  (void) clUNION;
  clSetSymbolFunctionValue(clINTERSECTION,
                           clMakeClosure(0,
                                         clIntersection,
                                         clNULL_HOOK));
  (void) clINTERSECTION;
  clSetSymbolFunctionValue(clSET_DIFFERENCE,
                           clMakeClosure(0,
                                         clSetDifference,
                                         clNULL_HOOK));
  (void) clSET_DIFFERENCE;
  clSetSymbolFunctionValue(clSET_EXCLUSIVE_OR,
                           clMakeClosure(0,
                                         clSetExclusiveOr,
                                         clNULL_HOOK));
  (void) clSET_EXCLUSIVE_OR;
  clSetSymbolFunctionValue(clSUBSETP,
                           clMakeClosure(0, clSubsetp, clNULL_HOOK));
  (void) clSUBSETP;
  clSetSymbolFunctionValue(clNUNION,
                           clMakeClosure(0, clNunion, clNULL_HOOK));
  (void) clNUNION;
  clSetSymbolFunctionValue(clNINTERSECTION,
                           clMakeClosure(0,
                                         clNintersection,
                                         clNULL_HOOK));
  (void) clNINTERSECTION;
  clSetSymbolFunctionValue(clNSET_DIFFERENCE,
                           clMakeClosure(0,
                                         clNsetDifference,
                                         clNULL_HOOK));
  (void) clNSET_DIFFERENCE;
  clSetSymbolFunctionValue(clNSET_EXCLUSIVE_OR,
                           clMakeClosure(0,
                                         clNsetExclusiveOr,
                                         clNULL_HOOK));
  (void) clNSET_EXCLUSIVE_OR;
  clUnwind(4); }
