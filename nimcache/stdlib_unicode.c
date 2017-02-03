/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\MinGW\bin\gcc.exe -c  -w  -IC:\nim-0.16.0\lib -o c:\Projects\nim\HelloWorld\nimcache\stdlib_unicode.o c:\Projects\nim\HelloWorld\nimcache\stdlib_unicode.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
typedef struct TY_48JTohSgTy339bRxHzUD8KA TY_48JTohSgTy339bRxHzUD8KA;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY_48JTohSgTy339bRxHzUD8KA {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY_48JTohSgTy339bRxHzUD8KA*, newseq_eYYHkXwVzOzgg15yEr5XtA)(NI len0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s0, NI newlen0);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, chckRange)(NI i0, NI a0, NI b0);
N_NOINLINE(void, raiseRangeError)(NI64 val0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
extern TFrame* frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(T_e1RUVS0Bw7xmj9cnDPXLJMQ_2, "", 0);

static N_INLINE(NI, chckRange)(NI i0, NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (a0 <= i0);
		if (!(LOC3)) goto LA4;
		LOC3 = (i0 <= b0);
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = i0;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i0)));
	}
	LA1: ;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, nimFrame)(TFrame* s0) {
	NI LOC1;
	LOC1 = (NI)0;
	{
		if (!(frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s0).calldepth = ((NI16) (LOC1));
	(*s0).prev = frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw = s0;
	{
		if (!((*s0).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_NIMCALL(NimStringDesc*, nuctoUTF8)(NI32 c0) {
	NimStringDesc* result0;
	NI32 i_thWKp7ISAt9bqitwYuDc9cPA;
	nimfr("toUTF8", "unicode.nim")
	result0 = (NimStringDesc*)0;
	nimln(191, "unicode.nim");
	result0 = copyString(((NimStringDesc*) &T_e1RUVS0Bw7xmj9cnDPXLJMQ_2));
	nimln(146, "unicode.nim");
	i_thWKp7ISAt9bqitwYuDc9cPA = c0;
	nimln(192, "unicode.nim");
	{
		nimln(147, "unicode.nim");
		if (!((NU32)(i_thWKp7ISAt9bqitwYuDc9cPA) <= (NU32)(((NI32) 127)))) goto LA3;
		nimln(192, "unicode.nim");
		result0 = setLengthStr(result0, ((NI) 1));
		nimln(149, "unicode.nim");
		if ((NU)(((NI) 0)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 0)] = ((NIM_CHAR) (((NI)chckRange(i_thWKp7ISAt9bqitwYuDc9cPA, ((NI) 0), ((NI) 255)))));
	}
	goto LA1;
	LA3: ;
	{
		nimln(151, "unicode.nim");
		if (!((NU32)(i_thWKp7ISAt9bqitwYuDc9cPA) <= (NU32)(((NI32) 2047)))) goto LA6;
		nimln(192, "unicode.nim");
		result0 = setLengthStr(result0, ((NI) 2));
		nimln(153, "unicode.nim");
		if ((NU)(((NI) 0)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 0)] = ((NIM_CHAR) (((NI)chckRange((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 6))) | ((NI32) 192)), ((NI) 0), ((NI) 255)))));
		nimln(154, "unicode.nim");
		if ((NU)(((NI) 1)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 1)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)(i_thWKp7ISAt9bqitwYuDc9cPA & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
	}
	goto LA1;
	LA6: ;
	{
		nimln(156, "unicode.nim");
		if (!((NU32)(i_thWKp7ISAt9bqitwYuDc9cPA) <= (NU32)(((NI32) 65535)))) goto LA9;
		nimln(192, "unicode.nim");
		result0 = setLengthStr(result0, ((NI) 3));
		nimln(158, "unicode.nim");
		if ((NU)(((NI) 0)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 0)] = ((NIM_CHAR) (((NI)chckRange((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 12))) | ((NI32) 224)), ((NI) 0), ((NI) 255)))));
		nimln(159, "unicode.nim");
		if ((NU)(((NI) 1)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 1)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 6))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		nimln(160, "unicode.nim");
		if ((NU)(((NI) 2)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 2)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)(i_thWKp7ISAt9bqitwYuDc9cPA & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
	}
	goto LA1;
	LA9: ;
	{
		nimln(162, "unicode.nim");
		if (!((NU32)(i_thWKp7ISAt9bqitwYuDc9cPA) <= (NU32)(((NI32) 2097151)))) goto LA12;
		nimln(192, "unicode.nim");
		result0 = setLengthStr(result0, ((NI) 4));
		nimln(164, "unicode.nim");
		if ((NU)(((NI) 0)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 0)] = ((NIM_CHAR) (((NI)chckRange((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 18))) | ((NI32) 240)), ((NI) 0), ((NI) 255)))));
		nimln(165, "unicode.nim");
		if ((NU)(((NI) 1)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 1)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 12))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		nimln(166, "unicode.nim");
		if ((NU)(((NI) 2)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 2)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 6))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		nimln(167, "unicode.nim");
		if ((NU)(((NI) 3)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 3)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)(i_thWKp7ISAt9bqitwYuDc9cPA & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
	}
	goto LA1;
	LA12: ;
	{
		nimln(169, "unicode.nim");
		if (!((NU32)(i_thWKp7ISAt9bqitwYuDc9cPA) <= (NU32)(((NI32) 67108863)))) goto LA15;
		nimln(192, "unicode.nim");
		result0 = setLengthStr(result0, ((NI) 5));
		nimln(171, "unicode.nim");
		if ((NU)(((NI) 0)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 0)] = ((NIM_CHAR) (((NI)chckRange((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 24))) | ((NI32) 248)), ((NI) 0), ((NI) 255)))));
		nimln(172, "unicode.nim");
		if ((NU)(((NI) 1)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 1)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 18))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		nimln(173, "unicode.nim");
		if ((NU)(((NI) 2)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 2)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 12))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		nimln(174, "unicode.nim");
		if ((NU)(((NI) 3)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 3)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 6))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		nimln(175, "unicode.nim");
		if ((NU)(((NI) 4)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 4)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)(i_thWKp7ISAt9bqitwYuDc9cPA & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
	}
	goto LA1;
	LA15: ;
	{
		nimln(177, "unicode.nim");
		if (!((NU32)(i_thWKp7ISAt9bqitwYuDc9cPA) <= (NU32)(((NI32) 2147483647)))) goto LA18;
		nimln(192, "unicode.nim");
		result0 = setLengthStr(result0, ((NI) 6));
		nimln(179, "unicode.nim");
		if ((NU)(((NI) 0)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 0)] = ((NIM_CHAR) (((NI)chckRange((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 30))) | ((NI32) 252)), ((NI) 0), ((NI) 255)))));
		nimln(180, "unicode.nim");
		if ((NU)(((NI) 1)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 1)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 24))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		nimln(181, "unicode.nim");
		if ((NU)(((NI) 2)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 2)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 18))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		nimln(182, "unicode.nim");
		if ((NU)(((NI) 3)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 3)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 12))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		nimln(183, "unicode.nim");
		if ((NU)(((NI) 4)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 4)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i_thWKp7ISAt9bqitwYuDc9cPA) >> (NU64)(((NI) 6))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		nimln(184, "unicode.nim");
		if ((NU)(((NI) 5)) > (NU)(result0->Sup.len)) raiseIndexError();
		result0->data[((NI) 5)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)(i_thWKp7ISAt9bqitwYuDc9cPA & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
	}
	goto LA1;
	LA18: ;
	{
	}
	LA1: ;
	popFrame();
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit000)(void) {
	nimfr("unicode", "unicode.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit000)(void) {
}

