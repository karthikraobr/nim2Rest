/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\MinGW\bin\gcc.exe -c  -w  -IC:\nim-0.16.0\lib -o c:\Projects\nim\HelloWorld\nimcache\stdlib_etcpriv.o c:\Projects\nim\HelloWorld\nimcache\stdlib_etcpriv.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_jEsY0iAEfTnaxdnZAwGvIwetcpriv)(NCSTRING cs0, NI i0);
static N_INLINE(NI, addInt)(NI a0, NI b0);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
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

static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_jEsY0iAEfTnaxdnZAwGvIwetcpriv)(NCSTRING cs0, NI i0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	NI T_hIKMUP2P7dAS2xEyobDZTA_2;
	NI T_hIKMUP2P7dAS2xEyobDZTA_3;
	nimfr("isMagicIdentSeparatorRune", "etcpriv.nim")
	result0 = (NIM_BOOL)0;
	nimln(21, "etcpriv.nim");
	LOC1 = (NIM_BOOL)0;
	LOC2 = (NIM_BOOL)0;
	LOC2 = ((NU8)(cs0[i0]) == (NU8)(226));
	if (!(LOC2)) goto LA3;
	nimln(22, "etcpriv.nim");
	T_hIKMUP2P7dAS2xEyobDZTA_2 = addInt(i0, ((NI) 1));
	LOC2 = ((NU8)(cs0[(NI)(T_hIKMUP2P7dAS2xEyobDZTA_2)]) == (NU8)(128));
	LA3: ;
	LOC1 = LOC2;
	if (!(LOC1)) goto LA4;
	nimln(23, "etcpriv.nim");
	T_hIKMUP2P7dAS2xEyobDZTA_3 = addInt(i0, ((NI) 2));
	LOC1 = ((NU8)(cs0[(NI)(T_hIKMUP2P7dAS2xEyobDZTA_3)]) == (NU8)(147));
	LA4: ;
	result0 = LOC1;
	popFrame();
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_etcprivInit000)(void) {
	nimfr("etcpriv", "etcpriv.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_etcprivDatInit000)(void) {
}
