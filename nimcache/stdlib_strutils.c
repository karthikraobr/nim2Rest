/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\MinGW\bin\gcc.exe -c  -w  -IC:\nim-0.16.0\lib -o c:\Projects\nim\HelloWorld\nimcache\stdlib_strutils.o c:\Projects\nim\HelloWorld\nimcache\stdlib_strutils.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Slice_WC2BEYwxNBO9aTbMc8sJqPg Slice_WC2BEYwxNBO9aTbMc8sJqPg;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Slice_WC2BEYwxNBO9aTbMc8sJqPg  {
NI a;
NI b;
};
N_NIMCALL(void, reverse_LoixoqZetR6FfezoPedx8w)(NimStringDesc** a0, NI a0Len0);
N_NIMCALL(void, reverse_XQiN4wExsmIg8NFBmG3ObA)(NimStringDesc** a0, NI a0Len0, NI first0, NI last0);
static N_INLINE(NIM_BOOL, contains_I9cy9aN2znlBRynMcXN4pBGgstrutils)(NIM_CHAR* a0, NI a0Len0, NIM_CHAR item0);
static N_INLINE(NI, find_b3HPX1XboPhUmnxkTjazFQstrutils)(NIM_CHAR* a0, NI a0Len0, NIM_CHAR item0);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a0, NI b0);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, contains_tKnjuJQDI4zGjoGUKWyD2wstrutils)(Slice_WC2BEYwxNBO9aTbMc8sJqPg s0, NI value0);
N_NIMCALL(NF, round_FL9bhksfuQsfLDCxRHuknsg)(NF x0, NI places0);
static N_INLINE(void, HEX2AHEX3D_7kHiltrvRlcg6wSYR3CxAwstrutils)(NF* x0, NF y0);
static N_INLINE(void, HEX2BHEX3D_7kHiltrvRlcg6wSYR3CxAw_2strutils)(NF* x0, NF y0);
extern TFrame* frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;

static N_INLINE(NI, addInt)(NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	result0 = (NI)((NU64)(a0) + (NU64)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ b0));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
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

static N_INLINE(NI, find_b3HPX1XboPhUmnxkTjazFQstrutils)(NIM_CHAR* a0, NI a0Len0, NIM_CHAR item0) {
	NI result0;
	nimfr("find", "system.nim")
{	result0 = (NI)0;
	{
		NIM_CHAR i_PK51OczLhe60IMTnpDtj2Q;
		NI i_PK51OczLhe60IMTnpDtj2Q_2;
		i_PK51OczLhe60IMTnpDtj2Q = (NIM_CHAR)0;
		nimln(1999, "system.nim");
		i_PK51OczLhe60IMTnpDtj2Q_2 = ((NI) 0);
		{
			nimln(2000, "system.nim");
			while (1) {
				NI T_JGc9b9bh2D3nTdUR7TGyq8aA_2;
				NI T_JGc9b9bh2D3nTdUR7TGyq8aA_3;
				nimln(1999, "system.nim");
				nimln(2232, "system.nim");
				if (!(i_PK51OczLhe60IMTnpDtj2Q_2 < a0Len0)) goto LA3;
				nimln(2001, "system.nim");
				if ((NU)(i_PK51OczLhe60IMTnpDtj2Q_2) >= (NU)(a0Len0)) raiseIndexError();
				i_PK51OczLhe60IMTnpDtj2Q = a0[i_PK51OczLhe60IMTnpDtj2Q_2];
				nimln(2233, "system.nim");
				{
					if (!((NU8)(i_PK51OczLhe60IMTnpDtj2Q) == (NU8)(item0))) goto LA6;
					goto BeforeRet;
				}
				LA6: ;
				nimln(2234, "system.nim");
				T_JGc9b9bh2D3nTdUR7TGyq8aA_2 = addInt(result0, ((NI) 1));
				result0 = (NI)(T_JGc9b9bh2D3nTdUR7TGyq8aA_2);
				nimln(1999, "system.nim");
				T_JGc9b9bh2D3nTdUR7TGyq8aA_3 = addInt(i_PK51OczLhe60IMTnpDtj2Q_2, ((NI) 1));
				i_PK51OczLhe60IMTnpDtj2Q_2 = (NI)(T_JGc9b9bh2D3nTdUR7TGyq8aA_3);
			} LA3: ;
		}
	}
	nimln(2235, "system.nim");
	result0 = ((NI) -1);
	}BeforeRet: ;
	popFrame();
	return result0;
}

static N_INLINE(NIM_BOOL, contains_I9cy9aN2znlBRynMcXN4pBGgstrutils)(NIM_CHAR* a0, NI a0Len0, NIM_CHAR item0) {
	NIM_BOOL result0;
	NI LOC1;
	nimfr("contains", "system.nim")
{	result0 = (NIM_BOOL)0;
	nimln(2240, "system.nim");
	LOC1 = (NI)0;
	LOC1 = find_b3HPX1XboPhUmnxkTjazFQstrutils(a0, a0Len0, item0);
	result0 = (((NI) 0) <= LOC1);
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result0;
}

static N_INLINE(NIM_BOOL, contains_tKnjuJQDI4zGjoGUKWyD2wstrutils)(Slice_WC2BEYwxNBO9aTbMc8sJqPg s0, NI value0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	nimfr("contains", "system.nim")
	result0 = (NIM_BOOL)0;
	nimln(1122, "system.nim");
	LOC1 = (NIM_BOOL)0;
	LOC1 = (((NI) (s0.a)) <= ((NI) (value0)));
	if (!(LOC1)) goto LA2;
	LOC1 = (((NI) (value0)) <= ((NI) (s0.b)));
	LA2: ;
	result0 = LOC1;
	popFrame();
	return result0;
}

static N_INLINE(void, HEX2AHEX3D_7kHiltrvRlcg6wSYR3CxAwstrutils)(NF* x0, NF y0) {
	nimfr("*=", "system.nim")
	nimln(3402, "system.nim");
	(*x0) = ((NF)((*x0)) * (NF)(y0));
	popFrame();
}

static N_INLINE(void, HEX2BHEX3D_7kHiltrvRlcg6wSYR3CxAw_2strutils)(NF* x0, NF y0) {
	nimfr("+=", "system.nim")
	nimln(3392, "system.nim");
	(*x0) = ((NF)((*x0)) + (NF)(y0));
	popFrame();
}

N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s0, NIM_CHAR sub0, NI start0) {
	NI result0;
	nimfr("find", "strutils.nim")
{	result0 = (NI)0;
	{
		NI i_S4Ts5NaQRo1vHKx5LGYx5w;
		NI HEX3Atmp_Ms17sAa0cfUTjtJ6sQnN2Q;
		NI res_dBqJ9biAHlqcB0S3Zb0ahAw;
		i_S4Ts5NaQRo1vHKx5LGYx5w = (NI)0;
		HEX3Atmp_Ms17sAa0cfUTjtJ6sQnN2Q = (NI)0;
		HEX3Atmp_Ms17sAa0cfUTjtJ6sQnN2Q = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 1));
		res_dBqJ9biAHlqcB0S3Zb0ahAw = ((NI) (start0));
		{
			while (1) {
				if (!(res_dBqJ9biAHlqcB0S3Zb0ahAw <= HEX3Atmp_Ms17sAa0cfUTjtJ6sQnN2Q)) goto LA3;
				i_S4Ts5NaQRo1vHKx5LGYx5w = res_dBqJ9biAHlqcB0S3Zb0ahAw;
				{
					if (!((NU8)(sub0) == (NU8)(s0->data[i_S4Ts5NaQRo1vHKx5LGYx5w]))) goto LA6;
					result0 = i_S4Ts5NaQRo1vHKx5LGYx5w;
					goto BeforeRet;
				}
				LA6: ;
				res_dBqJ9biAHlqcB0S3Zb0ahAw += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = ((NI) -1);
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void) {
	nimfr("strutils", "strutils.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void) {
}

