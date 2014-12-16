case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C4"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)/unstable/library/persistency/database/sqlite3/spec/include" -I"-DSQLITE_THREADSAFE=0"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $optimize $ccflags $large -DEIF_IEEE_BEHAVIOR -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $optimize $cppflags $large -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $windows_flags
LDSHAREDFLAGS =  $ldsharedflags
EIFLIB = "$rt_lib/$prefix$eiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $libs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = WBPMS$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'
.SUFFIXES: .x .xpp .cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

.x.o:
	$(X2C) $< $*.c
	$(CC) $(CFLAGS) -c $*.c
	$(RM) $*.c

.xpp.o:
	$(X2C) $< $*.cpp
	$(CPP) $(CPPFLAGS) -c $*.cpp
	$(RM) $*.cpp

.x.c:
	$(X2C) $< $*.c

.xpp.cpp:
	$(X2C) $< $*.cpp

OBJECTS = big_file_C4_c.obj 

OLDOBJECTS =  pr198.o va184.o lo183.o op154.o ei161.o re158.o re157.o cr177.o \
	ex165.o vo174.o ex156.o io169.o op153.o mi168.o ad176.o co152.o \
	ol160.o se167.o vo173.o no164.o pr182.o po181.o fl150.o in180.o \
	ch179.o ro172.o ba171.o ws196.o sq199.o sq193.o ws195.o sq192.o \
	sq191.o ra197.o in186.o so185.o ne187.o 

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

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

