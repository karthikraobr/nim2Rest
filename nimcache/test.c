/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\MinGW\bin\gcc.exe -c  -w  -IC:\nim-0.16.0\lib -o c:\Projects\nim\HelloWorld\nimcache\test.o c:\Projects\nim\HelloWorld\nimcache\test.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#undef linux
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
typedef N_STDCALL_PTR(NCSTRING, TY_JuONCgfX09cuI9cXctZEHagQ) (void);
typedef N_STDCALL_PTR(NCSTRING, TY_zq6RdywoadYNVArmBGWD5A) (NCSTRING name0);
typedef N_NIMCALL_PTR(NCSTRING, TY_Kjizo4DRb4hVvUbJGvd4SQ) (void);
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path0);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path0);
N_NIMCALL(void*, nimGetProcAddr)(void* lib0, NCSTRING name0);
N_NIMCALL(void, main_D0eGMmnl0FAOEa9bImCvUJQ)(void);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
N_NIMCALL(void*, loadlib_EFK1MHQsQvQPg5NaJH389bA)(NimStringDesc* path0, NIM_BOOL globalsymbols0);
N_NIMCALL(void*, symaddr_fM7lTRTvv9a9axreJA2Bx7jA_2)(void* lib0, NCSTRING name0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
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
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_etcprivInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_etcprivDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_jsonDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, testDatInit000)(void);
static void* T_ipcYmBC9bj9a1BW35ABoB1Kw_2;
TY_JuONCgfX09cuI9cXctZEHagQ Dl_220001;
TY_zq6RdywoadYNVArmBGWD5A Dl_220003;
extern TFrame* frameptr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(T_ipcYmBC9bj9a1BW35ABoB1Kw_4, "libfoo.dll", 10);
STRING_LITERAL(T_ipcYmBC9bj9a1BW35ABoB1Kw_5, "libfoo.dll", 10);
STRING_LITERAL(T_ipcYmBC9bj9a1BW35ABoB1Kw_10, "test 1 (fixed)", 14);
STRING_LITERAL(T_ipcYmBC9bj9a1BW35ABoB1Kw_11, "-----", 5);
STRING_LITERAL(T_ipcYmBC9bj9a1BW35ABoB1Kw_12, "test 2 (dynamic)", 16);
STRING_LITERAL(T_ipcYmBC9bj9a1BW35ABoB1Kw_13, "libfoo.dll", 10);

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

N_NIMCALL(void, main_D0eGMmnl0FAOEa9bImCvUJQ)(void) {
	NCSTRING LOC1;
	NimStringDesc* LOC2;
	NCSTRING LOC3;
	NimStringDesc* LOC4;
	void* lib0;
	void* sayptr0;
	TY_Kjizo4DRb4hVvUbJGvd4SQ say0;
	NCSTRING LOC5;
	NimStringDesc* LOC6;
	nimfr("main", "test.nim")
	nimln(19, "test.nim");
	printf("%s\015\012", ((NimStringDesc*) &T_ipcYmBC9bj9a1BW35ABoB1Kw_10)? (((NimStringDesc*) &T_ipcYmBC9bj9a1BW35ABoB1Kw_10))->data:"nil");
	fflush(stdout);
	nimln(20, "test.nim");
	LOC1 = (NCSTRING)0;
	LOC1 = Dl_220001();
	LOC2 = (NimStringDesc*)0;
	LOC2 = cstrToNimstr(LOC1);
	printf("%s\015\012", LOC2? (LOC2)->data:"nil");
	fflush(stdout);
	nimln(21, "test.nim");
	LOC3 = (NCSTRING)0;
	LOC3 = Dl_220003("Foo");
	LOC4 = (NimStringDesc*)0;
	LOC4 = cstrToNimstr(LOC3);
	printf("%s\015\012", LOC4? (LOC4)->data:"nil");
	fflush(stdout);
	nimln(22, "test.nim");
	printf("%s\015\012", ((NimStringDesc*) &T_ipcYmBC9bj9a1BW35ABoB1Kw_11)? (((NimStringDesc*) &T_ipcYmBC9bj9a1BW35ABoB1Kw_11))->data:"nil");
	fflush(stdout);
	nimln(23, "test.nim");
	printf("%s\015\012", ((NimStringDesc*) &T_ipcYmBC9bj9a1BW35ABoB1Kw_12)? (((NimStringDesc*) &T_ipcYmBC9bj9a1BW35ABoB1Kw_12))->data:"nil");
	fflush(stdout);
	nimln(24, "test.nim");
	lib0 = loadlib_EFK1MHQsQvQPg5NaJH389bA(((NimStringDesc*) &T_ipcYmBC9bj9a1BW35ABoB1Kw_13), NIM_FALSE);
	nimln(25, "test.nim");
	sayptr0 = symaddr_fM7lTRTvv9a9axreJA2Bx7jA_2(lib0, "sayHelloWorld");
	nimln(28, "test.nim");
	say0 = ((TY_Kjizo4DRb4hVvUbJGvd4SQ) (sayptr0));
	nimln(29, "test.nim");
	LOC5 = (NCSTRING)0;
	LOC5 = say0();
	LOC6 = (NimStringDesc*)0;
	LOC6 = cstrToNimstr(LOC5);
	printf("%s\015\012", LOC6? (LOC6)->data:"nil");
	fflush(stdout);
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
	stdlib_macrosDatInit000();
	stdlib_etcprivDatInit000();
	stdlib_hashesDatInit000();
	stdlib_tablesDatInit000();
	stdlib_streamsDatInit000();
	stdlib_lexbaseDatInit000();
	stdlib_unicodeDatInit000();
	stdlib_jsonDatInit000();
	stdlib_winleanDatInit000();
	stdlib_timesDatInit000();
	stdlib_osDatInit000();
	testDatInit000();
	stdlib_parseutilsInit000();
	stdlib_mathInit000();
	stdlib_algorithmInit000();
	stdlib_strutilsInit000();
	stdlib_dynlibInit000();
	stdlib_macrosInit000();
	stdlib_etcprivInit000();
	stdlib_hashesInit000();
	stdlib_tablesInit000();
	stdlib_streamsInit000();
	stdlib_lexbaseInit000();
	stdlib_unicodeInit000();
	stdlib_jsonInit000();
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
	nimfr("test", "test.nim")
	nimln(32, "test.nim");
	main_D0eGMmnl0FAOEa9bImCvUJQ();
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, testDatInit000)(void) {
if (!((T_ipcYmBC9bj9a1BW35ABoB1Kw_2 = nimLoadLibrary((NimStringDesc*) &T_ipcYmBC9bj9a1BW35ABoB1Kw_4))
)) nimLoadLibraryError((NimStringDesc*) &T_ipcYmBC9bj9a1BW35ABoB1Kw_5);
	Dl_220001 = (TY_JuONCgfX09cuI9cXctZEHagQ) nimGetProcAddr(T_ipcYmBC9bj9a1BW35ABoB1Kw_2, "sayHelloWorld");
	Dl_220003 = (TY_zq6RdywoadYNVArmBGWD5A) nimGetProcAddr(T_ipcYmBC9bj9a1BW35ABoB1Kw_2, "greet");
}

