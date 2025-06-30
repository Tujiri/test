CC = bcc32c
CFLAGS = /Tc
OBJS = reversimain1.obj Mapio.obj Exception.obj IsCanSet.obj IsCanSetXY.obj ReturnNum.obj GetPosition.obj PcPosition.obj UpdateMap.obj SetPeice.obj ReturnPeice.obj ViewMap.obj PassTurn.obj CheckWinner.obj

.c.obj:
	$(CC) -c $(CFLAGS) $<
	
reversimain1.obj Mapio.obj Exception.obj IsCanSet.obj IsCanSetXY.obj ReturnNum.obj GetPosition.obj PcPosition.obj UpdateMap.obj SetPeice.obj ReturnPeice.obj ViewMap.obj PassTurn.obj CheckWinner.obj: reversi1.h

reversi1.exe: $(OBJS)
	$(CC) -e$@ $(OBJS)
	
clear:
	del *.obj

#EOF