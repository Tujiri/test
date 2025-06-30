#include <stdio.h>
#include "reversi1.h"

int SetPeice(int x, int y, Map* map){
	map->map[y][x] = map->p;
	return SUCCESS;
}