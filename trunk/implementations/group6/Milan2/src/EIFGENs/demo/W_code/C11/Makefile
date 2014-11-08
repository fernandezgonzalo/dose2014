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

OBJECTS = big_file_C11_c.o 

OLDOBJECTS =  na360.o na360d.o na361.o na361d.o na357.o na357d.o na358.o na358d.o \
	na354.o na354d.o na355.o na355d.o na351.o na351d.o na352.o na352d.o \
	in348.o in348d.o in349.o in349d.o in345.o in345d.o in346.o in346d.o \
	in342.o in342d.o in343.o in343d.o re362.o re362d.o na359.o na359d.o \
	na356.o na356d.o na353.o na353d.o na350.o na350d.o in347.o in347d.o \
	in344.o in344d.o in341.o in341d.o js339.o js339d.o nu340.o nu340d.o \
	js338.o js338d.o js337.o js337d.o js335.o js335d.o js336.o js336d.o \
	ws334.o ws334d.o ws333.o ws333d.o ws332.o ws332d.o ws331.o ws331d.o \
	ws330.o ws330d.o 

all: Cobj11.o

Cobj11.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj11.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

