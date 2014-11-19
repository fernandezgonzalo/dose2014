INCLUDE_PATH =  -I"$(ISE_LIBRARY)/unstable/library/persistency/database/sqlite3/spec/include" -I"-DSQLITE_THREADSAFE=0"
SHELL = /bin/sh
CC = cc
CPP = c++
CFLAGS = -O0 -pipe -fno-common -fPIC  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"/Applications/MacPorts/Eiffel_14.05/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fno-common -fPIC  -DWORKBENCH -I"/Applications/MacPorts/Eiffel_14.05/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   
LDSHAREDFLAGS =   -dynamiclib -flat_namespace -undefined suppress -o
EIFLIB = "/Applications/MacPorts/Eiffel_14.05/studio/spec/macosx-x86-64/lib/libwkbench.a"
EIFTEMPLATES = /Applications/MacPorts/Eiffel_14.05/studio/config/macosx-x86-64/templates
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
X2C = "/Applications/MacPorts/Eiffel_14.05/studio/spec/macosx-x86-64/bin/x2c"
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

OBJECTS = big_file_C4_c.o 

OLDOBJECTS =  ap115.o ap115d.o rt127.o rt127d.o ws114.o ws114d.o rt126.o rt126d.o \
	st129.o st129d.o st131.o st131d.o st130.o st130d.o rt128.o rt128d.o \
	rt125.o rt125d.o ws124.o ws124d.o ws122.o ws122d.o ws123.o ws123d.o \
	wg118.o wg118d.o wg121.o wg121d.o sq117.o sq117d.o da105.o da105d.o \
	ws116.o ws116d.o ws109.o ws109d.o ws111.o ws111d.o ws113.o ws113d.o \
	ws110.o ws110d.o ti102.o ti102d.o da103.o da103d.o da106.o da106d.o \
	da104.o da104d.o ti101.o ti101d.o pe108.o pe108d.o ws112.o ws112d.o \
	me107.o me107d.o ti100.o ti100d.o ti99.o ti99d.o wg120.o wg120d.o \
	wg119.o wg119d.o 

all: Cobj4.o

Cobj4.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj4.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

