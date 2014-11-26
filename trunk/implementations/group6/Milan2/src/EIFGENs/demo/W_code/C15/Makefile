INCLUDE_PATH =  -I"$(ISE_LIBRARY)/unstable/library/persistency/database/sqlite3/spec/include" -I"-DSQLITE_THREADSAFE=0"
SHELL = /bin/sh
CC = cc
CPP = c++
CFLAGS = -O0 -pipe -fno-common -fPIC  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"/Applications/MacPorts/Eiffel_14.05/EiffelStudio.app/Contents/MacOS/../Resources/../../../studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fno-common -fPIC  -DWORKBENCH -I"/Applications/MacPorts/Eiffel_14.05/EiffelStudio.app/Contents/MacOS/../Resources/../../../studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   
LDSHAREDFLAGS =   -dynamiclib -flat_namespace -undefined suppress -o
EIFLIB = "/Applications/MacPorts/Eiffel_14.05/EiffelStudio.app/Contents/MacOS/../Resources/../../../studio/spec/macosx-x86-64/lib/libwkbench.a"
EIFTEMPLATES = /Applications/MacPorts/Eiffel_14.05/EiffelStudio.app/Contents/MacOS/../Resources/../../../studio/config/macosx-x86-64/templates
LIBS = -lm
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = ar ts
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/Applications/MacPorts/Eiffel_14.05/EiffelStudio.app/Contents/MacOS/../Resources/../../../studio/spec/macosx-x86-64/bin/x2c"
SHAREDLINK = cc
SHAREDLIBS = -lm
SHARED_SUFFIX = .dylib
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = demo.dylib 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C15_c.o 

OLDOBJECTS =  sp487.o sp487d.o ar494.o ar494d.o fu484.o fu484d.o pr464.o pr464d.o \
	ty485.o ty485d.o ty486.o ty486d.o ty493.o ty493d.o na488.o na488d.o \
	re479.o re479d.o re489.o re489d.o li472.o li472d.o in470.o in470d.o \
	it482.o it482d.o it492.o it492d.o it481.o it481d.o it491.o it491d.o \
	ha463.o ha463d.o ws469.o ws469d.o in480.o in480d.o in490.o in490d.o \
	cu473.o cu473d.o tr478.o tr478d.o ta467.o ta467d.o ta471.o ta471d.o \
	st483.o st483d.o ha465.o ha465d.o ta468.o ta468d.o ta466.o ta466d.o \
	co477.o co477d.o ac475.o ac475d.o co474.o co474d.o ba476.o ba476d.o \
	in462.o in462d.o 

all: Cobj15.o

Cobj15.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj15.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

