INCLUDE_PATH = 
SHELL = \bin\sh
CC = cl
CPP = cl
CFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE   -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
CPPFLAGS = -Od -MT -w -nologo -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_CRT_SECURE_NO_DEPRECATE -D_UNICODE -DUNICODE   -DWORKBENCH -I"C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL\studio\spec\win64\include" -I. $(INCLUDE_PATH)
LDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc
CCLDFLAGS = -STACK:5000000 -NODEFAULTLIB:libc  -SUBSYSTEM:WINDOWS
LDSHAREDFLAGS =  -dll -incremental:no -NODEFAULTLIB:libc
EIFLIB = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL\studio\spec\win64\lib\msc\wkbench.lib"
EIFTEMPLATES = C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL\studio\config\win64\templates
LIBS = 
MAKE = nmake -s -nologo
AR = 
LD = 
MKDEP =   --
MV = copy
CP = copy
RANLIB = echo
RM = del
FILE_EXIST = if exist
RMDIR = rd
X2C = "C:\Program Files\Eiffel Software\EiffelStudio 15.01 GPL\studio\spec\win64\bin\x2c.exe"
SHAREDLINK = link
SHAREDLIBS = USER32.lib WS2_32.lib ADVAPI32.lib GDI32.lib SHELL32.lib MSIMG32.lib \
	COMDLG32.lib UUID.lib OLE32.lib OLEAUT32.lib COMCTL32.lib MPR.LIB SHLWAPI.LIB WINSPOOL.LIB 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if not exist finished 
END_TEST =  
CREATE_TEST = echo "finished" >> finished 
SYSTEM_IN_DYNAMIC_LIB = bank-account.dll 

.SUFFIXES:.cpp .obj 

.c.obj:
	$(CC) $(CFLAGS) -c $<

.cpp.obj:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C9_c.obj 

OLDOBJECTS =  sp285.obj sp285d.obj ar272.obj ar272d.obj ty270.obj ty270d.obj ty271.obj ty271d.obj \
	na286.obj na286d.obj re288.obj re288d.obj li277.obj li277d.obj ar291.obj ar291d.obj \
	re273.obj re273d.obj to284.obj to284d.obj it290.obj it290d.obj it289.obj it289d.obj \
	ha265.obj ha265d.obj in287.obj in287d.obj cu280.obj cu280d.obj tr278.obj tr278d.obj \
	se293.obj se293d.obj dy292.obj dy292d.obj bo274.obj bo274d.obj ta267.obj ta267d.obj \
	ha266.obj ha266d.obj ta268.obj ta268d.obj ch296.obj ch296d.obj co283.obj co283d.obj \
	ac281.obj ac281d.obj co279.obj co279d.obj bi264.obj bi264d.obj bi294.obj bi294d.obj \
	fi275.obj fi275d.obj dy295.obj dy295d.obj ba282.obj ba282d.obj ta269.obj ta269d.obj \
	bo276.obj bo276d.obj 

all::  Cobj9.lib

Cobj9.lib: $(OBJECTS) Makefile
	if exist $@ $(RM) $@
	lib -nologo -OUT:$@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

