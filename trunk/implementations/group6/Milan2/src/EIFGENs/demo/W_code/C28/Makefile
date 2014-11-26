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

OBJECTS = big_file_C28_c.o 

OLDOBJECTS =  ar892.o ar892d.o ty915.o ty915d.o ty916.o ty916d.o ty917.o ty917d.o \
	ty921.o ty921d.o ar902.o ar902d.o li895.o li895d.o re903.o re903d.o \
	in893.o in893d.o to907.o to907d.o it891.o it891d.o ha922.o ha922d.o \
	li911.o li911d.o se908.o se908d.o dy910.o dy910d.o cu896.o cu896d.o \
	tr901.o tr901d.o bo904.o bo904d.o ta894.o ta894d.o ha923.o ha923d.o \
	un914.o un914d.o ch912.o ch912d.o co900.o co900d.o ac898.o ac898d.o \
	bi909.o bi909d.o fi905.o fi905d.o dy913.o dy913d.o co897.o co897d.o \
	ba899.o ba899d.o rt918.o rt918d.o rt919.o rt919d.o rt920.o rt920d.o \
	bo906.o bo906d.o 

all: Cobj28.o

Cobj28.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj28.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

