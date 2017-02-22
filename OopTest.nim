import strutils

type
  BaseType = ref object of RootObj
  
  StringType = ref object of BaseType
    value: string
  IntType = ref object of BaseType
    value: int
  BoolType = ref object of BaseType
    value: bool
  FloatType = ref object of  BaseType
    value: float

method toString(bt: BaseType): string {.base.} = ""
method toString(st: StringType): string = st.value
method toString(it: IntType): string = $it.value
method toString(it: BoolType): string = $it.value
method toString(it: FloatType): string = $it.value


proc getArg(typeName:string, strValue:string):BaseType=
 case typeName:
  of "string":
    result = StringType(value: strValue)
  of "int":
    result = IntType(value: parseInt(strValue))
  of "bool":
    result = BoolType(value:parseBool(strValue))
  of "float":
    result = FloatType(value:parseFloat(strValue))

proc loadLib[T](libraryName:string, functionName:string,args:seq[string]):T=
 case libraryName:
  of "libfoo":
    var liblibfoo = loadLib("libfoo.dll")
    case functionName:
        of "sayHelloWorld":
        # Library name =libfoo	Function name =sayHelloWorld
                type sayHelloWorld = (proc ():cstring{.nimcall.})
                var ptrsayHelloWorld = symAddr(liblibfoo,"sayHelloWorld")
                var execsayHelloWorld = cast[sayHelloWorld](ptrsayHelloWorld)
                result = execsayHelloWorld()
        of "greet":
        # Library name =libfoo	Function name =greet
                type greet = (proc (name: cstring):cstring{.nimcall.})
                var ptrgreet = symAddr(liblibfoo,"greet")
                var execgreet = cast[greet](ptrgreet)
                var args_1 = cast[string](args[0])
                result = execgreet(args_1)
        else:result=nil

  of "libfoo1":
    var liblibfoo1 = loadLib("libfoo1.dll")
    case functionName:
        of "sayHelloWorld1":
        # Library name =libfoo1	Function name =sayHelloWorld1
                type sayHelloWorld1 = (proc ():cstring{.nimcall.})
                var ptrsayHelloWorld1 = symAddr(liblibfoo1,"sayHelloWorld1")
                var execsayHelloWorld1 = cast[sayHelloWorld1](ptrsayHelloWorld1)
                result = execsayHelloWorld1()
        of "greet1":
        # Library name =libfoo1	Function name =greet1
                type greet1 = (proc (name: cstring):cstring{.nimcall.})
                var ptrgreet1 = symAddr(liblibfoo1,"greet1")
                var execgreet1 = cast[greet1](ptrgreet1)
                var args_1 = cast[string](args[0])
                result = execgreet1(args_1)
        else:result=nil

  else:result=nil


let bt = getArg("int", "777")
echo "ToString: ", toString(bt)

if bt of StringType:
  echo("Casting: ", StringType(bt).value)
elif bt of IntType:
  echo("Casting: ", IntType(bt).value)