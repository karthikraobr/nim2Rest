/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\MinGW\bin\gcc.exe -c  -w  -IC:\nim-0.16.0\lib -o c:\Projects\nim\HelloWorld\nimcache\stdlib_dynlib.o c:\Projects\nim\HelloWorld\nimcache\stdlib_dynlib.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <windows.h>
#undef linux
typedef struct Libraryerror_F9bh3YCIGu9a7lVBdm5Z1UVw Libraryerror_F9bh3YCIGu9a7lVBdm5Z1UVw;
typedef struct Oserror_3XwRQvmzCEOC4QnT706q1g Oserror_3XwRQvmzCEOC4QnT706q1g;
typedef struct Systemerror_Fjf9b9b2IlzRO2tspHxG3tgg Systemerror_Fjf9b9b2IlzRO2tspHxG3tgg;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef struct TY_sM4lkSb7zS6F7OVMvW9cffQ TY_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct Basechunk_Sdq7WpT6qAH858F5ZEdG3w Basechunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct Freecell_u6M5LHprqzkn9axr04yg9bGQ Freecell_u6M5LHprqzkn9axr04yg9bGQ;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Systemerror_Fjf9b9b2IlzRO2tspHxG3tgg  {
  Exception Sup;
};
struct  Oserror_3XwRQvmzCEOC4QnT706q1g  {
  Systemerror_Fjf9b9b2IlzRO2tspHxG3tgg Sup;
NI32 errorcode;
};
struct  Libraryerror_F9bh3YCIGu9a7lVBdm5Z1UVw  {
  Oserror_3XwRQvmzCEOC4QnT706q1g Sup;
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
struct TY_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NOINLINE(void, raiseinvalidlibrary_vniG1MEk2sXRKqmAw0lt4g)(NCSTRING name0) __attribute__((noreturn));
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NOINLINE(void, addzct_fCDI7oO1NNVXXURtxSzsRw)(Cellseq_Axo1XVm9aaQueTOldv8le5w* s0, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
N_NIMCALL(void*, checkedsymaddr_fM7lTRTvv9a9axreJA2Bx7jA)(void* lib0, NCSTRING name0);
N_NIMCALL(void, libcandidates_z61W6kN39aBKDgNtbcWn9cSg)(NimStringDesc* s0, TY_sM4lkSb7zS6F7OVMvW9cffQ** dest0);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s0, NIM_CHAR sub0, NI start0);
static N_INLINE(NI, addInt)(NI a0, NI b0);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i0, NI a0, NI b0);
N_NOINLINE(void, raiseRangeError)(NI64 val0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_WPWyPKk58Cr5a6XFFviMjg, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
static N_INLINE(NI, subInt)(NI a0, NI b0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
N_NIMCALL(TY_sM4lkSb7zS6F7OVMvW9cffQ*, newseq_9cL6dIz2UWtIh3FeS5x4hxA)(NI len0);
N_NIMCALL(void*, loadlibpattern_WEB1hEy1GGlzZ6WVcUBFGA)(NimStringDesc* pattern0, NIM_BOOL globalsymbols0);
N_NIMCALL(void, failedassertimpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg0);
N_NIMCALL(void*, loadlib_EFK1MHQsQvQPg5NaJH389bA)(NimStringDesc* path0, NIM_BOOL globalsymbols0);
N_NIMCALL(void*, loadlib_Z1cxp9aB153T5qRduJpPCFA)(void);
N_NIMCALL(void, unloadlib_Uhnv9b7W8wpT8dy9aV4QNvtg)(void* lib0);
N_NIMCALL(void*, symaddr_fM7lTRTvv9a9axreJA2Bx7jA_2)(void* lib0, NCSTRING name0);
extern TNimType NTI_TLVXkEbYONqsuh3EtIf38A;
extern TNimType NTI_F9bh3YCIGu9a7lVBdm5Z1UVw;
extern TFrame* frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern Gcheap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(T_Vbi6rBBOqdMySprhH3iUcg_2, "could not find symbol: ", 23);
STRING_LITERAL(T_Vbi6rBBOqdMySprhH3iUcg_13, "len(a) == L seq modified while iterating over it", 48);

static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
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

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(280, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0;
		nimln(347, "system.nim");
		nimln(280, "gc.nim");
		if (!!((src0 == NIM_NIL))) goto LA3;
		nimln(281, "gc.nim");
		c0 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src0);
		nimln(282, "gc.nim");
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(283, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0;
		nimln(347, "system.nim");
		nimln(283, "gc.nim");
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		nimln(284, "gc.nim");
		c0 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest0));
		nimln(285, "gc.nim");
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			nimln(286, "gc.nim");
			rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system(c0);
		}
		LA11: ;
	}
	LA7: ;
	nimln(287, "gc.nim");
	(*dest0) = src0;
	popFrame();
}

N_NOINLINE(void, raiseinvalidlibrary_vniG1MEk2sXRKqmAw0lt4g)(NCSTRING name0) {
	Libraryerror_F9bh3YCIGu9a7lVBdm5Z1UVw* e0;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	nimfr("raiseInvalidLibrary", "dynlib.nim")
	e0 = (Libraryerror_F9bh3YCIGu9a7lVBdm5Z1UVw*)0;
	nimln(35, "dynlib.nim");
	e0 = (Libraryerror_F9bh3YCIGu9a7lVBdm5Z1UVw*) newObj((&NTI_TLVXkEbYONqsuh3EtIf38A), sizeof(Libraryerror_F9bh3YCIGu9a7lVBdm5Z1UVw));
	(*e0).Sup.Sup.Sup.Sup.m_type = (&NTI_F9bh3YCIGu9a7lVBdm5Z1UVw);
	nimln(36, "dynlib.nim");
	LOC1 = (NimStringDesc*)0;
	LOC2 = (NimStringDesc*)0;
	LOC2 = cstrToNimstr(name0);
	LOC1 = rawNewString(LOC2->Sup.len + 23);
appendString(LOC1, ((NimStringDesc*) &T_Vbi6rBBOqdMySprhH3iUcg_2));
appendString(LOC1, LOC2);
	asgnRefNoCycle((void**) (&(*e0).Sup.Sup.Sup.message), LOC1);
	nimln(37, "dynlib.nim");
	raiseException((Exception*)e0, "LibraryError");
	popFrame();
}

N_NIMCALL(void*, checkedsymaddr_fM7lTRTvv9a9axreJA2Bx7jA)(void* lib0, NCSTRING name0) {
	void* result0;
	nimfr("checkedSymAddr", "dynlib.nim")
	result0 = (void*)0;
	nimln(46, "dynlib.nim");
	result0 = symaddr_fM7lTRTvv9a9axreJA2Bx7jA_2(lib0, name0);
	nimln(47, "dynlib.nim");
	{
		if (!(result0 == NIM_NIL)) goto LA3;
		raiseinvalidlibrary_vniG1MEk2sXRKqmAw0lt4g(name0);
	}
	LA3: ;
	popFrame();
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

N_NIMCALL(void, libcandidates_z61W6kN39aBKDgNtbcWn9cSg)(NimStringDesc* s0, TY_sM4lkSb7zS6F7OVMvW9cffQ** dest0) {
	NI le0;
	NI ri0;
	NI T_Vbi6rBBOqdMySprhH3iUcg_3;
	nimfr("libCandidates", "dynlib.nim")
	nimln(51, "dynlib.nim");
	le0 = nsuFindChar(s0, 40, ((NI) 0));
	nimln(52, "dynlib.nim");
	T_Vbi6rBBOqdMySprhH3iUcg_3 = addInt(le0, ((NI) 1));
	ri0 = nsuFindChar(s0, 41, ((NI)chckRange((NI)(T_Vbi6rBBOqdMySprhH3iUcg_3), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln(53, "dynlib.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* prefix0;
		NI T_Vbi6rBBOqdMySprhH3iUcg_4;
		NimStringDesc* suffix0;
		NI T_Vbi6rBBOqdMySprhH3iUcg_5;
		LOC3 = (NIM_BOOL)0;
		LOC3 = (((NI) 0) <= le0);
		if (!(LOC3)) goto LA4;
		LOC3 = (le0 < ri0);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(54, "dynlib.nim");
		T_Vbi6rBBOqdMySprhH3iUcg_4 = subInt(le0, ((NI) 1));
		prefix0 = copyStrLast(s0, ((NI) 0), (NI)(T_Vbi6rBBOqdMySprhH3iUcg_4));
		nimln(55, "dynlib.nim");
		T_Vbi6rBBOqdMySprhH3iUcg_5 = addInt(ri0, ((NI) 1));
		suffix0 = copyStr(s0, (NI)(T_Vbi6rBBOqdMySprhH3iUcg_5));
		{
			NimStringDesc* middle_mQnab18JFb5gceJouyn5bQ;
			NimStringDesc* HEX3Atmp_Q53amcj1be9anZePon9ahpNg;
			NI T_Vbi6rBBOqdMySprhH3iUcg_6;
			NI T_Vbi6rBBOqdMySprhH3iUcg_7;
			NI last_9c0GMfC5FR8YGOOLBXaONOw;
			NI splits_gdklbLp8DMwWunLEsKElYg;
			middle_mQnab18JFb5gceJouyn5bQ = (NimStringDesc*)0;
			HEX3Atmp_Q53amcj1be9anZePon9ahpNg = (NimStringDesc*)0;
			nimln(56, "dynlib.nim");
			T_Vbi6rBBOqdMySprhH3iUcg_6 = addInt(le0, ((NI) 1));
			T_Vbi6rBBOqdMySprhH3iUcg_7 = subInt(ri0, ((NI) 1));
			HEX3Atmp_Q53amcj1be9anZePon9ahpNg = copyStrLast(s0, (NI)(T_Vbi6rBBOqdMySprhH3iUcg_6), (NI)(T_Vbi6rBBOqdMySprhH3iUcg_7));
			nimln(504, "strutils.nim");
			last_9c0GMfC5FR8YGOOLBXaONOw = ((NI) 0);
			nimln(505, "strutils.nim");
			splits_gdklbLp8DMwWunLEsKElYg = ((NI) -1);
			nimln(613, "strutils.nim");
			{
				nimln(507, "strutils.nim");
				nimln(589, "strutils.nim");
				if (!(((NI) 0) < (HEX3Atmp_Q53amcj1be9anZePon9ahpNg ? HEX3Atmp_Q53amcj1be9anZePon9ahpNg->Sup.len : 0))) goto LA10;
				{
					nimln(508, "strutils.nim");
					while (1) {
						NI first_zyLxzTLKf9cZsnxydGyYqzA;
						NI T_Vbi6rBBOqdMySprhH3iUcg_9;
						NimStringDesc* LOC22;
						NI T_Vbi6rBBOqdMySprhH3iUcg_10;
						NI T_Vbi6rBBOqdMySprhH3iUcg_11;
						nimln(504, "strutils.nim");
						nimln(589, "strutils.nim");
						if (!(last_9c0GMfC5FR8YGOOLBXaONOw <= (HEX3Atmp_Q53amcj1be9anZePon9ahpNg ? HEX3Atmp_Q53amcj1be9anZePon9ahpNg->Sup.len : 0))) goto LA13;
						nimln(509, "strutils.nim");
						first_zyLxzTLKf9cZsnxydGyYqzA = last_9c0GMfC5FR8YGOOLBXaONOw;
						{
							nimln(510, "strutils.nim");
							while (1) {
								NIM_BOOL LOC16;
								NI T_Vbi6rBBOqdMySprhH3iUcg_8;
								LOC16 = (NIM_BOOL)0;
								nimln(504, "strutils.nim");
								nimln(589, "strutils.nim");
								LOC16 = (last_9c0GMfC5FR8YGOOLBXaONOw < (HEX3Atmp_Q53amcj1be9anZePon9ahpNg ? HEX3Atmp_Q53amcj1be9anZePon9ahpNg->Sup.len : 0));
								if (!(LOC16)) goto LA17;
								nimln(510, "strutils.nim");
								nimln(497, "strutils.nim");
								if ((NU)(last_9c0GMfC5FR8YGOOLBXaONOw) > (NU)(HEX3Atmp_Q53amcj1be9anZePon9ahpNg->Sup.len)) raiseIndexError();
								LOC16 = !(((NU8)(HEX3Atmp_Q53amcj1be9anZePon9ahpNg->data[last_9c0GMfC5FR8YGOOLBXaONOw]) == (NU8)(124)));
								LA17: ;
								if (!LOC16) goto LA15;
								nimln(504, "strutils.nim");
								T_Vbi6rBBOqdMySprhH3iUcg_8 = addInt(last_9c0GMfC5FR8YGOOLBXaONOw, ((NI) 1));
								last_9c0GMfC5FR8YGOOLBXaONOw = (NI)(T_Vbi6rBBOqdMySprhH3iUcg_8);
							} LA15: ;
						}
						nimln(512, "strutils.nim");
						{
							nimln(505, "strutils.nim");
							if (!(splits_gdklbLp8DMwWunLEsKElYg == ((NI) 0))) goto LA20;
							nimln(512, "strutils.nim");
							nimln(589, "strutils.nim");
							last_9c0GMfC5FR8YGOOLBXaONOw = (HEX3Atmp_Q53amcj1be9anZePon9ahpNg ? HEX3Atmp_Q53amcj1be9anZePon9ahpNg->Sup.len : 0);
						}
						LA20: ;
						nimln(513, "strutils.nim");
						nimln(589, "strutils.nim");
						nimln(504, "strutils.nim");
						T_Vbi6rBBOqdMySprhH3iUcg_9 = subInt(last_9c0GMfC5FR8YGOOLBXaONOw, ((NI) 1));
						middle_mQnab18JFb5gceJouyn5bQ = copyStrLast(HEX3Atmp_Q53amcj1be9anZePon9ahpNg, first_zyLxzTLKf9cZsnxydGyYqzA, (NI)(T_Vbi6rBBOqdMySprhH3iUcg_9));
						nimln(57, "dynlib.nim");
						LOC22 = (NimStringDesc*)0;
						LOC22 = rawNewString(prefix0->Sup.len + middle_mQnab18JFb5gceJouyn5bQ->Sup.len + suffix0->Sup.len + 0);
appendString(LOC22, prefix0);
appendString(LOC22, middle_mQnab18JFb5gceJouyn5bQ);
appendString(LOC22, suffix0);
						libcandidates_z61W6kN39aBKDgNtbcWn9cSg(LOC22, dest0);
						nimln(514, "strutils.nim");
						{
							nimln(505, "strutils.nim");
							if (!(splits_gdklbLp8DMwWunLEsKElYg == ((NI) 0))) goto LA25;
							nimln(514, "strutils.nim");
							goto LA12;
						}
						LA25: ;
						nimln(505, "strutils.nim");
						T_Vbi6rBBOqdMySprhH3iUcg_10 = subInt(splits_gdklbLp8DMwWunLEsKElYg, ((NI) 1));
						splits_gdklbLp8DMwWunLEsKElYg = (NI)(T_Vbi6rBBOqdMySprhH3iUcg_10);
						nimln(504, "strutils.nim");
						T_Vbi6rBBOqdMySprhH3iUcg_11 = addInt(last_9c0GMfC5FR8YGOOLBXaONOw, ((NI) 1));
						last_9c0GMfC5FR8YGOOLBXaONOw = (NI)(T_Vbi6rBBOqdMySprhH3iUcg_11);
					} LA13: ;
				} LA12: ;
			}
			LA10: ;
		}
	}
	goto LA1;
	LA5: ;
	{
		NimStringDesc* LOC28;
		nimln(59, "dynlib.nim");
		(*dest0) = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&((*dest0))->Sup, sizeof(NimStringDesc*));
		LOC28 = (NimStringDesc*)0;
		LOC28 = (*dest0)->data[(*dest0)->Sup.len]; (*dest0)->data[(*dest0)->Sup.len] = copyStringRC1(s0);
		if (LOC28) nimGCunrefNoCycle(LOC28);
		++(*dest0)->Sup.len;
	}
	LA1: ;
	popFrame();
}

N_NIMCALL(void*, loadlibpattern_WEB1hEy1GGlzZ6WVcUBFGA)(NimStringDesc* pattern0, NIM_BOOL globalsymbols0) {
	void* result0;
	TY_sM4lkSb7zS6F7OVMvW9cffQ* candidates0;
	nimfr("loadLibPattern", "dynlib.nim")
	result0 = (void*)0;
	nimln(65, "dynlib.nim");
	candidates0 = newseq_9cL6dIz2UWtIh3FeS5x4hxA(((NI) 0));
	nimln(66, "dynlib.nim");
	libcandidates_z61W6kN39aBKDgNtbcWn9cSg(pattern0, (&candidates0));
	{
		NimStringDesc* c_pD4rgIX2tIFWdpHVhi0iaA;
		NI i_QwqAfpccX2rv8Suz9bttAbQ;
		NI L_rP50T6t7wSFJDJiCFD9ctww;
		c_pD4rgIX2tIFWdpHVhi0iaA = (NimStringDesc*)0;
		nimln(3497, "system.nim");
		i_QwqAfpccX2rv8Suz9bttAbQ = ((NI) 0);
		nimln(3498, "system.nim");
		nimln(67, "dynlib.nim");
		L_rP50T6t7wSFJDJiCFD9ctww = (candidates0 ? candidates0->Sup.len : 0);
		{
			nimln(3499, "system.nim");
			while (1) {
				NI T_Vbi6rBBOqdMySprhH3iUcg_12;
				nimln(3497, "system.nim");
				if (!(i_QwqAfpccX2rv8Suz9bttAbQ < L_rP50T6t7wSFJDJiCFD9ctww)) goto LA3;
				nimln(3500, "system.nim");
				if ((NU)(i_QwqAfpccX2rv8Suz9bttAbQ) >= (NU)(candidates0->Sup.len)) raiseIndexError();
				c_pD4rgIX2tIFWdpHVhi0iaA = candidates0->data[i_QwqAfpccX2rv8Suz9bttAbQ];
				nimln(68, "dynlib.nim");
				result0 = loadlib_EFK1MHQsQvQPg5NaJH389bA(c_pD4rgIX2tIFWdpHVhi0iaA, globalsymbols0);
				nimln(69, "dynlib.nim");
				{
					if (!!((result0 == 0))) goto LA6;
					goto LA1;
				}
				LA6: ;
				nimln(3497, "system.nim");
				T_Vbi6rBBOqdMySprhH3iUcg_12 = addInt(i_QwqAfpccX2rv8Suz9bttAbQ, ((NI) 1));
				i_QwqAfpccX2rv8Suz9bttAbQ = (NI)(T_Vbi6rBBOqdMySprhH3iUcg_12);
				nimln(3502, "system.nim");
				{
					nimln(67, "dynlib.nim");
					if (!!(((candidates0 ? candidates0->Sup.len : 0) == L_rP50T6t7wSFJDJiCFD9ctww))) goto LA10;
					nimln(3502, "system.nim");
					failedassertimpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &T_Vbi6rBBOqdMySprhH3iUcg_13));
				}
				LA10: ;
			} LA3: ;
		}
	} LA1: ;
	popFrame();
	return result0;
}

N_NIMCALL(void*, loadlib_EFK1MHQsQvQPg5NaJH389bA)(NimStringDesc* path0, NIM_BOOL globalsymbols0) {
	void* result0;
	HINSTANCE LOC1;
	nimfr("loadLib", "dynlib.nim")
	result0 = (void*)0;
	nimln(120, "dynlib.nim");
	LOC1 = (HINSTANCE)0;
	LOC1 = LoadLibraryA(path0->data);
	result0 = ((void*) (LOC1));
	popFrame();
	return result0;
}

N_NIMCALL(void*, loadlib_Z1cxp9aB153T5qRduJpPCFA)(void) {
	void* result0;
	HINSTANCE LOC1;
	nimfr("loadLib", "dynlib.nim")
	result0 = (void*)0;
	nimln(122, "dynlib.nim");
	LOC1 = (HINSTANCE)0;
	LOC1 = LoadLibraryA(NIM_NIL);
	result0 = ((void*) (LOC1));
	popFrame();
	return result0;
}

N_NIMCALL(void, unloadlib_Uhnv9b7W8wpT8dy9aV4QNvtg)(void* lib0) {
	nimfr("unloadLib", "dynlib.nim")
	nimln(123, "dynlib.nim");
	FreeLibrary(((HINSTANCE) (lib0)));
	popFrame();
}

N_NIMCALL(void*, symaddr_fM7lTRTvv9a9axreJA2Bx7jA_2)(void* lib0, NCSTRING name0) {
	void* result0;
	nimfr("symAddr", "dynlib.nim")
	result0 = (void*)0;
	nimln(126, "dynlib.nim");
	result0 = GetProcAddress(((HINSTANCE) (lib0)), name0);
	popFrame();
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibInit000)(void) {
	nimfr("dynlib", "dynlib.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibDatInit000)(void) {
}

