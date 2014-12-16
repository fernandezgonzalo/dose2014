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

OBJECTS = big_file_C6_c.obj 

OLDOBJECTS =  tu295.obj ch298.obj ch297.obj it260.obj pr259.obj us258.obj wo257.obj se256.obj \
	de255.obj mi277.obj in290.obj ch299.obj ch296.obj ex251.obj de254.obj ws283.obj \
	ra275.obj ht291.obj di264.obj fi274.obj ws289.obj ws282.obj mi288.obj st281.obj \
	ma263.obj ar280.obj na250.obj fi252.obj ar279.obj ht284.obj ws285.obj di261.obj \
	io268.obj me262.obj ws286.obj da278.obj uu294.obj ht287.obj tc273.obj ne272.obj \
	ad266.obj ne271.obj st270.obj ad267.obj ex265.obj so269.obj 

all::  Cobj6.lib

Cobj6.lib: $(OBJECTS) Makefile
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

