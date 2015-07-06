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
SYSTEM_IN_DYNAMIC_LIB = bank_proj.dylib 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  ap880.o ap880d.o te878.o te878d.o es879.o es879d.o ac861.o ac861d.o \
	es877.o es877d.o es866.o es866d.o es876.o es876d.o es883.o es883d.o \
	es882.o es882d.o es881.o es881d.o es865.o es865d.o da887.o da887d.o \
	c_860.o c_860d.o ab888.o ab888d.o da889.o da889d.o ti886.o ti886d.o \
	ti871.o ti871d.o da872.o da872d.o da890.o da890d.o fi891.o fi891d.o \
	da885.o da885d.o da874.o da874d.o du884.o du884d.o da875.o da875d.o \
	ti870.o ti870d.o ti869.o ti869d.o ti868.o ti868d.o co867.o co867d.o \
	da873.o da873d.o gr864.o gr864d.o da863.o da863d.o da862.o da862d.o 

all: Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj1.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

