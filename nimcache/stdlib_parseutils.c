/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\MinGW\bin\gcc.exe -c  -w  -IC:\nim-0.16.0\lib -o c:\Projects\nim\HelloWorld\nimcache\stdlib_parseutils.o c:\Projects\nim\HelloWorld\nimcache\stdlib_parseutils.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Overflowerror_I3Jtn27626sFBOls6BBQ2Q Overflowerror_I3Jtn27626sFBOls6BBQ2Q;
typedef struct Arithmeticerror_QcJsjWXxMFpjHfkCIK5ExA Arithmeticerror_QcJsjWXxMFpjHfkCIK5ExA;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct Cellseq_Axo1XVm9aaQueTOldv8le5w Cellseq_Axo1XVm9aaQueTOldv8le5w;
typedef struct Gcheap_1TRH1TZMaVZTnLNcIHuNFQ Gcheap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct Gcstack_7fytPA5bBsob6See21YMRA Gcstack_7fytPA5bBsob6See21YMRA;
typedef struct Memregion_x81NhDv59b8ercDZ9bi85jyg Memregion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct Smallchunk_tXn60W2f8h3jgAYdEmy5NQ Smallchunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct Llchunk_XsENErzHIZV9bhvyJx56wGw Llchunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct Bigchunk_Rv9c70Uhp2TytkX7eH78qEg Bigchunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct Intset_EZObFrE3NC9bIb3YMkY9crZA Intset_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct Avlnode_IaqjtwKhxLEpvDS9bct9blEw Avlnode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct Gcstat_0RwLoVBHZPfUAcLczmfQAg Gcstat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct Cellset_jG87P0AI9aZtss9ccTYBIISQ Cellset_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct Pagedesc_fublkgIY4LG3mT51LU2WHg Pagedesc_fublkgIY4LG3mT51LU2WHg;
typedef struct Basechunk_Sdq7WpT6qAH858F5ZEdG3w Basechunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct Freecell_u6M5LHprqzkn9axr04yg9bGQ Freecell_u6M5LHprqzkn9axr04yg9bGQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Arithmeticerror_QcJsjWXxMFpjHfkCIK5ExA  {
  Exception Sup;
};
struct  Overflowerror_I3Jtn27626sFBOls6BBQ2Q  {
  Arithmeticerror_QcJsjWXxMFpjHfkCIK5ExA Sup;
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
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  Cellseq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  Intset_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
struct  Memregion_x81NhDv59b8ercDZ9bi85jyg  {
NI minlargeobj;
NI maxlargeobj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freesmallchunks;
Llchunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* freechunkslist;
Intset_EZObFrE3NC9bIb3YMkY9crZA chunkstarts;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* root;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* last;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* freeavlnodes;
NIM_BOOL locked;
NIM_BOOL blockchunksizeincrease;
NI nextchunksize;
};
struct  Gcstat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
Pagedesc_fublkgIY4LG3mT51LU2WHg* head;
Pagedesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  Gcheap_1TRH1TZMaVZTnLNcIHuNFQ  {
Gcstack_7fytPA5bBsob6See21YMRA* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq_Axo1XVm9aaQueTOldv8le5w zct;
Cellseq_Axo1XVm9aaQueTOldv8le5w decstack;
Cellseq_Axo1XVm9aaQueTOldv8le5w tempstack;
NI recgclock;
Memregion_x81NhDv59b8ercDZ9bi85jyg region;
Gcstat_0RwLoVBHZPfUAcLczmfQAg stat;
Cellset_jG87P0AI9aZtss9ccTYBIISQ marked;
Cellseq_Axo1XVm9aaQueTOldv8le5w additionalroots;
};
struct  Gcstack_7fytPA5bBsob6See21YMRA  {
Gcstack_7fytPA5bBsob6See21YMRA* prev;
Gcstack_7fytPA5bBsob6See21YMRA* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk_tXn60W2f8h3jgAYdEmy5NQ  {
  Basechunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* next;
Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
Freecell_u6M5LHprqzkn9axr04yg9bGQ* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
Llchunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  Bigchunk_Rv9c70Uhp2TytkX7eH78qEg  {
  Basechunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* next;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NI align;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef Avlnode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  Avlnode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc_fublkgIY4LG3mT51LU2WHg  {
Pagedesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  Freecell_u6M5LHprqzkn9axr04yg9bGQ  {
Freecell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zerofield;
};
N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s0, NI64* number0, NI start0);
N_NIMCALL(NI, rawparseint_ZzngwN3GXlI9aVYNxHLGOXQ)(NimStringDesc* s0, NI64* b0, NI start0);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a0, NI b0);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, mulInt64)(NI64 a0, NI64 b0);
static N_INLINE(NI, subInt)(NI a0, NI b0);
static N_INLINE(NI64, subInt64)(NI64 a0, NI64 b0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0);
static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NOINLINE(void, addzct_fCDI7oO1NNVXXURtxSzsRw)(Cellseq_Axo1XVm9aaQueTOldv8le5w* s0, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
N_NIMCALL(NI, rawparseuint_OzYQCLjNwotWpNl0Q1C9cmQ)(NimStringDesc* s0, NU64* b0, NI start0);
extern TFrame* frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TNimType NTI_6woiEp3hwhYMr1p5tjkZvA;
extern TNimType NTI_I3Jtn27626sFBOls6BBQ2Q;
extern Gcheap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(T_vI9aZNKIcImom6dDyKXW1ZA_11, "overflow", 8);

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

static N_INLINE(NI64, subInt64)(NI64 a0, NI64 b0) {
	NI64 result0;
{	result0 = (NI64)0;
	result0 = (NI64)((NU64)(a0) - (NU64)(b0));
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (IL64(0) <= (NI64)(result0 ^ a0));
		if (LOC3) goto LA4;
		LOC3 = (IL64(0) <= (NI64)(result0 ^ (NI64)((NU64) ~(b0))));
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

N_NIMCALL(NI, rawparseint_ZzngwN3GXlI9aVYNxHLGOXQ)(NimStringDesc* s0, NI64* b0, NI start0) {
	NI result0;
	NI64 sign0;
	NI i0;
	nimfr("rawParseInt", "parseutils.nim")
	result0 = (NI)0;
	nimln(213, "parseutils.nim");
	sign0 = IL64(-1);
	nimln(214, "parseutils.nim");
	i0 = start0;
	nimln(215, "parseutils.nim");
	{
		NI T_vI9aZNKIcImom6dDyKXW1ZA_2;
		if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
		if (!((NU8)(s0->data[i0]) == (NU8)(43))) goto LA3;
		T_vI9aZNKIcImom6dDyKXW1ZA_2 = addInt(i0, ((NI) 1));
		i0 = (NI)(T_vI9aZNKIcImom6dDyKXW1ZA_2);
	}
	goto LA1;
	LA3: ;
	{
		NI T_vI9aZNKIcImom6dDyKXW1ZA_3;
		nimln(216, "parseutils.nim");
		if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
		if (!((NU8)(s0->data[i0]) == (NU8)(45))) goto LA6;
		nimln(217, "parseutils.nim");
		T_vI9aZNKIcImom6dDyKXW1ZA_3 = addInt(i0, ((NI) 1));
		i0 = (NI)(T_vI9aZNKIcImom6dDyKXW1ZA_3);
		nimln(218, "parseutils.nim");
		sign0 = IL64(1);
	}
	goto LA1;
	LA6: ;
	LA1: ;
	nimln(219, "parseutils.nim");
	{
		NI64 T_vI9aZNKIcImom6dDyKXW1ZA_9;
		NI T_vI9aZNKIcImom6dDyKXW1ZA_10;
		if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
		if (!(((NU8)(s0->data[i0])) >= ((NU8)(48)) && ((NU8)(s0->data[i0])) <= ((NU8)(57)))) goto LA10;
		nimln(220, "parseutils.nim");
		(*b0) = IL64(0);
		{
			nimln(221, "parseutils.nim");
			while (1) {
				NI64 T_vI9aZNKIcImom6dDyKXW1ZA_4;
				NI T_vI9aZNKIcImom6dDyKXW1ZA_5;
				NI64 T_vI9aZNKIcImom6dDyKXW1ZA_6;
				NI T_vI9aZNKIcImom6dDyKXW1ZA_7;
				if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
				if (!(((NU8)(s0->data[i0])) >= ((NU8)(48)) && ((NU8)(s0->data[i0])) <= ((NU8)(57)))) goto LA13;
				nimln(222, "parseutils.nim");
				T_vI9aZNKIcImom6dDyKXW1ZA_4 = mulInt64((*b0), IL64(10));
				if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
				T_vI9aZNKIcImom6dDyKXW1ZA_5 = subInt(((NI) (((NU8)(s0->data[i0])))), ((NI) 48));
				T_vI9aZNKIcImom6dDyKXW1ZA_6 = subInt64((NI64)(T_vI9aZNKIcImom6dDyKXW1ZA_4), ((NI64) ((NI)(T_vI9aZNKIcImom6dDyKXW1ZA_5))));
				(*b0) = (NI64)(T_vI9aZNKIcImom6dDyKXW1ZA_6);
				nimln(223, "parseutils.nim");
				T_vI9aZNKIcImom6dDyKXW1ZA_7 = addInt(i0, ((NI) 1));
				i0 = (NI)(T_vI9aZNKIcImom6dDyKXW1ZA_7);
				{
					nimln(224, "parseutils.nim");
					while (1) {
						NI T_vI9aZNKIcImom6dDyKXW1ZA_8;
						if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
						if (!((NU8)(s0->data[i0]) == (NU8)(95))) goto LA15;
						T_vI9aZNKIcImom6dDyKXW1ZA_8 = addInt(i0, ((NI) 1));
						i0 = (NI)(T_vI9aZNKIcImom6dDyKXW1ZA_8);
					} LA15: ;
				}
			} LA13: ;
		}
		nimln(225, "parseutils.nim");
		T_vI9aZNKIcImom6dDyKXW1ZA_9 = mulInt64((*b0), sign0);
		(*b0) = (NI64)(T_vI9aZNKIcImom6dDyKXW1ZA_9);
		nimln(226, "parseutils.nim");
		T_vI9aZNKIcImom6dDyKXW1ZA_10 = subInt(i0, start0);
		result0 = (NI)(T_vI9aZNKIcImom6dDyKXW1ZA_10);
	}
	LA10: ;
	popFrame();
	return result0;
}

N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s0, NI64* number0, NI start0) {
	NI result0;
	NI64 res0;
	nimfr("parseBiggestInt", "parseutils.nim")
	result0 = (NI)0;
	res0 = (NI64)0;
	nimln(237, "parseutils.nim");
	result0 = rawparseint_ZzngwN3GXlI9aVYNxHLGOXQ(s0, (&res0), start0);
	nimln(238, "parseutils.nim");
	(*number0) = res0;
	popFrame();
	return result0;
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result0;
	nimfr("usrToCell", "gc.nim")
	result0 = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln(134, "gc.nim");
	result0 = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result0;
}

static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(220, "gc.nim");
	addzct_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c0);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(262, "gc.nim");
	c0 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p0);
	nimln(264, "gc.nim");
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(265, "gc.nim");
		rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system(c0);
	}
	LA3: ;
	popFrame();
}

N_NIMCALL(NI, npuParseInt)(NimStringDesc* s0, NI* number0, NI start0) {
	NI result0;
	NI64 res0;
	nimfr("parseInt", "parseutils.nim")
	result0 = (NI)0;
	res0 = (NI64)0;
	nimln(246, "parseutils.nim");
	result0 = npuParseBiggestInt(s0, (&res0), start0);
	nimln(247, "parseutils.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC5;
		Overflowerror_I3Jtn27626sFBOls6BBQ2Q* e_dLWqz9cnB1r9cC0aygI9bbxJw;
		NimStringDesc* LOC9;
		LOC3 = (NIM_BOOL)0;
		LOC3 = NIM_FALSE;
		if (!(LOC3)) goto LA4;
		nimln(248, "parseutils.nim");
		LOC5 = (NIM_BOOL)0;
		LOC5 = (res0 < (IL64(-9223372036854775807) - IL64(1)));
		if (LOC5) goto LA6;
		LOC5 = (IL64(9223372036854775807) < res0);
		LA6: ;
		LOC3 = LOC5;
		LA4: ;
		if (!LOC3) goto LA7;
		e_dLWqz9cnB1r9cC0aygI9bbxJw = (Overflowerror_I3Jtn27626sFBOls6BBQ2Q*)0;
		nimln(2560, "system.nim");
		e_dLWqz9cnB1r9cC0aygI9bbxJw = (Overflowerror_I3Jtn27626sFBOls6BBQ2Q*) newObj((&NTI_6woiEp3hwhYMr1p5tjkZvA), sizeof(Overflowerror_I3Jtn27626sFBOls6BBQ2Q));
		(*e_dLWqz9cnB1r9cC0aygI9bbxJw).Sup.Sup.Sup.m_type = (&NTI_I3Jtn27626sFBOls6BBQ2Q);
		nimln(2561, "system.nim");
		LOC9 = (NimStringDesc*)0;
		LOC9 = (*e_dLWqz9cnB1r9cC0aygI9bbxJw).Sup.Sup.message; (*e_dLWqz9cnB1r9cC0aygI9bbxJw).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &T_vI9aZNKIcImom6dDyKXW1ZA_11));
		if (LOC9) nimGCunrefNoCycle(LOC9);
		nimln(249, "parseutils.nim");
		raiseException((Exception*)e_dLWqz9cnB1r9cC0aygI9bbxJw, "OverflowError");
	}
	goto LA1;
	LA7: ;
	{
		nimln(347, "system.nim");
		nimln(250, "parseutils.nim");
		if (!!((result0 == ((NI) 0)))) goto LA11;
		nimln(251, "parseutils.nim");
		(*number0) = ((NI) (res0));
	}
	goto LA1;
	LA11: ;
	LA1: ;
	popFrame();
	return result0;
}

N_NIMCALL(NI, rawparseuint_OzYQCLjNwotWpNl0Q1C9cmQ)(NimStringDesc* s0, NU64* b0, NI start0) {
	NI result0;
	NU64 res0;
	NU64 prev0;
	NI i0;
	nimfr("rawParseUInt", "parseutils.nim")
{	result0 = (NI)0;
	nimln(256, "parseutils.nim");
	res0 = 0ULL;
	nimln(257, "parseutils.nim");
	prev0 = 0ULL;
	nimln(258, "parseutils.nim");
	i0 = start0;
	nimln(259, "parseutils.nim");
	{
		NI T_vI9aZNKIcImom6dDyKXW1ZA_12;
		if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
		if (!((NU8)(s0->data[i0]) == (NU8)(43))) goto LA3;
		T_vI9aZNKIcImom6dDyKXW1ZA_12 = addInt(i0, ((NI) 1));
		i0 = (NI)(T_vI9aZNKIcImom6dDyKXW1ZA_12);
	}
	LA3: ;
	nimln(260, "parseutils.nim");
	{
		NI T_vI9aZNKIcImom6dDyKXW1ZA_16;
		if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
		if (!(((NU8)(s0->data[i0])) >= ((NU8)(48)) && ((NU8)(s0->data[i0])) <= ((NU8)(57)))) goto LA7;
		nimln(261, "parseutils.nim");
		(*b0) = 0ULL;
		{
			nimln(262, "parseutils.nim");
			while (1) {
				NI T_vI9aZNKIcImom6dDyKXW1ZA_13;
				NI T_vI9aZNKIcImom6dDyKXW1ZA_14;
				if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
				if (!(((NU8)(s0->data[i0])) >= ((NU8)(48)) && ((NU8)(s0->data[i0])) <= ((NU8)(57)))) goto LA10;
				nimln(263, "parseutils.nim");
				prev0 = res0;
				nimln(264, "parseutils.nim");
				if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
				T_vI9aZNKIcImom6dDyKXW1ZA_13 = subInt(((NI) (((NU8)(s0->data[i0])))), ((NI) 48));
				res0 = (NU64)((NU64)((NU64)((NU64)(res0) * (NU64)(((NI) 10)))) + (NU64)(((NU64) ((NI)(T_vI9aZNKIcImom6dDyKXW1ZA_13)))));
				nimln(265, "parseutils.nim");
				{
					if (!((NU64)(res0) < (NU64)(prev0))) goto LA13;
					nimln(266, "parseutils.nim");
					result0 = ((NI) 0);
					goto BeforeRet;
				}
				LA13: ;
				nimln(267, "parseutils.nim");
				T_vI9aZNKIcImom6dDyKXW1ZA_14 = addInt(i0, ((NI) 1));
				i0 = (NI)(T_vI9aZNKIcImom6dDyKXW1ZA_14);
				{
					nimln(268, "parseutils.nim");
					while (1) {
						NI T_vI9aZNKIcImom6dDyKXW1ZA_15;
						if ((NU)(i0) > (NU)(s0->Sup.len)) raiseIndexError();
						if (!((NU8)(s0->data[i0]) == (NU8)(95))) goto LA16;
						T_vI9aZNKIcImom6dDyKXW1ZA_15 = addInt(i0, ((NI) 1));
						i0 = (NI)(T_vI9aZNKIcImom6dDyKXW1ZA_15);
					} LA16: ;
				}
			} LA10: ;
		}
		nimln(269, "parseutils.nim");
		(*b0) = res0;
		nimln(270, "parseutils.nim");
		T_vI9aZNKIcImom6dDyKXW1ZA_16 = subInt(i0, start0);
		result0 = (NI)(T_vI9aZNKIcImom6dDyKXW1ZA_16);
	}
	LA7: ;
	}BeforeRet: ;
	popFrame();
	return result0;
}

N_NIMCALL(NI, npuParseBiggestUInt)(NimStringDesc* s0, NU64* number0, NI start0) {
	NI result0;
	NU64 res0;
	nimfr("parseBiggestUInt", "parseutils.nim")
	result0 = (NI)0;
	res0 = (NU64)0;
	nimln(281, "parseutils.nim");
	result0 = rawparseuint_OzYQCLjNwotWpNl0Q1C9cmQ(s0, (&res0), start0);
	nimln(282, "parseutils.nim");
	(*number0) = res0;
	popFrame();
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void) {
	nimfr("parseutils", "parseutils.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void) {
}

