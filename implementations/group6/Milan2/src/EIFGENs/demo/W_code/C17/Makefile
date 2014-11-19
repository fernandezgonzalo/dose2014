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

OBJECTS = big_file_C17_c.o 

OLDOBJECTS =  ar559.o ar559d.o ty542.o ty542d.o ty543.o ty543d.o ty544.o ty544d.o \
	ty545.o ty545d.o re547.o re547d.o li552.o li552d.o ar528.o ar528d.o \
	re529.o re529d.o in546.o in546d.o in560.o in560d.o to533.o to533d.o \
	it550.o it550d.o it549.o it549d.o li537.o li537d.o in548.o in548d.o \
	cu553.o cu553d.o tr558.o tr558d.o se534.o se534d.o dy536.o dy536d.o \
	bo530.o bo530d.o ta551.o ta551d.o un540.o un540d.o ch538.o ch538d.o \
	co557.o co557d.o ac555.o ac555d.o co554.o co554d.o bi535.o bi535d.o \
	fi531.o fi531d.o dy539.o dy539d.o ba556.o ba556d.o bo532.o bo532d.o \
	ar541.o ar541d.o 

all: Cobj17.o

Cobj17.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj17.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

