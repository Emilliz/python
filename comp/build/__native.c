#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "__native.h"
#include "__native_internal.h"
static PyMethodDef module_methods[] = {
    {"vector_gauss", (PyCFunction)CPyPy_vector_gauss, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "gaus",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_methods
};

PyMODINIT_FUNC PyInit_gaus(void)
{
    PyObject* modname = NULL;
    if (CPyModule_gaus_internal) {
        Py_INCREF(CPyModule_gaus_internal);
        return CPyModule_gaus_internal;
    }
    CPyModule_gaus_internal = PyModule_Create(&module);
    if (unlikely(CPyModule_gaus_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_gaus_internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_gaus_internal);
    if (unlikely(CPyStatic_globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef___top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_gaus_internal;
    fail:
    Py_CLEAR(CPyModule_gaus_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_vector_gauss(PyObject *cpy_r_a, PyObject *cpy_r_b) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_j;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_i;
    int64_t cpy_r_r26;
    char cpy_r_r27;
    int64_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    tuple_T2OO cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    tuple_T2OO cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_frac;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    tuple_T2OO cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    tuple_T2OO cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    CPyTagged cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyTagged cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    tuple_T2OO cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    CPyTagged cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject **cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    tuple_T2OO cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    CPyTagged cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
CPyL0: ;
    cpy_r_r0 = CPyStatics[3]; /* 'copy' */
    cpy_r_r1 = CPyObject_CallMethodObjArgs(cpy_r_a, cpy_r_r0, NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 19, CPyStatic_globals);
        goto CPyL66;
    }
CPyL1: ;
    cpy_r_a = cpy_r_r1;
    cpy_r_r2 = CPyStatics[3]; /* 'copy' */
    cpy_r_r3 = CPyObject_CallMethodObjArgs(cpy_r_b, cpy_r_r2, NULL);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 20, CPyStatic_globals);
        goto CPyL67;
    }
CPyL2: ;
    cpy_r_b = cpy_r_r3;
    cpy_r_r4 = CPyStatic_globals;
    cpy_r_r5 = CPyStatics[4]; /* 'n' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 21, CPyStatic_globals);
        goto CPyL68;
    }
CPyL3: ;
    if (likely(PyLong_Check(cpy_r_r6)))
        cpy_r_r7 = CPyTagged_FromObject(cpy_r_r6);
    else {
        CPy_TypeError("int", cpy_r_r6); cpy_r_r7 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 21, CPyStatic_globals);
        goto CPyL68;
    }
CPyL4: ;
    cpy_r_r8 = CPyTagged_Subtract(cpy_r_r7, 2);
    CPyTagged_DECREF(cpy_r_r7);
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_r8);
    cpy_r_r10 = 0;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_j = cpy_r_r11;
CPyL5: ;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r_r13 = PyObject_RichCompare(cpy_r_r12, cpy_r_r9, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 21, CPyStatic_globals);
        goto CPyL69;
    }
CPyL6: ;
    cpy_r_r14 = PyObject_IsTrue(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 21, CPyStatic_globals);
        goto CPyL69;
    }
CPyL7: ;
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL70;
CPyL8: ;
    cpy_r_r17 = CPyTagged_StealAsObject(2);
    cpy_r_r18 = PyNumber_Add(cpy_r_j, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 22, CPyStatic_globals);
        goto CPyL69;
    }
CPyL9: ;
    cpy_r_r19 = CPyStatic_globals;
    cpy_r_r20 = CPyStatics[4]; /* 'n' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 22, CPyStatic_globals);
        goto CPyL71;
    }
CPyL10: ;
    if (likely(PyLong_Check(cpy_r_r21)))
        cpy_r_r22 = CPyTagged_FromObject(cpy_r_r21);
    else {
        CPy_TypeError("int", cpy_r_r21); cpy_r_r22 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == CPY_INT_TAG)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 22, CPyStatic_globals);
        goto CPyL71;
    }
CPyL11: ;
    if (likely(PyLong_Check(cpy_r_r18)))
        cpy_r_r23 = CPyTagged_FromObject(cpy_r_r18);
    else {
        CPy_TypeError("int", cpy_r_r18); cpy_r_r23 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r23 == CPY_INT_TAG)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", -1, CPyStatic_globals);
        goto CPyL72;
    }
CPyL12: ;
    cpy_r_r24 = cpy_r_r23;
    CPyTagged_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyTagged_StealAsObject(cpy_r_r24);
    cpy_r_i = cpy_r_r25;
CPyL13: ;
    cpy_r_r26 = cpy_r_r24 & 1;
    cpy_r_r27 = cpy_r_r26 == 0;
    cpy_r_r28 = cpy_r_r22 & 1;
    cpy_r_r29 = cpy_r_r28 == 0;
    cpy_r_r30 = cpy_r_r27 & cpy_r_r29;
    if (!cpy_r_r30) goto CPyL15;
CPyL14: ;
    cpy_r_r31 = (Py_ssize_t)cpy_r_r24 < (Py_ssize_t)cpy_r_r22;
    cpy_r_r32 = cpy_r_r31;
    goto CPyL16;
CPyL15: ;
    cpy_r_r33 = CPyTagged_IsLt_(cpy_r_r24, cpy_r_r22);
    cpy_r_r32 = cpy_r_r33;
CPyL16: ;
    if (!cpy_r_r32) goto CPyL73;
CPyL17: ;
    cpy_r_r34.f0 = cpy_r_i;
    cpy_r_r34.f1 = cpy_r_j;
    CPy_INCREF(cpy_r_r34.f0);
    CPy_INCREF(cpy_r_r34.f1);
    cpy_r_r35 = PyTuple_New(2);
    if (unlikely(cpy_r_r35 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1 = cpy_r_r34.f0;
    PyTuple_SET_ITEM(cpy_r_r35, 0, __tmp1);
    PyObject *__tmp2 = cpy_r_r34.f1;
    PyTuple_SET_ITEM(cpy_r_r35, 1, __tmp2);
    cpy_r_r36 = PyObject_GetItem(cpy_r_a, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 23, CPyStatic_globals);
        goto CPyL74;
    }
CPyL18: ;
    cpy_r_r37.f0 = cpy_r_j;
    cpy_r_r37.f1 = cpy_r_j;
    CPy_INCREF(cpy_r_r37.f0);
    CPy_INCREF(cpy_r_r37.f1);
    cpy_r_r38 = PyTuple_New(2);
    if (unlikely(cpy_r_r38 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp3 = cpy_r_r37.f0;
    PyTuple_SET_ITEM(cpy_r_r38, 0, __tmp3);
    PyObject *__tmp4 = cpy_r_r37.f1;
    PyTuple_SET_ITEM(cpy_r_r38, 1, __tmp4);
    cpy_r_r39 = PyObject_GetItem(cpy_r_a, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 23, CPyStatic_globals);
        goto CPyL75;
    }
CPyL19: ;
    cpy_r_r40 = PyNumber_TrueDivide(cpy_r_r36, cpy_r_r39);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 23, CPyStatic_globals);
        goto CPyL74;
    }
CPyL20: ;
    cpy_r_frac = cpy_r_r40;
    cpy_r_r41 = CPyTagged_StealAsObject(2);
    cpy_r_r42 = PyNumber_Add(cpy_r_j, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 24, CPyStatic_globals);
        goto CPyL76;
    }
CPyL21: ;
    cpy_r_r43 = CPyStatic_globals;
    cpy_r_r44 = CPyStatics[4]; /* 'n' */
    cpy_r_r45 = CPyDict_GetItem(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 24, CPyStatic_globals);
        goto CPyL77;
    }
CPyL22: ;
    if (likely(PyLong_Check(cpy_r_r45)))
        cpy_r_r46 = CPyTagged_FromObject(cpy_r_r45);
    else {
        CPy_TypeError("int", cpy_r_r45); cpy_r_r46 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == CPY_INT_TAG)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 24, CPyStatic_globals);
        goto CPyL77;
    }
CPyL23: ;
    cpy_r_r47 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r48 = CPyTagged_StealAsObject(cpy_r_r46);
    cpy_r_r49 = PySlice_New(cpy_r_r42, cpy_r_r48, cpy_r_r47);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", -1, CPyStatic_globals);
        goto CPyL76;
    }
CPyL24: ;
    cpy_r_r50.f0 = cpy_r_i;
    cpy_r_r50.f1 = cpy_r_r49;
    CPy_INCREF(cpy_r_r50.f0);
    CPy_INCREF(cpy_r_r50.f1);
    CPy_DECREF(cpy_r_r49);
    CPy_INCREF(cpy_r_r50.f0);
    CPy_INCREF(cpy_r_r50.f1);
    cpy_r_r51 = PyTuple_New(2);
    if (unlikely(cpy_r_r51 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5 = cpy_r_r50.f0;
    PyTuple_SET_ITEM(cpy_r_r51, 0, __tmp5);
    PyObject *__tmp6 = cpy_r_r50.f1;
    PyTuple_SET_ITEM(cpy_r_r51, 1, __tmp6);
    cpy_r_r52 = PyObject_GetItem(cpy_r_a, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 24, CPyStatic_globals);
        goto CPyL78;
    }
CPyL25: ;
    cpy_r_r53 = CPyTagged_StealAsObject(2);
    cpy_r_r54 = PyNumber_Add(cpy_r_j, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 24, CPyStatic_globals);
        goto CPyL79;
    }
CPyL26: ;
    cpy_r_r55 = CPyStatic_globals;
    cpy_r_r56 = CPyStatics[4]; /* 'n' */
    cpy_r_r57 = CPyDict_GetItem(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 24, CPyStatic_globals);
        goto CPyL80;
    }
CPyL27: ;
    if (likely(PyLong_Check(cpy_r_r57)))
        cpy_r_r58 = CPyTagged_FromObject(cpy_r_r57);
    else {
        CPy_TypeError("int", cpy_r_r57); cpy_r_r58 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == CPY_INT_TAG)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 24, CPyStatic_globals);
        goto CPyL80;
    }
CPyL28: ;
    cpy_r_r59 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r60 = CPyTagged_StealAsObject(cpy_r_r58);
    cpy_r_r61 = PySlice_New(cpy_r_r54, cpy_r_r60, cpy_r_r59);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", -1, CPyStatic_globals);
        goto CPyL79;
    }
CPyL29: ;
    cpy_r_r62.f0 = cpy_r_j;
    cpy_r_r62.f1 = cpy_r_r61;
    CPy_INCREF(cpy_r_r62.f0);
    CPy_INCREF(cpy_r_r62.f1);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = PyTuple_New(2);
    if (unlikely(cpy_r_r63 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7 = cpy_r_r62.f0;
    PyTuple_SET_ITEM(cpy_r_r63, 0, __tmp7);
    PyObject *__tmp8 = cpy_r_r62.f1;
    PyTuple_SET_ITEM(cpy_r_r63, 1, __tmp8);
    cpy_r_r64 = PyObject_GetItem(cpy_r_a, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 24, CPyStatic_globals);
        goto CPyL79;
    }
CPyL30: ;
    cpy_r_r65 = PyNumber_Multiply(cpy_r_r64, cpy_r_frac);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 24, CPyStatic_globals);
        goto CPyL79;
    }
CPyL31: ;
    cpy_r_r66 = PyNumber_InPlaceSubtract(cpy_r_r52, cpy_r_r65);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 24, CPyStatic_globals);
        goto CPyL78;
    }
CPyL32: ;
    cpy_r_r67 = PyTuple_New(2);
    if (unlikely(cpy_r_r67 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9 = cpy_r_r50.f0;
    PyTuple_SET_ITEM(cpy_r_r67, 0, __tmp9);
    PyObject *__tmp10 = cpy_r_r50.f1;
    PyTuple_SET_ITEM(cpy_r_r67, 1, __tmp10);
    cpy_r_r68 = PyObject_SetItem(cpy_r_a, cpy_r_r67, cpy_r_r66);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 24, CPyStatic_globals);
        goto CPyL76;
    }
CPyL33: ;
    cpy_r_r70 = PyObject_GetItem(cpy_r_b, cpy_r_i);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 25, CPyStatic_globals);
        goto CPyL76;
    }
CPyL34: ;
    cpy_r_r71 = PyObject_GetItem(cpy_r_b, cpy_r_j);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 25, CPyStatic_globals);
        goto CPyL81;
    }
CPyL35: ;
    cpy_r_r72 = PyNumber_Multiply(cpy_r_frac, cpy_r_r71);
    CPy_DECREF(cpy_r_frac);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 25, CPyStatic_globals);
        goto CPyL82;
    }
CPyL36: ;
    cpy_r_r73 = PyNumber_Subtract(cpy_r_r70, cpy_r_r72);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 25, CPyStatic_globals);
        goto CPyL74;
    }
CPyL37: ;
    cpy_r_r74 = PyObject_SetItem(cpy_r_b, cpy_r_i, cpy_r_r73);
    CPy_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 25, CPyStatic_globals);
        goto CPyL83;
    }
CPyL38: ;
    cpy_r_r76 = CPyTagged_Add(cpy_r_r24, 2);
    CPyTagged_DECREF(cpy_r_r24);
    CPyTagged_INCREF(cpy_r_r76);
    cpy_r_r24 = cpy_r_r76;
    cpy_r_r77 = CPyTagged_StealAsObject(cpy_r_r76);
    cpy_r_i = cpy_r_r77;
    goto CPyL13;
CPyL39: ;
    cpy_r_r78 = CPyTagged_Add(cpy_r_r10, 2);
    CPyTagged_DECREF(cpy_r_r10);
    CPyTagged_INCREF(cpy_r_r78);
    cpy_r_r10 = cpy_r_r78;
    cpy_r_r79 = CPyTagged_StealAsObject(cpy_r_r78);
    cpy_r_j = cpy_r_r79;
    goto CPyL5;
CPyL40: ;
    cpy_r_r80 = CPyStatic_globals;
    cpy_r_r81 = CPyStatics[4]; /* 'n' */
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 27, CPyStatic_globals);
        goto CPyL68;
    }
CPyL41: ;
    if (likely(PyLong_Check(cpy_r_r82)))
        cpy_r_r83 = CPyTagged_FromObject(cpy_r_r82);
    else {
        CPy_TypeError("int", cpy_r_r82); cpy_r_r83 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == CPY_INT_TAG)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 27, CPyStatic_globals);
        goto CPyL68;
    }
CPyL42: ;
    cpy_r_r84 = CPyTagged_Subtract(cpy_r_r83, 2);
    CPyTagged_DECREF(cpy_r_r83);
    cpy_r_r85 = CPyTagged_StealAsObject(cpy_r_r84);
    cpy_r_r86 = CPyTagged_StealAsObject(-2);
    if (likely(PyLong_Check(cpy_r_r85)))
        cpy_r_r87 = CPyTagged_FromObject(cpy_r_r85);
    else {
        CPy_TypeError("int", cpy_r_r85); cpy_r_r87 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r87 == CPY_INT_TAG)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", -1, CPyStatic_globals);
        goto CPyL84;
    }
CPyL43: ;
    cpy_r_r88 = cpy_r_r87;
    CPyTagged_INCREF(cpy_r_r88);
    cpy_r_r89 = CPyTagged_StealAsObject(cpy_r_r88);
    cpy_r_i = cpy_r_r89;
CPyL44: ;
    CPyTagged_INCREF(cpy_r_r88);
    cpy_r_r90 = CPyTagged_StealAsObject(cpy_r_r88);
    cpy_r_r91 = PyObject_RichCompare(cpy_r_r90, cpy_r_r86, 4);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 27, CPyStatic_globals);
        goto CPyL85;
    }
CPyL45: ;
    cpy_r_r92 = PyObject_IsTrue(cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 27, CPyStatic_globals);
        goto CPyL85;
    }
CPyL46: ;
    cpy_r_r94 = cpy_r_r92;
    if (!cpy_r_r94) goto CPyL86;
CPyL47: ;
    cpy_r_r95 = PyObject_GetItem(cpy_r_b, cpy_r_i);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL85;
    }
CPyL48: ;
    cpy_r_r96 = CPyModule_numpy;
    cpy_r_r97 = CPyStatics[5]; /* 'dot' */
    cpy_r_r98 = CPyObject_GetAttr(cpy_r_r96, cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL87;
    }
CPyL49: ;
    cpy_r_r99 = CPyTagged_StealAsObject(2);
    cpy_r_r100 = PyNumber_Add(cpy_r_i, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL88;
    }
CPyL50: ;
    cpy_r_r101 = CPyStatic_globals;
    cpy_r_r102 = CPyStatics[4]; /* 'n' */
    cpy_r_r103 = CPyDict_GetItem(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL89;
    }
CPyL51: ;
    if (likely(PyLong_Check(cpy_r_r103)))
        cpy_r_r104 = CPyTagged_FromObject(cpy_r_r103);
    else {
        CPy_TypeError("int", cpy_r_r103); cpy_r_r104 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == CPY_INT_TAG)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL89;
    }
CPyL52: ;
    cpy_r_r105 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r106 = CPyTagged_StealAsObject(cpy_r_r104);
    cpy_r_r107 = PySlice_New(cpy_r_r100, cpy_r_r106, cpy_r_r105);
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", -1, CPyStatic_globals);
        goto CPyL88;
    }
CPyL53: ;
    cpy_r_r108.f0 = cpy_r_i;
    cpy_r_r108.f1 = cpy_r_r107;
    CPy_INCREF(cpy_r_r108.f0);
    CPy_INCREF(cpy_r_r108.f1);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r109 = PyTuple_New(2);
    if (unlikely(cpy_r_r109 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp11 = cpy_r_r108.f0;
    PyTuple_SET_ITEM(cpy_r_r109, 0, __tmp11);
    PyObject *__tmp12 = cpy_r_r108.f1;
    PyTuple_SET_ITEM(cpy_r_r109, 1, __tmp12);
    cpy_r_r110 = PyObject_GetItem(cpy_r_a, cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL88;
    }
CPyL54: ;
    cpy_r_r111 = CPyTagged_StealAsObject(2);
    cpy_r_r112 = PyNumber_Add(cpy_r_i, cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL90;
    }
CPyL55: ;
    cpy_r_r113 = CPyStatic_globals;
    cpy_r_r114 = CPyStatics[4]; /* 'n' */
    cpy_r_r115 = CPyDict_GetItem(cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL91;
    }
CPyL56: ;
    if (likely(PyLong_Check(cpy_r_r115)))
        cpy_r_r116 = CPyTagged_FromObject(cpy_r_r115);
    else {
        CPy_TypeError("int", cpy_r_r115); cpy_r_r116 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == CPY_INT_TAG)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL91;
    }
CPyL57: ;
    cpy_r_r117 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r118 = CPyTagged_StealAsObject(cpy_r_r116);
    cpy_r_r119 = PySlice_New(cpy_r_r112, cpy_r_r118, cpy_r_r117);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL90;
    }
CPyL58: ;
    cpy_r_r120 = PyObject_GetItem(cpy_r_b, cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL90;
    }
CPyL59: ;
    PyObject *cpy_r_r121[2] = {cpy_r_r110, cpy_r_r120};
    cpy_r_r122 = (PyObject **)&cpy_r_r121;
    cpy_r_r123 = _PyObject_Vectorcall(cpy_r_r98, cpy_r_r122, 2, 0);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL92;
    }
CPyL60: ;
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r120);
    cpy_r_r124 = PyNumber_Subtract(cpy_r_r95, cpy_r_r123);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL85;
    }
CPyL61: ;
    cpy_r_r125.f0 = cpy_r_i;
    cpy_r_r125.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r125.f0);
    CPy_INCREF(cpy_r_r125.f1);
    cpy_r_r126 = PyTuple_New(2);
    if (unlikely(cpy_r_r126 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp13 = cpy_r_r125.f0;
    PyTuple_SET_ITEM(cpy_r_r126, 0, __tmp13);
    PyObject *__tmp14 = cpy_r_r125.f1;
    PyTuple_SET_ITEM(cpy_r_r126, 1, __tmp14);
    cpy_r_r127 = PyObject_GetItem(cpy_r_a, cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL93;
    }
CPyL62: ;
    cpy_r_r128 = PyNumber_TrueDivide(cpy_r_r124, cpy_r_r127);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL85;
    }
CPyL63: ;
    cpy_r_r129 = PyObject_SetItem(cpy_r_b, cpy_r_i, cpy_r_r128);
    CPy_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("gaus.py", "vector_gauss", 28, CPyStatic_globals);
        goto CPyL94;
    }
CPyL64: ;
    cpy_r_r131 = CPyTagged_Add(cpy_r_r88, -2);
    CPyTagged_DECREF(cpy_r_r88);
    CPyTagged_INCREF(cpy_r_r131);
    cpy_r_r88 = cpy_r_r131;
    cpy_r_r132 = CPyTagged_StealAsObject(cpy_r_r131);
    cpy_r_i = cpy_r_r132;
    goto CPyL44;
CPyL65: ;
    return cpy_r_b;
CPyL66: ;
    cpy_r_r133 = NULL;
    return cpy_r_r133;
CPyL67: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL66;
CPyL68: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    goto CPyL66;
CPyL69: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_j);
    goto CPyL66;
CPyL70: ;
    CPy_DECREF(cpy_r_r9);
    CPyTagged_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_j);
    goto CPyL40;
CPyL71: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_r18);
    goto CPyL66;
CPyL72: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r22);
    goto CPyL66;
CPyL73: ;
    CPy_DECREF(cpy_r_j);
    CPyTagged_DECREF(cpy_r_r22);
    CPyTagged_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_i);
    goto CPyL39;
CPyL74: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_i);
    goto CPyL66;
CPyL75: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r36);
    goto CPyL66;
CPyL76: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_frac);
    goto CPyL66;
CPyL77: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_frac);
    CPy_DecRef(cpy_r_r42);
    goto CPyL66;
CPyL78: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_frac);
    CPy_DecRef(cpy_r_r50.f0);
    CPy_DecRef(cpy_r_r50.f1);
    goto CPyL66;
CPyL79: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_frac);
    CPy_DecRef(cpy_r_r50.f0);
    CPy_DecRef(cpy_r_r50.f1);
    CPy_DecRef(cpy_r_r52);
    goto CPyL66;
CPyL80: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_frac);
    CPy_DecRef(cpy_r_r50.f0);
    CPy_DecRef(cpy_r_r50.f1);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r54);
    goto CPyL66;
CPyL81: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_frac);
    CPy_DecRef(cpy_r_r70);
    goto CPyL66;
CPyL82: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r70);
    goto CPyL66;
CPyL83: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_r24);
    goto CPyL66;
CPyL84: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r86);
    goto CPyL66;
CPyL85: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r86);
    CPyTagged_DecRef(cpy_r_r88);
    goto CPyL66;
CPyL86: ;
    CPy_DECREF(cpy_r_a);
    CPy_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r86);
    CPyTagged_DECREF(cpy_r_r88);
    goto CPyL65;
CPyL87: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r86);
    CPyTagged_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r95);
    goto CPyL66;
CPyL88: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r86);
    CPyTagged_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r98);
    goto CPyL66;
CPyL89: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r86);
    CPyTagged_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    goto CPyL66;
CPyL90: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r86);
    CPyTagged_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r110);
    goto CPyL66;
CPyL91: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r86);
    CPyTagged_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r112);
    goto CPyL66;
CPyL92: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r86);
    CPyTagged_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r120);
    goto CPyL66;
CPyL93: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r86);
    CPyTagged_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r124);
    goto CPyL66;
CPyL94: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_b);
    CPy_DecRef(cpy_r_r86);
    CPyTagged_DecRef(cpy_r_r88);
    goto CPyL66;
}

PyObject *CPyPy_vector_gauss(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"a", "b", 0};
    static CPyArg_Parser parser = {"OO:vector_gauss", kwlist, 0};
    PyObject *obj_a;
    PyObject *obj_b;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_a, &obj_b)) {
        return NULL;
    }
    PyObject *arg_a = obj_a;
    PyObject *arg_b = obj_b;
    PyObject *retval = CPyDef_vector_gauss(arg_a, arg_b);
    return retval;
fail: ;
    CPy_AddTraceback("gaus.py", "vector_gauss", 18, CPyStatic_globals);
    return NULL;
}

char CPyDef___top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    CPyPtr cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    CPyPtr cpy_r_r65;
    CPyPtr cpy_r_r66;
    CPyPtr cpy_r_r67;
    CPyPtr cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    CPyPtr cpy_r_r75;
    CPyPtr cpy_r_r76;
    CPyPtr cpy_r_r77;
    CPyPtr cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    CPyPtr cpy_r_r84;
    CPyPtr cpy_r_r85;
    CPyPtr cpy_r_r86;
    CPyPtr cpy_r_r87;
    CPyPtr cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyPtr cpy_r_r94;
    CPyPtr cpy_r_r95;
    CPyPtr cpy_r_r96;
    CPyPtr cpy_r_r97;
    CPyPtr cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyPtr cpy_r_r100;
    CPyPtr cpy_r_r101;
    CPyPtr cpy_r_r102;
    CPyPtr cpy_r_r103;
    CPyPtr cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject **cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    CPyPtr cpy_r_r124;
    CPyPtr cpy_r_r125;
    CPyPtr cpy_r_r126;
    CPyPtr cpy_r_r127;
    CPyPtr cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject **cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    CPyTagged cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    int32_t cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    int32_t cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject **cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    int32_t cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject **cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject **cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject **cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
CPyL0: ;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
CPyL1: ;
    cpy_r_r3 = CPyStatics[6]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", -1, CPyStatic_globals);
        goto CPyL57;
    }
CPyL2: ;
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatic_globals;
    cpy_r_r6 = CPyModule_numpy;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    if (cpy_r_r8) goto CPyL6;
CPyL4: ;
    cpy_r_r9 = CPyStatics[7]; /* 'numpy' */
    cpy_r_r10 = PyImport_Import(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 1, CPyStatic_globals);
        goto CPyL57;
    }
CPyL5: ;
    CPyModule_numpy = cpy_r_r10;
    CPy_INCREF(CPyModule_numpy);
    CPy_DECREF(cpy_r_r10);
CPyL6: ;
    cpy_r_r11 = PyImport_GetModuleDict();
    cpy_r_r12 = CPyStatics[7]; /* 'numpy' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 1, CPyStatic_globals);
        goto CPyL57;
    }
CPyL7: ;
    cpy_r_r14 = CPyStatics[8]; /* 'np' */
    cpy_r_r15 = CPyDict_SetItem(cpy_r_r5, cpy_r_r14, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("gaus.py", "<module>", 1, CPyStatic_globals);
        goto CPyL57;
    }
CPyL8: ;
    cpy_r_r17 = CPyStatic_globals;
    cpy_r_r18 = CPyStatics[9]; /* 'array' */
    cpy_r_r19 = PyList_New(1);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 3, CPyStatic_globals);
        goto CPyL57;
    }
CPyL9: ;
    cpy_r_r20 = (CPyPtr)&((PyListObject *)cpy_r_r19)->ob_item;
    cpy_r_r21 = *(CPyPtr *)cpy_r_r20;
    CPy_INCREF(cpy_r_r18);
    *(PyObject * *)cpy_r_r21 = cpy_r_r18;
    cpy_r_r22 = CPyStatics[7]; /* 'numpy' */
    cpy_r_r23 = PyImport_ImportModuleLevelObject(cpy_r_r22, cpy_r_r17, 0, cpy_r_r19, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 3, CPyStatic_globals);
        goto CPyL57;
    }
CPyL10: ;
    CPyModule_numpy = cpy_r_r23;
    CPy_INCREF(CPyModule_numpy);
    cpy_r_r24 = CPyStatics[7]; /* 'numpy' */
    cpy_r_r25 = CPyStatics[9]; /* 'array' */
    cpy_r_r26 = CPyStatics[9]; /* 'array' */
    cpy_r_r27 = CPyImport_ImportFrom(cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 3, CPyStatic_globals);
        goto CPyL57;
    }
CPyL11: ;
    cpy_r_r28 = CPyStatics[9]; /* 'array' */
    cpy_r_r29 = CPyDict_SetItem(cpy_r_r17, cpy_r_r28, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("gaus.py", "<module>", 3, CPyStatic_globals);
        goto CPyL57;
    }
CPyL12: ;
    cpy_r_r31 = CPyStatic_globals;
    cpy_r_r32 = CPyStatics[10]; /* 'norm' */
    cpy_r_r33 = PyList_New(1);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 4, CPyStatic_globals);
        goto CPyL57;
    }
CPyL13: ;
    cpy_r_r34 = (CPyPtr)&((PyListObject *)cpy_r_r33)->ob_item;
    cpy_r_r35 = *(CPyPtr *)cpy_r_r34;
    CPy_INCREF(cpy_r_r32);
    *(PyObject * *)cpy_r_r35 = cpy_r_r32;
    cpy_r_r36 = CPyStatics[11]; /* 'numpy.linalg' */
    cpy_r_r37 = PyImport_ImportModuleLevelObject(cpy_r_r36, cpy_r_r31, 0, cpy_r_r33, 0);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 4, CPyStatic_globals);
        goto CPyL57;
    }
CPyL14: ;
    CPyModule_numpy___linalg = cpy_r_r37;
    CPy_INCREF(CPyModule_numpy___linalg);
    cpy_r_r38 = CPyStatics[11]; /* 'numpy.linalg' */
    cpy_r_r39 = CPyStatics[10]; /* 'norm' */
    cpy_r_r40 = CPyStatics[10]; /* 'norm' */
    cpy_r_r41 = CPyImport_ImportFrom(cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 4, CPyStatic_globals);
        goto CPyL57;
    }
CPyL15: ;
    cpy_r_r42 = CPyStatics[10]; /* 'norm' */
    cpy_r_r43 = CPyDict_SetItem(cpy_r_r31, cpy_r_r42, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("gaus.py", "<module>", 4, CPyStatic_globals);
        goto CPyL57;
    }
CPyL16: ;
    cpy_r_r45 = CPyStatic_globals;
    cpy_r_r46 = CPyStatics[12]; /* 'solve' */
    cpy_r_r47 = PyList_New(1);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 5, CPyStatic_globals);
        goto CPyL57;
    }
CPyL17: ;
    cpy_r_r48 = (CPyPtr)&((PyListObject *)cpy_r_r47)->ob_item;
    cpy_r_r49 = *(CPyPtr *)cpy_r_r48;
    CPy_INCREF(cpy_r_r46);
    *(PyObject * *)cpy_r_r49 = cpy_r_r46;
    cpy_r_r50 = CPyStatics[11]; /* 'numpy.linalg' */
    cpy_r_r51 = PyImport_ImportModuleLevelObject(cpy_r_r50, cpy_r_r45, 0, cpy_r_r47, 0);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 5, CPyStatic_globals);
        goto CPyL57;
    }
CPyL18: ;
    CPyModule_numpy___linalg = cpy_r_r51;
    CPy_INCREF(CPyModule_numpy___linalg);
    cpy_r_r52 = CPyStatics[11]; /* 'numpy.linalg' */
    cpy_r_r53 = CPyStatics[12]; /* 'solve' */
    cpy_r_r54 = CPyStatics[13]; /* 'solve_out_of_the_box' */
    cpy_r_r55 = CPyImport_ImportFrom(cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 5, CPyStatic_globals);
        goto CPyL57;
    }
CPyL19: ;
    cpy_r_r56 = CPyStatics[13]; /* 'solve_out_of_the_box' */
    cpy_r_r57 = CPyDict_SetItem(cpy_r_r45, cpy_r_r56, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("gaus.py", "<module>", 5, CPyStatic_globals);
        goto CPyL57;
    }
CPyL20: ;
    cpy_r_r59 = CPyStatics[23]; /* 1.5 */
    cpy_r_r60 = CPyStatics[24]; /* 2.0 */
    cpy_r_r61 = CPyStatics[23]; /* 1.5 */
    cpy_r_r62 = CPyStatics[25]; /* 6.0 */
    cpy_r_r63 = PyList_New(4);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 8, CPyStatic_globals);
        goto CPyL57;
    }
CPyL21: ;
    cpy_r_r64 = (CPyPtr)&((PyListObject *)cpy_r_r63)->ob_item;
    cpy_r_r65 = *(CPyPtr *)cpy_r_r64;
    CPy_INCREF(cpy_r_r59);
    *(PyObject * *)cpy_r_r65 = cpy_r_r59;
    cpy_r_r66 = cpy_r_r65 + 8;
    CPy_INCREF(cpy_r_r60);
    *(PyObject * *)cpy_r_r66 = cpy_r_r60;
    cpy_r_r67 = cpy_r_r65 + 16;
    CPy_INCREF(cpy_r_r61);
    *(PyObject * *)cpy_r_r67 = cpy_r_r61;
    cpy_r_r68 = cpy_r_r65 + 24;
    CPy_INCREF(cpy_r_r62);
    *(PyObject * *)cpy_r_r68 = cpy_r_r62;
    cpy_r_r69 = CPyStatics[26]; /* 3.0 */
    cpy_r_r70 = CPyStatics[24]; /* 2.0 */
    cpy_r_r71 = CPyStatics[27]; /* 4.8 */
    cpy_r_r72 = CPyStatics[28]; /* 1.0 */
    cpy_r_r73 = PyList_New(4);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 9, CPyStatic_globals);
        goto CPyL58;
    }
CPyL22: ;
    cpy_r_r74 = (CPyPtr)&((PyListObject *)cpy_r_r73)->ob_item;
    cpy_r_r75 = *(CPyPtr *)cpy_r_r74;
    CPy_INCREF(cpy_r_r69);
    *(PyObject * *)cpy_r_r75 = cpy_r_r69;
    cpy_r_r76 = cpy_r_r75 + 8;
    CPy_INCREF(cpy_r_r70);
    *(PyObject * *)cpy_r_r76 = cpy_r_r70;
    cpy_r_r77 = cpy_r_r75 + 16;
    CPy_INCREF(cpy_r_r71);
    *(PyObject * *)cpy_r_r77 = cpy_r_r71;
    cpy_r_r78 = cpy_r_r75 + 24;
    CPy_INCREF(cpy_r_r72);
    *(PyObject * *)cpy_r_r78 = cpy_r_r72;
    cpy_r_r79 = CPyStatics[28]; /* 1.0 */
    cpy_r_r80 = CPyStatics[25]; /* 6.0 */
    cpy_r_r81 = CPyStatics[29]; /* 5.8 */
    cpy_r_r82 = CPyStatics[30]; /* 4.0 */
    cpy_r_r83 = PyList_New(4);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 10, CPyStatic_globals);
        goto CPyL59;
    }
CPyL23: ;
    cpy_r_r84 = (CPyPtr)&((PyListObject *)cpy_r_r83)->ob_item;
    cpy_r_r85 = *(CPyPtr *)cpy_r_r84;
    CPy_INCREF(cpy_r_r79);
    *(PyObject * *)cpy_r_r85 = cpy_r_r79;
    cpy_r_r86 = cpy_r_r85 + 8;
    CPy_INCREF(cpy_r_r80);
    *(PyObject * *)cpy_r_r86 = cpy_r_r80;
    cpy_r_r87 = cpy_r_r85 + 16;
    CPy_INCREF(cpy_r_r81);
    *(PyObject * *)cpy_r_r87 = cpy_r_r81;
    cpy_r_r88 = cpy_r_r85 + 24;
    CPy_INCREF(cpy_r_r82);
    *(PyObject * *)cpy_r_r88 = cpy_r_r82;
    cpy_r_r89 = CPyStatics[24]; /* 2.0 */
    cpy_r_r90 = CPyStatics[28]; /* 1.0 */
    cpy_r_r91 = CPyStatics[30]; /* 4.0 */
    cpy_r_r92 = CPyStatics[26]; /* 3.0 */
    cpy_r_r93 = PyList_New(4);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 11, CPyStatic_globals);
        goto CPyL60;
    }
CPyL24: ;
    cpy_r_r94 = (CPyPtr)&((PyListObject *)cpy_r_r93)->ob_item;
    cpy_r_r95 = *(CPyPtr *)cpy_r_r94;
    CPy_INCREF(cpy_r_r89);
    *(PyObject * *)cpy_r_r95 = cpy_r_r89;
    cpy_r_r96 = cpy_r_r95 + 8;
    CPy_INCREF(cpy_r_r90);
    *(PyObject * *)cpy_r_r96 = cpy_r_r90;
    cpy_r_r97 = cpy_r_r95 + 16;
    CPy_INCREF(cpy_r_r91);
    *(PyObject * *)cpy_r_r97 = cpy_r_r91;
    cpy_r_r98 = cpy_r_r95 + 24;
    CPy_INCREF(cpy_r_r92);
    *(PyObject * *)cpy_r_r98 = cpy_r_r92;
    cpy_r_r99 = PyList_New(4);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 7, CPyStatic_globals);
        goto CPyL61;
    }
CPyL25: ;
    cpy_r_r100 = (CPyPtr)&((PyListObject *)cpy_r_r99)->ob_item;
    cpy_r_r101 = *(CPyPtr *)cpy_r_r100;
    *(PyObject * *)cpy_r_r101 = cpy_r_r63;
    cpy_r_r102 = cpy_r_r101 + 8;
    *(PyObject * *)cpy_r_r102 = cpy_r_r73;
    cpy_r_r103 = cpy_r_r101 + 16;
    *(PyObject * *)cpy_r_r103 = cpy_r_r83;
    cpy_r_r104 = cpy_r_r101 + 24;
    *(PyObject * *)cpy_r_r104 = cpy_r_r93;
    cpy_r_r105 = CPyModule_builtins;
    cpy_r_r106 = CPyStatics[14]; /* 'float' */
    cpy_r_r107 = CPyObject_GetAttr(cpy_r_r105, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 12, CPyStatic_globals);
        goto CPyL62;
    }
CPyL26: ;
    cpy_r_r108 = CPyStatic_globals;
    cpy_r_r109 = CPyStatics[9]; /* 'array' */
    cpy_r_r110 = CPyDict_GetItem(cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 7, CPyStatic_globals);
        goto CPyL63;
    }
CPyL27: ;
    PyObject *cpy_r_r111[2] = {cpy_r_r99, cpy_r_r107};
    cpy_r_r112 = (PyObject **)&cpy_r_r111;
    cpy_r_r113 = CPyStatics[34]; /* ('dtype',) */
    cpy_r_r114 = _PyObject_Vectorcall(cpy_r_r110, cpy_r_r112, 1, cpy_r_r113);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 7, CPyStatic_globals);
        goto CPyL63;
    }
CPyL28: ;
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r115 = CPyStatic_globals;
    cpy_r_r116 = CPyStatics[16]; /* 'a' */
    cpy_r_r117 = CPyDict_SetItem(cpy_r_r115, cpy_r_r116, cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("gaus.py", "<module>", 7, CPyStatic_globals);
        goto CPyL57;
    }
CPyL29: ;
    cpy_r_r119 = CPyStatics[31]; /* 5.0 */
    cpy_r_r120 = CPyStatics[25]; /* 6.0 */
    cpy_r_r121 = CPyStatics[32]; /* 7.0 */
    cpy_r_r122 = CPyStatics[33]; /* 8.0 */
    cpy_r_r123 = PyList_New(4);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 14, CPyStatic_globals);
        goto CPyL57;
    }
CPyL30: ;
    cpy_r_r124 = (CPyPtr)&((PyListObject *)cpy_r_r123)->ob_item;
    cpy_r_r125 = *(CPyPtr *)cpy_r_r124;
    CPy_INCREF(cpy_r_r119);
    *(PyObject * *)cpy_r_r125 = cpy_r_r119;
    cpy_r_r126 = cpy_r_r125 + 8;
    CPy_INCREF(cpy_r_r120);
    *(PyObject * *)cpy_r_r126 = cpy_r_r120;
    cpy_r_r127 = cpy_r_r125 + 16;
    CPy_INCREF(cpy_r_r121);
    *(PyObject * *)cpy_r_r127 = cpy_r_r121;
    cpy_r_r128 = cpy_r_r125 + 24;
    CPy_INCREF(cpy_r_r122);
    *(PyObject * *)cpy_r_r128 = cpy_r_r122;
    cpy_r_r129 = CPyModule_builtins;
    cpy_r_r130 = CPyStatics[14]; /* 'float' */
    cpy_r_r131 = CPyObject_GetAttr(cpy_r_r129, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 14, CPyStatic_globals);
        goto CPyL64;
    }
CPyL31: ;
    cpy_r_r132 = CPyStatic_globals;
    cpy_r_r133 = CPyStatics[9]; /* 'array' */
    cpy_r_r134 = CPyDict_GetItem(cpy_r_r132, cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 14, CPyStatic_globals);
        goto CPyL65;
    }
CPyL32: ;
    PyObject *cpy_r_r135[2] = {cpy_r_r123, cpy_r_r131};
    cpy_r_r136 = (PyObject **)&cpy_r_r135;
    cpy_r_r137 = CPyStatics[34]; /* ('dtype',) */
    cpy_r_r138 = _PyObject_Vectorcall(cpy_r_r134, cpy_r_r136, 1, cpy_r_r137);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 14, CPyStatic_globals);
        goto CPyL65;
    }
CPyL33: ;
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r131);
    cpy_r_r139 = CPyStatic_globals;
    cpy_r_r140 = CPyStatics[17]; /* 'b' */
    cpy_r_r141 = CPyDict_SetItem(cpy_r_r139, cpy_r_r140, cpy_r_r138);
    CPy_DECREF(cpy_r_r138);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("gaus.py", "<module>", 14, CPyStatic_globals);
        goto CPyL57;
    }
CPyL34: ;
    cpy_r_r143 = CPyStatic_globals;
    cpy_r_r144 = CPyStatics[16]; /* 'a' */
    cpy_r_r145 = CPyDict_GetItem(cpy_r_r143, cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 16, CPyStatic_globals);
        goto CPyL57;
    }
CPyL35: ;
    cpy_r_r146 = CPyObject_Size(cpy_r_r145);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r146 == CPY_INT_TAG)) {
        CPy_AddTraceback("gaus.py", "<module>", 16, CPyStatic_globals);
        goto CPyL57;
    }
CPyL36: ;
    cpy_r_r147 = CPyStatic_globals;
    cpy_r_r148 = CPyStatics[4]; /* 'n' */
    cpy_r_r149 = CPyTagged_StealAsObject(cpy_r_r146);
    cpy_r_r150 = CPyDict_SetItem(cpy_r_r147, cpy_r_r148, cpy_r_r149);
    CPy_DECREF(cpy_r_r149);
    cpy_r_r151 = cpy_r_r150 >= 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("gaus.py", "<module>", 16, CPyStatic_globals);
        goto CPyL57;
    }
CPyL37: ;
    cpy_r_r152 = CPyStatic_globals;
    cpy_r_r153 = CPyStatics[16]; /* 'a' */
    cpy_r_r154 = CPyDict_GetItem(cpy_r_r152, cpy_r_r153);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 31, CPyStatic_globals);
        goto CPyL57;
    }
CPyL38: ;
    cpy_r_r155 = CPyStatic_globals;
    cpy_r_r156 = CPyStatics[17]; /* 'b' */
    cpy_r_r157 = CPyDict_GetItem(cpy_r_r155, cpy_r_r156);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 31, CPyStatic_globals);
        goto CPyL66;
    }
CPyL39: ;
    cpy_r_r158 = CPyDef_vector_gauss(cpy_r_r154, cpy_r_r157);
    CPy_DECREF(cpy_r_r154);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 31, CPyStatic_globals);
        goto CPyL57;
    }
CPyL40: ;
    cpy_r_r159 = CPyStatic_globals;
    cpy_r_r160 = CPyStatics[18]; /* 'solution' */
    cpy_r_r161 = CPyDict_SetItem(cpy_r_r159, cpy_r_r160, cpy_r_r158);
    CPy_DECREF(cpy_r_r158);
    cpy_r_r162 = cpy_r_r161 >= 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("gaus.py", "<module>", 31, CPyStatic_globals);
        goto CPyL57;
    }
CPyL41: ;
    cpy_r_r163 = CPyStatic_globals;
    cpy_r_r164 = CPyStatics[16]; /* 'a' */
    cpy_r_r165 = CPyDict_GetItem(cpy_r_r163, cpy_r_r164);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 32, CPyStatic_globals);
        goto CPyL57;
    }
CPyL42: ;
    cpy_r_r166 = CPyStatic_globals;
    cpy_r_r167 = CPyStatics[17]; /* 'b' */
    cpy_r_r168 = CPyDict_GetItem(cpy_r_r166, cpy_r_r167);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 32, CPyStatic_globals);
        goto CPyL67;
    }
CPyL43: ;
    cpy_r_r169 = CPyStatic_globals;
    cpy_r_r170 = CPyStatics[13]; /* 'solve_out_of_the_box' */
    cpy_r_r171 = CPyDict_GetItem(cpy_r_r169, cpy_r_r170);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 32, CPyStatic_globals);
        goto CPyL68;
    }
CPyL44: ;
    PyObject *cpy_r_r172[2] = {cpy_r_r165, cpy_r_r168};
    cpy_r_r173 = (PyObject **)&cpy_r_r172;
    cpy_r_r174 = _PyObject_Vectorcall(cpy_r_r171, cpy_r_r173, 2, 0);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 32, CPyStatic_globals);
        goto CPyL68;
    }
CPyL45: ;
    CPy_DECREF(cpy_r_r165);
    CPy_DECREF(cpy_r_r168);
    cpy_r_r175 = CPyStatic_globals;
    cpy_r_r176 = CPyStatics[19]; /* 'oob_solution' */
    cpy_r_r177 = CPyDict_SetItem(cpy_r_r175, cpy_r_r176, cpy_r_r174);
    CPy_DECREF(cpy_r_r174);
    cpy_r_r178 = cpy_r_r177 >= 0;
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("gaus.py", "<module>", 32, CPyStatic_globals);
        goto CPyL57;
    }
CPyL46: ;
    cpy_r_r179 = CPyStatic_globals;
    cpy_r_r180 = CPyStatics[18]; /* 'solution' */
    cpy_r_r181 = CPyDict_GetItem(cpy_r_r179, cpy_r_r180);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 34, CPyStatic_globals);
        goto CPyL57;
    }
CPyL47: ;
    cpy_r_r182 = CPyModule_builtins;
    cpy_r_r183 = CPyStatics[20]; /* 'print' */
    cpy_r_r184 = CPyObject_GetAttr(cpy_r_r182, cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 34, CPyStatic_globals);
        goto CPyL69;
    }
CPyL48: ;
    PyObject *cpy_r_r185[1] = {cpy_r_r181};
    cpy_r_r186 = (PyObject **)&cpy_r_r185;
    cpy_r_r187 = _PyObject_Vectorcall(cpy_r_r184, cpy_r_r186, 1, 0);
    CPy_DECREF(cpy_r_r184);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 34, CPyStatic_globals);
        goto CPyL69;
    } else
        goto CPyL70;
CPyL49: ;
    CPy_DECREF(cpy_r_r181);
    cpy_r_r188 = CPyStatics[21]; /* 'Максимальное отклонение компоненты решения:' */
    cpy_r_r189 = CPyStatic_globals;
    cpy_r_r190 = CPyStatics[18]; /* 'solution' */
    cpy_r_r191 = CPyDict_GetItem(cpy_r_r189, cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 35, CPyStatic_globals);
        goto CPyL57;
    }
CPyL50: ;
    cpy_r_r192 = CPyStatic_globals;
    cpy_r_r193 = CPyStatics[19]; /* 'oob_solution' */
    cpy_r_r194 = CPyDict_GetItem(cpy_r_r192, cpy_r_r193);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 35, CPyStatic_globals);
        goto CPyL71;
    }
CPyL51: ;
    cpy_r_r195 = PyNumber_Subtract(cpy_r_r191, cpy_r_r194);
    CPy_DECREF(cpy_r_r191);
    CPy_DECREF(cpy_r_r194);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 35, CPyStatic_globals);
        goto CPyL57;
    }
CPyL52: ;
    cpy_r_r196 = CPyStatic_globals;
    cpy_r_r197 = CPyStatics[10]; /* 'norm' */
    cpy_r_r198 = CPyDict_GetItem(cpy_r_r196, cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 35, CPyStatic_globals);
        goto CPyL72;
    }
CPyL53: ;
    cpy_r_r199 = CPyTagged_StealAsObject(2);
    PyObject *cpy_r_r200[2] = {cpy_r_r195, cpy_r_r199};
    cpy_r_r201 = (PyObject **)&cpy_r_r200;
    cpy_r_r202 = CPyStatics[35]; /* ('ord',) */
    cpy_r_r203 = _PyObject_Vectorcall(cpy_r_r198, cpy_r_r201, 1, cpy_r_r202);
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 35, CPyStatic_globals);
        goto CPyL73;
    }
CPyL54: ;
    CPy_DECREF(cpy_r_r195);
    CPy_DECREF(cpy_r_r199);
    cpy_r_r204 = CPyModule_builtins;
    cpy_r_r205 = CPyStatics[20]; /* 'print' */
    cpy_r_r206 = CPyObject_GetAttr(cpy_r_r204, cpy_r_r205);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 35, CPyStatic_globals);
        goto CPyL74;
    }
CPyL55: ;
    PyObject *cpy_r_r207[2] = {cpy_r_r188, cpy_r_r203};
    cpy_r_r208 = (PyObject **)&cpy_r_r207;
    cpy_r_r209 = _PyObject_Vectorcall(cpy_r_r206, cpy_r_r208, 2, 0);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("gaus.py", "<module>", 35, CPyStatic_globals);
        goto CPyL74;
    } else
        goto CPyL75;
CPyL56: ;
    CPy_DECREF(cpy_r_r203);
    return 1;
CPyL57: ;
    cpy_r_r210 = 2;
    return cpy_r_r210;
CPyL58: ;
    CPy_DecRef(cpy_r_r63);
    goto CPyL57;
CPyL59: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r73);
    goto CPyL57;
CPyL60: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r83);
    goto CPyL57;
CPyL61: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r93);
    goto CPyL57;
CPyL62: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL57;
CPyL63: ;
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r107);
    goto CPyL57;
CPyL64: ;
    CPy_DecRef(cpy_r_r123);
    goto CPyL57;
CPyL65: ;
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r131);
    goto CPyL57;
CPyL66: ;
    CPy_DecRef(cpy_r_r154);
    goto CPyL57;
CPyL67: ;
    CPy_DecRef(cpy_r_r165);
    goto CPyL57;
CPyL68: ;
    CPy_DecRef(cpy_r_r165);
    CPy_DecRef(cpy_r_r168);
    goto CPyL57;
CPyL69: ;
    CPy_DecRef(cpy_r_r181);
    goto CPyL57;
CPyL70: ;
    CPy_DECREF(cpy_r_r187);
    goto CPyL49;
CPyL71: ;
    CPy_DecRef(cpy_r_r191);
    goto CPyL57;
CPyL72: ;
    CPy_DecRef(cpy_r_r195);
    goto CPyL57;
CPyL73: ;
    CPy_DecRef(cpy_r_r195);
    CPy_DecRef(cpy_r_r199);
    goto CPyL57;
CPyL74: ;
    CPy_DecRef(cpy_r_r203);
    goto CPyL57;
CPyL75: ;
    CPy_DECREF(cpy_r_r209);
    goto CPyL56;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_gaus = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_numpy = Py_None;
    CPyModule_numpy___linalg = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[36];
const char * const CPyLit_Str[] = {
    "\n\004copy\001n\003dot\bbuiltins\005numpy\002np\005array\004norm\fnumpy.linalg\005solve",
    "\b\024solve_out_of_the_box\005float\005dtype\001a\001b\bsolution\foob_solution\005print",
    "\001R\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\276\321\202\320\272\320\273\320\276\320\275\320\265\320\275\320\270\320\265 \320\272\320\276\320\274\320\277\320\276\320\275\320\265\320\275\321\202\321\213 \321\200\320\265\321\210\320\265\320\275\320\270\321\217:",
    "\001\003ord",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "",
};
const double CPyLit_Float[] = {11, 1.5, 2.0, 6.0, 3.0, 4.8, 1.0, 5.8, 4.0, 5.0, 7.0, 8.0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {2, 1, 15, 1, 22};
CPyModule *CPyModule_gaus_internal = NULL;
CPyModule *CPyModule_gaus;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins_internal = NULL;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_numpy_internal = NULL;
CPyModule *CPyModule_numpy;
CPyModule *CPyModule_numpy___linalg_internal = NULL;
CPyModule *CPyModule_numpy___linalg;
PyObject *CPyDef_vector_gauss(PyObject *cpy_r_a, PyObject *cpy_r_b);
PyObject *CPyPy_vector_gauss(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);
