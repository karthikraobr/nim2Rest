/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\MinGW\bin\gcc.exe -c  -w  -IC:\nim-0.16.0\lib -o c:\Projects\nim\HelloWorld\nimcache\nimFile.o c:\Projects\nim\HelloWorld\nimcache\nimFile.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#undef linux
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef N_NIMCALL_PTR(NCSTRING, TY_Kjizo4DRb4hVvUbJGvd4SQ) (void);
typedef N_NIMCALL_PTR(NCSTRING, TY_hALBovV7ZeOLQZyXZqNooQ) (NCSTRING name0);
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
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
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
N_NIMCALL(NCSTRING, loadlib_xBXOk9brr0PfIyCs11Mh89cA)(NimStringDesc* libraryname0, NimStringDesc* functionname0, NimStringDesc* args0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_fmeFeLBvgmAHG9bC8ETS9bYQsystem)(void* a0, void* b0, NI size0);
N_NIMCALL(void*, loadlib_EFK1MHQsQvQPg5NaJH389bA)(NimStringDesc* path0, NIM_BOOL globalsymbols0);
N_NIMCALL(void*, symaddr_fM7lTRTvv9a9axreJA2Bx7jA_2)(void* lib0, NCSTRING name0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
static N_NIMCALL(void, T_rE66HNSlIbRBxIg4CWWYqA_10)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerproc0);
N_NIMCALL(NimStringDesc*, nosparamStr)(NI i0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0);
static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NOINLINE(void, addzct_fCDI7oO1NNVXXURtxSzsRw)(Cellseq_Axo1XVm9aaQueTOldv8le5w* s0, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
static N_INLINE(void, initStackBottomWith)(void* locals0);
N_NOINLINE(void, setStackBottom)(void* thestackbottom0);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, nimFileDatInit000)(void);
extern TFrame* frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;
NimStringDesc* programname_jf1WtBS7qIll9anKYatC59cA;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg;
extern Gcheap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(T_rE66HNSlIbRBxIg4CWWYqA_2, "libfoo", 6);
STRING_LITERAL(T_rE66HNSlIbRBxIg4CWWYqA_3, "libfoo1", 7);
STRING_LITERAL(T_rE66HNSlIbRBxIg4CWWYqA_4, "libfoo.dll", 10);
STRING_LITERAL(T_rE66HNSlIbRBxIg4CWWYqA_5, "sayHelloWorld", 13);
STRING_LITERAL(T_rE66HNSlIbRBxIg4CWWYqA_6, "greet", 5);
STRING_LITERAL(T_rE66HNSlIbRBxIg4CWWYqA_7, "libfoo1.dll", 11);
STRING_LITERAL(T_rE66HNSlIbRBxIg4CWWYqA_8, "sayHelloWorld1", 14);
STRING_LITERAL(T_rE66HNSlIbRBxIg4CWWYqA_9, "greet1", 6);

static N_INLINE(NIM_BOOL, equalmem_fmeFeLBvgmAHG9bC8ETS9bYQsystem)(void* a0, void* b0, NI size0) {
	NIM_BOOL result0;
	int LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (int)0;
	LOC1 = memcmp(a0, b0, ((size_t) (size0)));
	result0 = (LOC1 == ((NI32) 0));
	return result0;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b0 == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = (NIM_BOOL)0;
	LOC11 = ((*a0).Sup.len == (*b0).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC11 = equalmem_fmeFeLBvgmAHG9bC8ETS9bYQsystem(((void*) ((*a0).data)), ((void*) ((*b0).data)), ((NI) ((*a0).Sup.len)));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
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

N_NIMCALL(NCSTRING, loadlib_xBXOk9brr0PfIyCs11Mh89cA)(NimStringDesc* libraryname0, NimStringDesc* functionname0, NimStringDesc* args0) {
	NCSTRING result0;
	nimfr("loadLib", "nimFile.nim")
	result0 = (NCSTRING)0;
	nimln(4, "nimFile.nim");
	if (eqStrings(libraryname0, ((NimStringDesc*) &T_rE66HNSlIbRBxIg4CWWYqA_2))) goto LA1;
	if (eqStrings(libraryname0, ((NimStringDesc*) &T_rE66HNSlIbRBxIg4CWWYqA_3))) goto LA2;
	goto LA3;
	LA1: ;
	{
		void* liblibfoo0;
		nimln(6, "nimFile.nim");
		liblibfoo0 = loadlib_EFK1MHQsQvQPg5NaJH389bA(((NimStringDesc*) &T_rE66HNSlIbRBxIg4CWWYqA_4), NIM_FALSE);
		nimln(7, "nimFile.nim");
		if (eqStrings(functionname0, ((NimStringDesc*) &T_rE66HNSlIbRBxIg4CWWYqA_5))) goto LA6;
		if (eqStrings(functionname0, ((NimStringDesc*) &T_rE66HNSlIbRBxIg4CWWYqA_6))) goto LA7;
		goto LA8;
		LA6: ;
		{
			void* ptrsayhelloworld0;
			TY_Kjizo4DRb4hVvUbJGvd4SQ execsayhelloworld0;
			NI argscount0;
			nimln(11, "nimFile.nim");
			ptrsayhelloworld0 = symaddr_fM7lTRTvv9a9axreJA2Bx7jA_2(liblibfoo0, "sayHelloWorld");
			nimln(12, "nimFile.nim");
			execsayhelloworld0 = ((TY_Kjizo4DRb4hVvUbJGvd4SQ) (ptrsayhelloworld0));
			nimln(13, "nimFile.nim");
			argscount0 = ((NI) 0);
			nimln(14, "nimFile.nim");
			result0 = execsayhelloworld0();
		}
		goto LA9;
		LA7: ;
		{
			void* ptrgreet0;
			TY_hALBovV7ZeOLQZyXZqNooQ execgreet0;
			NI argscount0;
			nimln(18, "nimFile.nim");
			ptrgreet0 = symaddr_fM7lTRTvv9a9axreJA2Bx7jA_2(liblibfoo0, "greet");
			nimln(19, "nimFile.nim");
			execgreet0 = ((TY_hALBovV7ZeOLQZyXZqNooQ) (ptrgreet0));
			nimln(20, "nimFile.nim");
			argscount0 = ((NI) 1);
			nimln(21, "nimFile.nim");
			result0 = execgreet0(args0->data);
		}
		goto LA9;
		LA8: ;
		{
			nimln(22, "nimFile.nim");
			result0 = NIM_NIL;
		}
		LA9: ;
	}
	goto LA4;
	LA2: ;
	{
		void* liblibfoo10;
		nimln(25, "nimFile.nim");
		liblibfoo10 = loadlib_EFK1MHQsQvQPg5NaJH389bA(((NimStringDesc*) &T_rE66HNSlIbRBxIg4CWWYqA_7), NIM_FALSE);
		nimln(26, "nimFile.nim");
		if (eqStrings(functionname0, ((NimStringDesc*) &T_rE66HNSlIbRBxIg4CWWYqA_8))) goto LA14;
		if (eqStrings(functionname0, ((NimStringDesc*) &T_rE66HNSlIbRBxIg4CWWYqA_9))) goto LA15;
		goto LA16;
		LA14: ;
		{
			void* ptrsayhelloworld10;
			TY_Kjizo4DRb4hVvUbJGvd4SQ execsayhelloworld10;
			NI argscount0;
			nimln(30, "nimFile.nim");
			ptrsayhelloworld10 = symaddr_fM7lTRTvv9a9axreJA2Bx7jA_2(liblibfoo10, "sayHelloWorld1");
			nimln(31, "nimFile.nim");
			execsayhelloworld10 = ((TY_Kjizo4DRb4hVvUbJGvd4SQ) (ptrsayhelloworld10));
			nimln(32, "nimFile.nim");
			argscount0 = ((NI) 0);
			nimln(33, "nimFile.nim");
			result0 = execsayhelloworld10();
		}
		goto LA17;
		LA15: ;
		{
			void* ptrgreet10;
			TY_hALBovV7ZeOLQZyXZqNooQ execgreet10;
			NI argscount0;
			nimln(37, "nimFile.nim");
			ptrgreet10 = symaddr_fM7lTRTvv9a9axreJA2Bx7jA_2(liblibfoo10, "greet1");
			nimln(38, "nimFile.nim");
			execgreet10 = ((TY_hALBovV7ZeOLQZyXZqNooQ) (ptrgreet10));
			nimln(39, "nimFile.nim");
			argscount0 = ((NI) 1);
			nimln(40, "nimFile.nim");
			result0 = execgreet10(args0->data);
		}
		goto LA17;
		LA16: ;
		{
			nimln(41, "nimFile.nim");
			result0 = NIM_NIL;
		}
		LA17: ;
	}
	goto LA4;
	LA3: ;
	{
		nimln(43, "nimFile.nim");
		result0 = NIM_NIL;
	}
	LA4: ;
	popFrame();
	return result0;
}
static N_NIMCALL(void, T_rE66HNSlIbRBxIg4CWWYqA_10)(void) {
	nimGCvisit((void*)programname_jf1WtBS7qIll9anKYatC59cA, 0);
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

static N_INLINE(void, initStackBottomWith)(void* locals0) {
	setStackBottom(locals0);
}
void PreMainInner() {
	systemInit000();
	stdlib_parseutilsDatInit000();
	stdlib_mathDatInit000();
	stdlib_algorithmDatInit000();
	stdlib_strutilsDatInit000();
	stdlib_dynlibDatInit000();
	stdlib_winleanDatInit000();
	stdlib_timesDatInit000();
	stdlib_osDatInit000();
	nimFileDatInit000();
	stdlib_parseutilsInit000();
	stdlib_mathInit000();
	stdlib_algorithmInit000();
	stdlib_strutilsInit000();
	stdlib_dynlibInit000();
	stdlib_winleanInit000();
	stdlib_timesInit000();
	stdlib_osInit000();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void) {
	NCSTRING LOC1;
	NimStringDesc* LOC2;
	nimfr("nimFile", "nimFile.nim")
nimRegisterGlobalMarker(T_rE66HNSlIbRBxIg4CWWYqA_10);
	nimln(46, "nimFile.nim");
	asgnRefNoCycle((void**) (&programname_jf1WtBS7qIll9anKYatC59cA), nosparamStr(((NI) 1)));
	nimln(47, "nimFile.nim");
	LOC1 = (NCSTRING)0;
	LOC1 = loadlib_xBXOk9brr0PfIyCs11Mh89cA(((NimStringDesc*) &T_rE66HNSlIbRBxIg4CWWYqA_2), ((NimStringDesc*) &T_rE66HNSlIbRBxIg4CWWYqA_6), programname_jf1WtBS7qIll9anKYatC59cA);
	LOC2 = (NimStringDesc*)0;
	LOC2 = cstrToNimstr(LOC1);
	printf("%s\015\012", LOC2? (LOC2)->data:"nil");
	fflush(stdout);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, nimFileDatInit000)(void) {
}

