#include <stdio.h>
#include "reversi1.h"

int UpdateMap(int x, int y, Map* map){
	ReturnPeice(x,y,map);
	SetPeice(x,y,map);
	ViewMap(*map);
	return SUCCESS;
}