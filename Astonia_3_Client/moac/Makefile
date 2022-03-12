

#BCCPATH=c:\borland\bcc55

#CC=${CC}
#OPT=-O2 -5 -d -ff -k- -OS -Q -X
#MODEL=-W -WM
#CFLAGS= -I../lib $(OPT) $(MODEL)
#LDFLAGS= -W -WM -M

CC=x86_64-w64-mingw32-gcc
DEBUG=-g
CFLAGS=-Wall -Wshadow -Wno-pointer-sign $(DEBUG) -fno-strict-aliasing -fPIC -DISCLIENT -DEDITOR -DDD_OK=1
LDFLAGS=-O $(DEBUG) -fPIC 

#moac.exe:	Makefile gui.o client.o skill.o dd.o font.o gfx.o main.o sprite.o game.o neuquant.o resource.res edit.o edit_tool.o sound.o questlog.o
#		$(BCCPATH)\bin\ilink32 /aa -L$(BCCPATH)\lib -L$(BCCPATH)\lib\psdk $(BCCPATH)\lib\c0w32.o gui.o client.o skill.o dd.o neuquant.o font.o gfx.o main.o sprite.o game.o edit.o edit_tool.o sound.o questlog.o,moac.exe,,cw32.lib import32.lib ..\lib\zlib.lib ..\lib\libpng.lib ddraw.lib dsound.lib,,resource.res
#		copy moac.exe backup.exe
		
moac.exe: gui.o client.o skill.o dd.o font.o gfx.o main.o sprite.o game.o neuquant.o resource.res edit.o edit_tool.o sound.o questlog.o
		# ${CC} ${CFLAGS} gui.o client.o skill.o dd.o neuquant.o font.o gfx.o main.o sprite.o game.o edit.o edit_tool.o sound.o questlog.o -o moac.exe cw32.lib import32.lib ..\lib\zlib.lib ..\lib\libpng.lib ddraw.lib dsound.lib,,resource.res
		${CC} ${CFLAGS} gui.o client.o skill.o dd.o neuquant.o font.o gfx.o main.o sprite.o game.o edit.o edit_tool.o sound.o questlog.o -o moac.exe -lz -lpng resource.res
		copy moac.exe backup.exe

dd.o:		dd.c main.h dd.h
		${CC} $(CFLAGS) -c dd.c -o dd.o
		
gfx.o:	gfx.c main.h dd.h neuquant.h
		${CC} $(CFLAGS) -c gfx.c -o gfx.o
		
sprite.o:	sprite.c main.h sprite.h client.h
		${CC} $(CFLAGS) -c sprite.c -o sprite.o

gui.o:	gui.c gui.h main.h dd.h client.h skill.h sprite.h resource.h
		${CC} $(CFLAGS) -c gui.c -o gui.o

main.o:	main.c main.h dd.h client.h resource.h
		${CC} $(CFLAGS) -c main.c -o main.o

font.o:	font.c dd.h
		${CC} $(CFLAGS) -c font.c -o font.o

client.o:	client.c main.h client.h
		${CC} $(CFLAGS) -c client.c -o client.o

skill.o:	skill.c main.h skill.h client.h
		${CC} $(CFLAGS) -c skill.c -o skill.o

game.o:	game.c main.h dd.h client.h sprite.h gui.h spell.h edit.h
		${CC} $(CFLAGS) -c game.c -o game.o

edit.o:	edit.c main.h dd.h client.h gui.h edit.h edit.h sprite.h resource.h
		${CC} $(CFLAGS) -c edit.c -o edit.o

edit_tool.o:	edit_tool.c main.h edit.h
		${CC} $(CFLAGS) -c edit_tool.c -o edit_tool.o

sound.o:	sound.c main.h
		${CC} $(CFLAGS) -c sound.c -o sound.o

questlog.o:	questlog.c main.h
		${CC} $(CFLAGS) -c questlog.c -o questlog.o

neuquant.o:	neuquant.c neuquant.h
		${CC} $(CFLAGS) -c neuquant.c -o neuquant.o

resource.res:	resource.rc
		${CC} -fo resource.res resource.rc

clean:	
		rm *.o
		rm moac.exe
