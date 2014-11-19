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

OBJECTS = big_file_C26_c.o 

OLDOBJECTS =  ar846.o ar846d.o ty844.o ty844d.o ty845.o ty845d.o re848.o re848d.o \
	li853.o li853d.o in847.o in847d.o it851.o it851d.o it850.o it850d.o \
	ce837.o ce837d.o li826.o li826d.o in849.o in849d.o cu854.o cu854d.o \
	dy825.o dy825d.o ta852.o ta852d.o un829.o un829d.o ch827.o ch827d.o \
	ac856.o ac856d.o co855.o co855d.o dy828.o dy828d.o ba857.o ba857d.o \
	rt830.o rt830d.o rt834.o rt834d.o rt838.o rt838d.o rt841.o rt841d.o \
	rt842.o rt842d.o rt831.o rt831d.o rt835.o rt835d.o rt839.o rt839d.o \
	rt843.o rt843d.o rt832.o rt832d.o rt836.o rt836d.o rt840.o rt840d.o \
	en833.o en833d.o 

all: Cobj26.o

Cobj26.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj26.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

