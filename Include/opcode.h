/* Auto-generated by Tools/scripts/generate_opcode_h.py from Lib/opcode.py */
#ifndef Py_OPCODE_H
#define Py_OPCODE_H
#ifdef __cplusplus
extern "C" {
#endif


    /* Instruction opcodes for compiled code */
#define POP_TOP                   1
#define ROT_TWO                   2
#define ROT_THREE                 3
#define DUP_TOP                   4
#define DUP_TOP_TWO               5
#define ROT_FOUR                  6
#define NOP                       9
#define UNARY_POSITIVE           10
#define UNARY_NEGATIVE           11
#define UNARY_NOT                12
#define UNARY_INVERT             15
#define BINARY_MATRIX_MULTIPLY   16
#define INPLACE_MATRIX_MULTIPLY  17
#define BINARY_POWER             19
#define BINARY_MULTIPLY          20
#define BINARY_MODULO            22
#define BINARY_ADD               23
#define BINARY_SUBTRACT          24
#define BINARY_SUBSCR            25
#define BINARY_FLOOR_DIVIDE      26
#define BINARY_TRUE_DIVIDE       27
#define INPLACE_FLOOR_DIVIDE     28
#define INPLACE_TRUE_DIVIDE      29
#define GET_AITER                50
#define GET_ANEXT                51
#define BEFORE_ASYNC_WITH        52
#define BEGIN_FINALLY            53
#define END_ASYNC_FOR            54
#define INPLACE_ADD              55
#define INPLACE_SUBTRACT         56
#define INPLACE_MULTIPLY         57
#define INPLACE_MODULO           59
#define STORE_SUBSCR             60
#define DELETE_SUBSCR            61
#define BINARY_LSHIFT            62
#define BINARY_RSHIFT            63
#define BINARY_AND               64
#define BINARY_XOR               65
#define BINARY_OR                66
#define INPLACE_POWER            67
#define GET_ITER                 68
#define GET_YIELD_FROM_ITER      69
#define PRINT_EXPR               70
#define LOAD_BUILD_CLASS         71
#define YIELD_FROM               72
#define GET_AWAITABLE            73
#define INPLACE_LSHIFT           75
#define INPLACE_RSHIFT           76
#define INPLACE_AND              77
#define INPLACE_XOR              78
#define INPLACE_OR               79
#define NOTJS                    80
#define WITH_CLEANUP_START       81
#define WITH_CLEANUP_FINISH      82
#define RETURN_VALUE             83
#define IMPORT_STAR              84
#define SETUP_ANNOTATIONS        85
#define YIELD_VALUE              86
#define POP_BLOCK                87
#define END_FINALLY              88
#define POP_EXCEPT               89
#define HAVE_ARGUMENT            90
#define STORE_NAME               90
#define DELETE_NAME              91
#define UNPACK_SEQUENCE          92
#define FOR_ITER                 93
#define UNPACK_EX                94
#define STORE_ATTR               95
#define DELETE_ATTR              96
#define STORE_GLOBAL             97
#define DELETE_GLOBAL            98
#define LOAD_CONST              100
#define LOAD_NAME               101
#define BUILD_TUPLE             102
#define BUILD_LIST              103
#define BUILD_SET               104
#define BUILD_MAP               105
#define LOAD_ATTR               106
#define COMPARE_OP              107
#define IMPORT_NAME             108
#define IMPORT_FROM             109
#define JUMP_FORWARD            110
#define JUMP_IF_FALSE_OR_POP    111
#define JUMP_IF_TRUE_OR_POP     112
#define JUMP_ABSOLUTE           113
#define POP_JUMP_IF_FALSE       114
#define POP_JUMP_IF_TRUE        115
#define LOAD_GLOBAL             116
#define SETUP_FINALLY           122
#define LOAD_FAST               124
#define STORE_FAST              125
#define DELETE_FAST             126
#define RAISE_VARARGS           130
#define CALL_FUNCTION           131
#define MAKE_FUNCTION           132
#define BUILD_SLICE             133
#define LOAD_CLOSURE            135
#define LOAD_DEREF              136
#define STORE_DEREF             137
#define DELETE_DEREF            138
#define CALL_FUNCTION_KW        141
#define CALL_FUNCTION_EX        142
#define SETUP_WITH              143
#define EXTENDED_ARG            144
#define LIST_APPEND             145
#define SET_ADD                 146
#define MAP_ADD                 147
#define LOAD_CLASSDEREF         148
#define BUILD_LIST_UNPACK       149
#define BUILD_MAP_UNPACK        150
#define BUILD_MAP_UNPACK_WITH_CALL 151
#define BUILD_TUPLE_UNPACK      152
#define BUILD_SET_UNPACK        153
#define SETUP_ASYNC_WITH        154
#define FORMAT_VALUE            155
#define BUILD_CONST_KEY_MAP     156
#define BUILD_STRING            157
#define BUILD_TUPLE_UNPACK_WITH_CALL 158
#define LOAD_METHOD             160
#define CALL_METHOD             161
#define CALL_FINALLY            162
#define POP_FINALLY             163

/* EXCEPT_HANDLER is a special, implicit block type which is created when
   entering an except handler. It is not an opcode but we define it here
   as we want it to be available to both frameobject.c and ceval.c, while
   remaining private.*/
#define EXCEPT_HANDLER 257


enum cmp_op {PyCmp_LT=Py_LT, PyCmp_LE=Py_LE, PyCmp_EQ=Py_EQ, PyCmp_NE=Py_NE,
                PyCmp_GT=Py_GT, PyCmp_GE=Py_GE, PyCmp_IN, PyCmp_NOT_IN,
                PyCmp_IS, PyCmp_IS_NOT, PyCmp_EXC_MATCH, PyCmp_BAD};

#define HAS_ARG(op) ((op) >= HAVE_ARGUMENT)

#ifdef __cplusplus
}
#endif
#endif /* !Py_OPCODE_H */
