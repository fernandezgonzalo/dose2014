INCLUDE_PATH =  -I"C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\unstable\library\persistency\database\sqlite3\spec\include" -I"-DSQLITE_THREADSAFE=0"
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Ox -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE   -DEIF_IEEE_BEHAVIOR -I"C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Ox -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE   -I"C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:WINDOWS
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\studio\spec\win64\lib\msc\finalized.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\studio\config\win64\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 14.05 GPL\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = WBPMS.dll 
.SUFFIXES: .x .xpp .cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

.x.obj:
	$(X2C) $< $*.c
	$(CC) $(CFLAGS) -c $*.c
	$(RM) $*.c

.xpp.obj:
	$(X2C) $< $*.cpp
	$(CPP) $(CPPFLAGS) -c $*.cpp
	$(RM) $*.cpp

.x.c:
	$(X2C) $< $*.c

.xpp.cpp:
	$(X2C) $< $*.cpp

OBJECTS = big_file_C17_c.obj 

OLDOBJECTS =  sp842.obj ar804.obj ar844.obj ty833.obj ty829.obj ty832.obj ty831.obj ty839.obj \
	ty838.obj ty841.obj ty840.obj re800.obj ar814.obj ar845.obj li806.obj re815.obj \
	re846.obj to819.obj li823.obj se820.obj ch824.obj sq837.obj bi821.obj fi817.obj \
	fi848.obj co810.obj 

all::  Cobj17.lib

Cobj17.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

