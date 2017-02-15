/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\MinGW\bin\gcc.exe -c  -w  -IC:\nim-0.16.0\lib -o c:\Projects\nim\HelloWorld\nimcache\stdlib_sets.o c:\Projects\nim\HelloWorld\nimcache\stdlib_sets.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Hashset_J1RbOJyRcRl1E5zDK6YKcQ Hashset_J1RbOJyRcRl1E5zDK6YKcQ;
typedef struct TY_8Np6tlClE5az1CyqZdN19bQ TY_8Np6tlClE5az1CyqZdN19bQ;
typedef struct TY_1v9bKyksXWMsm0vNwmZ4EuQ TY_1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Hashset_J1RbOJyRcRl1E5zDK6YKcQ  {
TY_8Np6tlClE5az1CyqZdN19bQ* data;
NI counter;
};
struct TY_1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
typedef NU8 Tnimkind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p0);
struct  TNimType  {
NI size;
Tnimkind_jIBKr1ejBgsfM33Kxw4j7A kind;
Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 Tnimnodekind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
Tnimnodekind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY_8Np6tlClE5az1CyqZdN19bQ {
  TGenericSeq Sup;
  TY_1v9bKyksXWMsm0vNwmZ4EuQ data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, isempty_UshbaKGVTNLaJdFZ6zcwswsets)(NI hcode0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, isfilled_UshbaKGVTNLaJdFZ6zcwsw_2sets)(NI hcode0);
static N_INLINE(NIM_BOOL, mustrehash_flzFqVXoQqeNJHN4qDyOhwsets)(NI length0, NI counter0);
N_NIMCALL(void, failedassertimpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg0);
N_NIMCALL(NI, mulInt)(NI a0, NI b0);
static N_INLINE(NI, subInt)(NI a0, NI b0);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, rightsize_9aQ9aswOyc6W7eMnLOsk3W7Asets)(NI count0);
N_NIMCALL(NI, nextpoweroftwo_gcitR3TEXHJ3GR9bmwIvtRA)(NI x0);
static N_INLINE(NI, divInt)(NI a0, NI b0);
N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NI, addInt)(NI a0, NI b0);
static N_INLINE(NI, nexttry_iM1OyigHU0QXXBzsM5QjYAsets)(NI h0, NI maxhash0);
N_NIMCALL(void, init_9c8NRZCrp0RIj28igIK3trA)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ* s0, NI initialsize0);
N_NIMCALL(NIM_BOOL, ispoweroftwo_M0Db9b9cHxuUgw2ZF0P8utPg)(NI x0);
static N_INLINE(NI, chckRange)(NI i0, NI a0, NI b0);
N_NOINLINE(void, raiseRangeError)(NI64 val0);
static N_NIMCALL(void, Marker_TY_8Np6tlClE5az1CyqZdN19bQ)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(NIM_BOOL, isvalid_JFzq9bIVYKxl54COuFCF9bSA)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ s0);
static N_INLINE(NI, rawget_8BZcW9arrDLi5cvAlu40Aswsets)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ s0, NI key0, NI* hc0);
static N_INLINE(NI, hash_M6zZEYz39abIOUmj0QsNREghashes)(NI x0);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, enlarge_UfNOE2WKRXdG3IkKj9a3bBw)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ* s0);
static N_INLINE(NI, rawgetknownhc_jnVAYE9b4aFtwThD2krrpcAsets)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ s0, NI key0, NI hc0);
N_NIMCALL(void, rawinsert_w4R39aNwJUympF4c5lYF1tg)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ* s0, TY_8Np6tlClE5az1CyqZdN19bQ** data0, NI key0, NI hc0, NI h0);
extern TFrame* frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;
TNimType NTI_1v9bKyksXWMsm0vNwmZ4EuQ;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA;
TNimType NTI_8Np6tlClE5az1CyqZdN19bQ;
TNimType NTI_J1RbOJyRcRl1E5zDK6YKcQ;
STRING_LITERAL(T_0JXiWyhP5OCO8jWMA6sb1w_2, "\015\012  counter < length ", 21);
STRING_LITERAL(T_0JXiWyhP5OCO8jWMA6sb1w_10, "isPowerOfTwo(initialSize) ", 26);
STRING_LITERAL(T_0JXiWyhP5OCO8jWMA6sb1w_12, "isValid(s) The set needs to be initialized.", 43);

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

static N_INLINE(NIM_BOOL, isempty_UshbaKGVTNLaJdFZ6zcwswsets)(NI hcode0) {
	NIM_BOOL result0;
	nimfr("isEmpty", "sets.nim")
	result0 = (NIM_BOOL)0;
	nimln(47, "sets.nim");
	result0 = (hcode0 == ((NI) 0));
	popFrame();
	return result0;
}

static N_INLINE(NIM_BOOL, isfilled_UshbaKGVTNLaJdFZ6zcwsw_2sets)(NI hcode0) {
	NIM_BOOL result0;
	nimfr("isFilled", "sets.nim")
	result0 = (NIM_BOOL)0;
	nimln(50, "sets.nim");
	nimln(347, "system.nim");
	nimln(50, "sets.nim");
	result0 = !((hcode0 == ((NI) 0)));
	popFrame();
	return result0;
}

static N_INLINE(NI, subInt)(NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	result0 = (NI)((NU64)(a0) - (NU64)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result0 ^ (NI)((NU64) ~(b0))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result0;
}

static N_INLINE(NIM_BOOL, mustrehash_flzFqVXoQqeNJHN4qDyOhwsets)(NI length0, NI counter0) {
	NIM_BOOL result0;
	NIM_BOOL LOC5;
	NI T_0JXiWyhP5OCO8jWMA6sb1w_3;
	NI T_0JXiWyhP5OCO8jWMA6sb1w_4;
	NI T_0JXiWyhP5OCO8jWMA6sb1w_5;
	nimfr("mustRehash", "sets.nim")
	result0 = (NIM_BOOL)0;
	nimln(114, "sets.nim");
	{
		if (!!((counter0 < length0))) goto LA3;
		failedassertimpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &T_0JXiWyhP5OCO8jWMA6sb1w_2));
	}
	LA3: ;
	nimln(115, "sets.nim");
	LOC5 = (NIM_BOOL)0;
	T_0JXiWyhP5OCO8jWMA6sb1w_3 = mulInt(length0, ((NI) 2));
	T_0JXiWyhP5OCO8jWMA6sb1w_4 = mulInt(counter0, ((NI) 3));
	LOC5 = ((NI)(T_0JXiWyhP5OCO8jWMA6sb1w_3) < (NI)(T_0JXiWyhP5OCO8jWMA6sb1w_4));
	if (LOC5) goto LA6;
	T_0JXiWyhP5OCO8jWMA6sb1w_5 = subInt(length0, counter0);
	LOC5 = ((NI)(T_0JXiWyhP5OCO8jWMA6sb1w_5) < ((NI) 4));
	LA6: ;
	result0 = LOC5;
	popFrame();
	return result0;
}

static N_INLINE(NI, divInt)(NI a0, NI b0) {
	NI result0;
{	result0 = (NI)0;
	{
		if (!(b0 == ((NI) 0))) goto LA3;
		raiseDivByZero();
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(LOC7)) goto LA8;
		LOC7 = (b0 == ((NI) -1));
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();
	}
	LA9: ;
	result0 = (NI)(a0 / b0);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

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

static N_INLINE(NI, rightsize_9aQ9aswOyc6W7eMnLOsk3W7Asets)(NI count0) {
	NI result0;
	NI T_0JXiWyhP5OCO8jWMA6sb1w_6;
	NI T_0JXiWyhP5OCO8jWMA6sb1w_7;
	NI T_0JXiWyhP5OCO8jWMA6sb1w_8;
	nimfr("rightSize", "sets.nim")
	result0 = (NI)0;
	nimln(124, "sets.nim");
	T_0JXiWyhP5OCO8jWMA6sb1w_6 = mulInt(((NI) (count0)), ((NI) 3));
	T_0JXiWyhP5OCO8jWMA6sb1w_7 = divInt(((NI) ((NI)(T_0JXiWyhP5OCO8jWMA6sb1w_6))), ((NI) 2));
	T_0JXiWyhP5OCO8jWMA6sb1w_8 = addInt(((NI) ((NI)(T_0JXiWyhP5OCO8jWMA6sb1w_7))), ((NI) 4));
	result0 = nextpoweroftwo_gcitR3TEXHJ3GR9bmwIvtRA(((NI) ((NI)(T_0JXiWyhP5OCO8jWMA6sb1w_8))));
	popFrame();
	return result0;
}

static N_INLINE(NI, nexttry_iM1OyigHU0QXXBzsM5QjYAsets)(NI h0, NI maxhash0) {
	NI result0;
	NI T_0JXiWyhP5OCO8jWMA6sb1w_9;
	nimfr("nextTry", "sets.nim")
	result0 = (NI)0;
	nimln(127, "sets.nim");
	T_0JXiWyhP5OCO8jWMA6sb1w_9 = addInt(h0, ((NI) 1));
	result0 = (NI)((NI)(T_0JXiWyhP5OCO8jWMA6sb1w_9) & maxhash0);
	popFrame();
	return result0;
}

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
static N_NIMCALL(void, Marker_TY_8Np6tlClE5az1CyqZdN19bQ)(void* p, NI op) {
	TY_8Np6tlClE5az1CyqZdN19bQ* a;
	NI LOC1;
	a = (TY_8Np6tlClE5az1CyqZdN19bQ*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, init_9c8NRZCrp0RIj28igIK3trA)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ* s0, NI initialsize0) {
	nimfr("init", "sets.nim")
	nimln(348, "sets.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ispoweroftwo_M0Db9b9cHxuUgw2ZF0P8utPg(initialsize0);
		if (!!(LOC3)) goto LA4;
		failedassertimpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &T_0JXiWyhP5OCO8jWMA6sb1w_10));
	}
	LA4: ;
	nimln(349, "sets.nim");
	(*s0).counter = ((NI) 0);
	nimln(350, "sets.nim");
	unsureAsgnRef((void**) (&(*s0).data), (TY_8Np6tlClE5az1CyqZdN19bQ*) newSeq((&NTI_8Np6tlClE5az1CyqZdN19bQ), ((NI)chckRange(initialsize0, ((NI) 0), ((NI) IL64(9223372036854775807))))));
	popFrame();
}

N_NIMCALL(void, initset_Txfa7L9a4GIy6iVDPiKpY3Q)(NI initialsize0, Hashset_J1RbOJyRcRl1E5zDK6YKcQ* Result) {
	nimfr("initSet", "sets.nim")
	nimln(362, "sets.nim");
	init_9c8NRZCrp0RIj28igIK3trA(Result, initialsize0);
	popFrame();
}

N_NIMCALL(NIM_BOOL, isvalid_JFzq9bIVYKxl54COuFCF9bSA)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ s0) {
	NIM_BOOL result0;
	nimfr("isValid", "sets.nim")
	result0 = (NIM_BOOL)0;
	nimln(64, "sets.nim");
	result0 = !((s0.data == 0));
	popFrame();
	return result0;
}

static N_INLINE(NI, hash_M6zZEYz39abIOUmj0QsNREghashes)(NI x0) {
	NI result0;
	nimfr("hash", "hashes.nim")
	result0 = (NI)0;
	nimln(109, "hashes.nim");
	result0 = x0;
	popFrame();
	return result0;
}

static N_INLINE(NI, rawget_8BZcW9arrDLi5cvAlu40Aswsets)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ s0, NI key0, NI* hc0) {
	NI result0;
	NI h0;
	NI T_0JXiWyhP5OCO8jWMA6sb1w_13;
	nimfr("rawGet", "sets.nim")
{	result0 = (NI)0;
	nimln(142, "sets.nim");
	(*hc0) = hash_M6zZEYz39abIOUmj0QsNREghashes(key0);
	nimln(143, "sets.nim");
	{
		if (!((*hc0) == ((NI) 0))) goto LA3;
		nimln(144, "sets.nim");
		(*hc0) = ((NI) 314159265);
	}
	LA3: ;
	nimln(130, "sets.nim");
	h0 = (NI)((*hc0) & (s0.data ? (s0.data->Sup.len-1) : -1));
	{
		nimln(131, "sets.nim");
		while (1) {
			NIM_BOOL LOC7;
			if ((NU)(h0) >= (NU)(s0.data->Sup.len)) raiseIndexError();
			LOC7 = (NIM_BOOL)0;
			LOC7 = isfilled_UshbaKGVTNLaJdFZ6zcwsw_2sets(s0.data->data[h0].Field0);
			if (!LOC7) goto LA6;
			nimln(136, "sets.nim");
			{
				NIM_BOOL LOC10;
				LOC10 = (NIM_BOOL)0;
				if ((NU)(h0) >= (NU)(s0.data->Sup.len)) raiseIndexError();
				LOC10 = (s0.data->data[h0].Field0 == (*hc0));
				if (!(LOC10)) goto LA11;
				if ((NU)(h0) >= (NU)(s0.data->Sup.len)) raiseIndexError();
				LOC10 = (s0.data->data[h0].Field1 == key0);
				LA11: ;
				if (!LOC10) goto LA12;
				nimln(137, "sets.nim");
				result0 = h0;
				goto BeforeRet;
			}
			LA12: ;
			nimln(138, "sets.nim");
			h0 = nexttry_iM1OyigHU0QXXBzsM5QjYAsets(h0, (s0.data ? (s0.data->Sup.len-1) : -1));
		} LA6: ;
	}
	nimln(155, "sets.nim");
	nimln(139, "sets.nim");
	T_0JXiWyhP5OCO8jWMA6sb1w_13 = subInt(((NI) -1), h0);
	result0 = (NI)(T_0JXiWyhP5OCO8jWMA6sb1w_13);
	}BeforeRet: ;
	popFrame();
	return result0;
}

static N_INLINE(NI, rawgetknownhc_jnVAYE9b4aFtwThD2krrpcAsets)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ s0, NI key0, NI hc0) {
	NI result0;
	NI h0;
	NI T_0JXiWyhP5OCO8jWMA6sb1w_15;
	nimfr("rawGetKnownHC", "sets.nim")
{	result0 = (NI)0;
	nimln(130, "sets.nim");
	h0 = (NI)(hc0 & (s0.data ? (s0.data->Sup.len-1) : -1));
	{
		nimln(131, "sets.nim");
		while (1) {
			NIM_BOOL LOC3;
			if ((NU)(h0) >= (NU)(s0.data->Sup.len)) raiseIndexError();
			LOC3 = (NIM_BOOL)0;
			LOC3 = isfilled_UshbaKGVTNLaJdFZ6zcwsw_2sets(s0.data->data[h0].Field0);
			if (!LOC3) goto LA2;
			nimln(136, "sets.nim");
			{
				NIM_BOOL LOC6;
				LOC6 = (NIM_BOOL)0;
				if ((NU)(h0) >= (NU)(s0.data->Sup.len)) raiseIndexError();
				LOC6 = (s0.data->data[h0].Field0 == hc0);
				if (!(LOC6)) goto LA7;
				if ((NU)(h0) >= (NU)(s0.data->Sup.len)) raiseIndexError();
				LOC6 = (s0.data->data[h0].Field1 == key0);
				LA7: ;
				if (!LOC6) goto LA8;
				nimln(137, "sets.nim");
				result0 = h0;
				goto BeforeRet;
			}
			LA8: ;
			nimln(138, "sets.nim");
			h0 = nexttry_iM1OyigHU0QXXBzsM5QjYAsets(h0, (s0.data ? (s0.data->Sup.len-1) : -1));
		} LA2: ;
	}
	nimln(152, "sets.nim");
	nimln(139, "sets.nim");
	T_0JXiWyhP5OCO8jWMA6sb1w_15 = subInt(((NI) -1), h0);
	result0 = (NI)(T_0JXiWyhP5OCO8jWMA6sb1w_15);
	}BeforeRet: ;
	popFrame();
	return result0;
}

N_NIMCALL(void, rawinsert_w4R39aNwJUympF4c5lYF1tg)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ* s0, TY_8Np6tlClE5az1CyqZdN19bQ** data0, NI key0, NI hc0, NI h0) {
	nimfr("rawInsert", "sets.nim")
	nimln(148, "sets.nim");
	if ((NU)(h0) >= (NU)((*data0)->Sup.len)) raiseIndexError();
	(*data0)->data[h0].Field1 = key0;
	nimln(198, "sets.nim");
	if ((NU)(h0) >= (NU)((*data0)->Sup.len)) raiseIndexError();
	(*data0)->data[h0].Field0 = hc0;
	popFrame();
}

N_NIMCALL(void, enlarge_UfNOE2WKRXdG3IkKj9a3bBw)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ* s0) {
	TY_8Np6tlClE5az1CyqZdN19bQ* n0;
	NI T_0JXiWyhP5OCO8jWMA6sb1w_14;
	TY_8Np6tlClE5az1CyqZdN19bQ* LOC1;
	nimfr("enlarge", "sets.nim")
	n0 = (TY_8Np6tlClE5az1CyqZdN19bQ*)0;
	nimln(202, "sets.nim");
	T_0JXiWyhP5OCO8jWMA6sb1w_14 = mulInt(((*s0).data ? (*s0).data->Sup.len : 0), ((NI) 2));
	n0 = (TY_8Np6tlClE5az1CyqZdN19bQ*) newSeq((&NTI_8Np6tlClE5az1CyqZdN19bQ), ((NI)chckRange((NI)(T_0JXiWyhP5OCO8jWMA6sb1w_14), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(203, "sets.nim");
	LOC1 = (TY_8Np6tlClE5az1CyqZdN19bQ*)0;
	LOC1 = (*s0).data;
	unsureAsgnRef((void**) (&(*s0).data), n0);
	n0 = LOC1;
	{
		NI i_aB4TPwXsJH0W0W2ifmyU3g;
		NI HEX3Atmp_Ssv3KZ59cdGlpjgaHeIXRaA;
		NI res_sCTEb4i6VDxi6OuUAmoDPA;
		i_aB4TPwXsJH0W0W2ifmyU3g = (NI)0;
		HEX3Atmp_Ssv3KZ59cdGlpjgaHeIXRaA = (NI)0;
		nimln(204, "sets.nim");
		HEX3Atmp_Ssv3KZ59cdGlpjgaHeIXRaA = (n0 ? (n0->Sup.len-1) : -1);
		nimln(1908, "system.nim");
		res_sCTEb4i6VDxi6OuUAmoDPA = ((NI) 0);
		{
			nimln(1909, "system.nim");
			while (1) {
				NI T_0JXiWyhP5OCO8jWMA6sb1w_17;
				nimln(1908, "system.nim");
				if (!(res_sCTEb4i6VDxi6OuUAmoDPA <= HEX3Atmp_Ssv3KZ59cdGlpjgaHeIXRaA)) goto LA4;
				nimln(1910, "system.nim");
				i_aB4TPwXsJH0W0W2ifmyU3g = res_sCTEb4i6VDxi6OuUAmoDPA;
				nimln(205, "sets.nim");
				{
					NIM_BOOL LOC7;
					NI j0;
					NI LOC10;
					NI T_0JXiWyhP5OCO8jWMA6sb1w_16;
					if ((NU)(i_aB4TPwXsJH0W0W2ifmyU3g) >= (NU)(n0->Sup.len)) raiseIndexError();
					LOC7 = (NIM_BOOL)0;
					LOC7 = isfilled_UshbaKGVTNLaJdFZ6zcwsw_2sets(n0->data[i_aB4TPwXsJH0W0W2ifmyU3g].Field0);
					if (!LOC7) goto LA8;
					nimln(206, "sets.nim");
					if ((NU)(i_aB4TPwXsJH0W0W2ifmyU3g) >= (NU)(n0->Sup.len)) raiseIndexError();
					if ((NU)(i_aB4TPwXsJH0W0W2ifmyU3g) >= (NU)(n0->Sup.len)) raiseIndexError();
					LOC10 = (NI)0;
					LOC10 = rawgetknownhc_jnVAYE9b4aFtwThD2krrpcAsets((*s0), n0->data[i_aB4TPwXsJH0W0W2ifmyU3g].Field1, n0->data[i_aB4TPwXsJH0W0W2ifmyU3g].Field0);
					T_0JXiWyhP5OCO8jWMA6sb1w_16 = subInt(((NI) -1), LOC10);
					j0 = (NI)(T_0JXiWyhP5OCO8jWMA6sb1w_16);
					nimln(207, "sets.nim");
					if ((NU)(i_aB4TPwXsJH0W0W2ifmyU3g) >= (NU)(n0->Sup.len)) raiseIndexError();
					if ((NU)(i_aB4TPwXsJH0W0W2ifmyU3g) >= (NU)(n0->Sup.len)) raiseIndexError();
					rawinsert_w4R39aNwJUympF4c5lYF1tg(s0, (&(*s0).data), n0->data[i_aB4TPwXsJH0W0W2ifmyU3g].Field1, n0->data[i_aB4TPwXsJH0W0W2ifmyU3g].Field0, j0);
				}
				LA8: ;
				nimln(1908, "system.nim");
				T_0JXiWyhP5OCO8jWMA6sb1w_17 = addInt(res_sCTEb4i6VDxi6OuUAmoDPA, ((NI) 1));
				res_sCTEb4i6VDxi6OuUAmoDPA = (NI)(T_0JXiWyhP5OCO8jWMA6sb1w_17);
			} LA4: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, incl_mie3xWW6nO78ICyeKubimQ)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ* s0, NI key0) {
	NI hc0;
	NI index0;
	nimfr("incl", "sets.nim")
	nimln(241, "sets.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = isvalid_JFzq9bIVYKxl54COuFCF9bSA((*s0));
		if (!!(LOC3)) goto LA4;
		failedassertimpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &T_0JXiWyhP5OCO8jWMA6sb1w_12));
	}
	LA4: ;
	hc0 = (NI)0;
	nimln(211, "sets.nim");
	index0 = rawget_8BZcW9arrDLi5cvAlu40Aswsets((*s0), key0, (&hc0));
	nimln(242, "sets.nim");
	{
		NI T_0JXiWyhP5OCO8jWMA6sb1w_18;
		NI T_0JXiWyhP5OCO8jWMA6sb1w_19;
		nimln(212, "sets.nim");
		if (!(index0 < ((NI) 0))) goto LA8;
		nimln(213, "sets.nim");
		{
			NIM_BOOL LOC12;
			LOC12 = (NIM_BOOL)0;
			LOC12 = mustrehash_flzFqVXoQqeNJHN4qDyOhwsets(((*s0).data ? (*s0).data->Sup.len : 0), (*s0).counter);
			if (!LOC12) goto LA13;
			nimln(214, "sets.nim");
			enlarge_UfNOE2WKRXdG3IkKj9a3bBw(s0);
			nimln(215, "sets.nim");
			index0 = rawgetknownhc_jnVAYE9b4aFtwThD2krrpcAsets((*s0), key0, hc0);
		}
		LA13: ;
		nimln(216, "sets.nim");
		T_0JXiWyhP5OCO8jWMA6sb1w_18 = subInt(((NI) -1), index0);
		rawinsert_w4R39aNwJUympF4c5lYF1tg(s0, (&(*s0).data), key0, hc0, (NI)(T_0JXiWyhP5OCO8jWMA6sb1w_18));
		nimln(217, "sets.nim");
		T_0JXiWyhP5OCO8jWMA6sb1w_19 = addInt((*s0).counter, ((NI) 1));
		(*s0).counter = (NI)(T_0JXiWyhP5OCO8jWMA6sb1w_19);
	}
	LA8: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, contains_VRxshyvToOn4RLYHBlBSPQ)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ s0, NI key0) {
	NIM_BOOL result0;
	NI hc0;
	NI index0;
	nimfr("contains", "sets.nim")
	result0 = (NIM_BOOL)0;
	nimln(191, "sets.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = isvalid_JFzq9bIVYKxl54COuFCF9bSA(s0);
		if (!!(LOC3)) goto LA4;
		failedassertimpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &T_0JXiWyhP5OCO8jWMA6sb1w_12));
	}
	LA4: ;
	hc0 = (NI)0;
	nimln(193, "sets.nim");
	index0 = rawget_8BZcW9arrDLi5cvAlu40Aswsets(s0, key0, (&hc0));
	nimln(194, "sets.nim");
	result0 = (((NI) 0) <= index0);
	popFrame();
	return result0;
}

N_NIMCALL(NI, len_fD9bQhCtUWtTZtVINFKvhfA)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ s0) {
	NI result0;
	nimfr("len", "sets.nim")
	result0 = (NI)0;
	nimln(78, "sets.nim");
	result0 = s0.counter;
	popFrame();
	return result0;
}

N_NIMCALL(void, excl_mie3xWW6nO78ICyeKubimQ_2)(Hashset_J1RbOJyRcRl1E5zDK6YKcQ* s0, NI key0) {
	NI hc0;
	NI i0;
	NI msk0;
	nimfr("excl", "sets.nim")
{	nimln(278, "sets.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = isvalid_JFzq9bIVYKxl54COuFCF9bSA((*s0));
		if (!!(LOC3)) goto LA4;
		failedassertimpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &T_0JXiWyhP5OCO8jWMA6sb1w_12));
	}
	LA4: ;
	hc0 = (NI)0;
	nimln(280, "sets.nim");
	i0 = rawget_8BZcW9arrDLi5cvAlu40Aswsets((*s0), key0, (&hc0));
	nimln(281, "sets.nim");
	msk0 = ((*s0).data ? ((*s0).data->Sup.len-1) : -1);
	nimln(282, "sets.nim");
	{
		NI v_EOObR74rqFmYscd3T0XGaw;
		NI T_0JXiWyhP5OCO8jWMA6sb1w_20;
		if (!(((NI) 0) <= i0)) goto LA8;
		nimln(283, "sets.nim");
		if ((NU)(i0) >= (NU)((*s0).data->Sup.len)) raiseIndexError();
		(*s0).data->data[i0].Field0 = ((NI) 0);
		nimln(284, "sets.nim");
		if ((NU)(i0) >= (NU)((*s0).data->Sup.len)) raiseIndexError();
		v_EOObR74rqFmYscd3T0XGaw = (NI)0;
		(*s0).data->data[i0].Field1 = v_EOObR74rqFmYscd3T0XGaw;
		nimln(285, "sets.nim");
		T_0JXiWyhP5OCO8jWMA6sb1w_20 = subInt((*s0).counter, ((NI) 1));
		(*s0).counter = (NI)(T_0JXiWyhP5OCO8jWMA6sb1w_20);
		{
			nimln(286, "sets.nim");
			while (1) {
				NI j0;
				NI r0;
				NI v_EOObR74rqFmYscd3T0XGaw_2;
				nimln(287, "sets.nim");
				j0 = i0;
				nimln(288, "sets.nim");
				r0 = j0;
				nimln(289, "sets.nim");
				if ((NU)(i0) >= (NU)((*s0).data->Sup.len)) raiseIndexError();
				(*s0).data->data[i0].Field0 = ((NI) 0);
				nimln(290, "sets.nim");
				if ((NU)(i0) >= (NU)((*s0).data->Sup.len)) raiseIndexError();
				v_EOObR74rqFmYscd3T0XGaw_2 = (NI)0;
				(*s0).data->data[i0].Field1 = v_EOObR74rqFmYscd3T0XGaw_2;
				{
					nimln(291, "sets.nim");
					while (1) {
						NI T_0JXiWyhP5OCO8jWMA6sb1w_21;
						nimln(292, "sets.nim");
						T_0JXiWyhP5OCO8jWMA6sb1w_21 = addInt(i0, ((NI) 1));
						i0 = (NI)((NI)(T_0JXiWyhP5OCO8jWMA6sb1w_21) & msk0);
						nimln(293, "sets.nim");
						{
							NIM_BOOL LOC16;
							if ((NU)(i0) >= (NU)((*s0).data->Sup.len)) raiseIndexError();
							LOC16 = (NIM_BOOL)0;
							LOC16 = isempty_UshbaKGVTNLaJdFZ6zcwswsets((*s0).data->data[i0].Field0);
							if (!LOC16) goto LA17;
							nimln(294, "sets.nim");
							goto BeforeRet;
						}
						LA17: ;
						nimln(295, "sets.nim");
						if ((NU)(i0) >= (NU)((*s0).data->Sup.len)) raiseIndexError();
						r0 = (NI)((*s0).data->data[i0].Field0 & msk0);
						nimln(262, "sets.nim");
						{
							NIM_BOOL LOC21;
							NIM_BOOL LOC22;
							NIM_BOOL LOC23;
							NIM_BOOL LOC26;
							NIM_BOOL LOC29;
							nimln(291, "sets.nim");
							LOC21 = (NIM_BOOL)0;
							LOC22 = (NIM_BOOL)0;
							LOC23 = (NIM_BOOL)0;
							LOC23 = (r0 <= i0);
							if (!(LOC23)) goto LA24;
							LOC23 = (j0 < r0);
							LA24: ;
							LOC22 = LOC23;
							if (LOC22) goto LA25;
							LOC26 = (NIM_BOOL)0;
							LOC26 = (j0 < r0);
							if (!(LOC26)) goto LA27;
							LOC26 = (i0 < j0);
							LA27: ;
							LOC22 = LOC26;
							LA25: ;
							LOC21 = LOC22;
							if (LOC21) goto LA28;
							LOC29 = (NIM_BOOL)0;
							LOC29 = (i0 < j0);
							if (!(LOC29)) goto LA30;
							LOC29 = (r0 <= i0);
							LA30: ;
							LOC21 = LOC29;
							LA28: ;
							if (!!(LOC21)) goto LA31;
							nimln(262, "sets.nim");
							goto LA12;
						}
						LA31: ;
					}
				} LA12: ;
				nimln(296, "sets.nim");
				if ((NU)(j0) >= (NU)((*s0).data->Sup.len)) raiseIndexError();
				if ((NU)(i0) >= (NU)((*s0).data->Sup.len)) raiseIndexError();
				(*s0).data->data[j0] = (*s0).data->data[i0];
			}
		}
	}
	LA8: ;
	}BeforeRet: ;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_setsInit000)(void) {
	nimfr("sets", "sets.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_setsDatInit000)(void) {
static TNimNode* T_0JXiWyhP5OCO8jWMA6sb1w_11[2];
static TNimNode* T_0JXiWyhP5OCO8jWMA6sb1w_22[2];
static TNimNode T_0JXiWyhP5OCO8jWMA6sb1w_0[6];
NTI_1v9bKyksXWMsm0vNwmZ4EuQ.size = sizeof(TY_1v9bKyksXWMsm0vNwmZ4EuQ);
NTI_1v9bKyksXWMsm0vNwmZ4EuQ.kind = 18;
NTI_1v9bKyksXWMsm0vNwmZ4EuQ.base = 0;
NTI_1v9bKyksXWMsm0vNwmZ4EuQ.flags = 3;
T_0JXiWyhP5OCO8jWMA6sb1w_11[0] = &T_0JXiWyhP5OCO8jWMA6sb1w_0[1];
T_0JXiWyhP5OCO8jWMA6sb1w_0[1].kind = 1;
T_0JXiWyhP5OCO8jWMA6sb1w_0[1].offset = offsetof(TY_1v9bKyksXWMsm0vNwmZ4EuQ, Field0);
T_0JXiWyhP5OCO8jWMA6sb1w_0[1].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_0JXiWyhP5OCO8jWMA6sb1w_0[1].name = "Field0";
T_0JXiWyhP5OCO8jWMA6sb1w_11[1] = &T_0JXiWyhP5OCO8jWMA6sb1w_0[2];
T_0JXiWyhP5OCO8jWMA6sb1w_0[2].kind = 1;
T_0JXiWyhP5OCO8jWMA6sb1w_0[2].offset = offsetof(TY_1v9bKyksXWMsm0vNwmZ4EuQ, Field1);
T_0JXiWyhP5OCO8jWMA6sb1w_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_0JXiWyhP5OCO8jWMA6sb1w_0[2].name = "Field1";
T_0JXiWyhP5OCO8jWMA6sb1w_0[0].len = 2; T_0JXiWyhP5OCO8jWMA6sb1w_0[0].kind = 2; T_0JXiWyhP5OCO8jWMA6sb1w_0[0].sons = &T_0JXiWyhP5OCO8jWMA6sb1w_11[0];
NTI_1v9bKyksXWMsm0vNwmZ4EuQ.node = &T_0JXiWyhP5OCO8jWMA6sb1w_0[0];
NTI_8Np6tlClE5az1CyqZdN19bQ.size = sizeof(TY_8Np6tlClE5az1CyqZdN19bQ*);
NTI_8Np6tlClE5az1CyqZdN19bQ.kind = 24;
NTI_8Np6tlClE5az1CyqZdN19bQ.base = (&NTI_1v9bKyksXWMsm0vNwmZ4EuQ);
NTI_8Np6tlClE5az1CyqZdN19bQ.flags = 2;
NTI_8Np6tlClE5az1CyqZdN19bQ.marker = Marker_TY_8Np6tlClE5az1CyqZdN19bQ;
NTI_J1RbOJyRcRl1E5zDK6YKcQ.size = sizeof(Hashset_J1RbOJyRcRl1E5zDK6YKcQ);
NTI_J1RbOJyRcRl1E5zDK6YKcQ.kind = 18;
NTI_J1RbOJyRcRl1E5zDK6YKcQ.base = 0;
NTI_J1RbOJyRcRl1E5zDK6YKcQ.flags = 2;
T_0JXiWyhP5OCO8jWMA6sb1w_22[0] = &T_0JXiWyhP5OCO8jWMA6sb1w_0[4];
T_0JXiWyhP5OCO8jWMA6sb1w_0[4].kind = 1;
T_0JXiWyhP5OCO8jWMA6sb1w_0[4].offset = offsetof(Hashset_J1RbOJyRcRl1E5zDK6YKcQ, data);
T_0JXiWyhP5OCO8jWMA6sb1w_0[4].typ = (&NTI_8Np6tlClE5az1CyqZdN19bQ);
T_0JXiWyhP5OCO8jWMA6sb1w_0[4].name = "data";
T_0JXiWyhP5OCO8jWMA6sb1w_22[1] = &T_0JXiWyhP5OCO8jWMA6sb1w_0[5];
T_0JXiWyhP5OCO8jWMA6sb1w_0[5].kind = 1;
T_0JXiWyhP5OCO8jWMA6sb1w_0[5].offset = offsetof(Hashset_J1RbOJyRcRl1E5zDK6YKcQ, counter);
T_0JXiWyhP5OCO8jWMA6sb1w_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_0JXiWyhP5OCO8jWMA6sb1w_0[5].name = "counter";
T_0JXiWyhP5OCO8jWMA6sb1w_0[3].len = 2; T_0JXiWyhP5OCO8jWMA6sb1w_0[3].kind = 2; T_0JXiWyhP5OCO8jWMA6sb1w_0[3].sons = &T_0JXiWyhP5OCO8jWMA6sb1w_22[0];
NTI_J1RbOJyRcRl1E5zDK6YKcQ.node = &T_0JXiWyhP5OCO8jWMA6sb1w_0[3];
}
