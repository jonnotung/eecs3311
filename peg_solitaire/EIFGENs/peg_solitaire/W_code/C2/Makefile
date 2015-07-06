INCLUDE_PATH = 
SHELL = /bin/sh
CC = cc
CPP = c++
CFLAGS = -O0 -pipe -fno-common -fPIC -std=c99  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"/Users/rajiteh/dev/es/Eiffel_15.01/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fno-common -fPIC -std=c++11  -DWORKBENCH -I"/Users/rajiteh/dev/es/Eiffel_15.01/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   
LDSHAREDFLAGS =   -dynamiclib -flat_namespace -undefined suppress -o
EIFLIB = "/Users/rajiteh/dev/es/Eiffel_15.01/studio/spec/macosx-x86-64/lib/libwkbench.a"
EIFTEMPLATES = /Users/rajiteh/dev/es/Eiffel_15.01/studio/config/macosx-x86-64/templates
LIBS = -lm
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/Users/rajiteh/dev/es/Eiffel_15.01/studio/spec/macosx-x86-64/bin/x2c"
SHAREDLINK = cc
SHAREDLIBS = -lm
SHARED_SUFFIX = .dylib
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = peg_solitaire.dylib 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C2_c.o 

OLDOBJECTS =  ty916.o ty916d.o ty918.o ty918d.o ar919.o ar919d.o ap892.o ap892d.o \
	te896.o te896d.o te895.o te895d.o te894.o te894d.o es893.o es893d.o \
	es897.o es897d.o es899.o es899d.o es898.o es898d.o da912.o da912d.o \
	ti910.o ti910d.o da908.o da908d.o da915.o da915d.o da903.o da903d.o \
	ab904.o ab904d.o da905.o da905d.o da911.o da911d.o ti902.o ti902d.o \
	ti909.o ti909d.o da906.o da906d.o da914.o da914d.o fi907.o fi907d.o \
	da901.o da901d.o da913.o da913d.o du900.o du900d.o in917.o in917d.o 

all: Cobj2.o

Cobj2.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj2.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

