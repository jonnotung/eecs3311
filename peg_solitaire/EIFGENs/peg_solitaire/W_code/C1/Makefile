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

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  es891.o es891d.o go889.o go889d.o ba888.o ba888d.o ga867.o ga867d.o \
	bo865.o bo865d.o bo866.o bo866d.o es872.o es872d.o es890.o es890d.o \
	pl887.o pl887d.o bo864.o bo864d.o bo863.o bo863d.o es871.o es871d.o \
	sl861.o sl861d.o sl862.o sl862d.o un883.o un883d.o un886.o un886d.o \
	oc885.o oc885d.o sl882.o sl882d.o av884.o av884d.o c_860.o c_860d.o \
	ti876.o ti876d.o da877.o da877d.o da879.o da879d.o da880.o da880d.o \
	ti875.o ti875d.o ti874.o ti874d.o co881.o co881d.o ti873.o ti873d.o \
	da878.o da878d.o gr870.o gr870d.o da869.o da869d.o da868.o da868d.o 

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

