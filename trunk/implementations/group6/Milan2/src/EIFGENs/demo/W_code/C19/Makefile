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

OBJECTS = big_file_C19_c.o 

OLDOBJECTS =  ty614.o ty614d.o ty615.o ty615d.o ty610.o ty610d.o ty611.o ty611d.o \
	ty616.o ty616d.o re619.o re619d.o ar594.o ar594d.o li623.o li623d.o \
	re606.o re606d.o in603.o in603d.o in618.o in618d.o to608.o to608d.o \
	it620.o it620d.o it621.o it621d.o li605.o li605d.o in622.o in622d.o \
	se601.o se601d.o dy595.o dy595d.o cu626.o cu626d.o tr624.o tr624d.o \
	bo607.o bo607d.o ta604.o ta604d.o un597.o un597d.o sq609.o sq609d.o \
	sq612.o sq612d.o ch600.o ch600d.o bi602.o bi602d.o fi598.o fi598d.o \
	dy596.o dy596d.o co625.o co625d.o rt613.o rt613d.o rt617.o rt617d.o \
	bo599.o bo599d.o 

all: Cobj19.o

Cobj19.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj19.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

