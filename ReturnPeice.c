#include <stdio.h>
#include "reversi1.h"

int ReturnPeice(int x0, int y0, Map* map){
	int rNum[8] = {0};
	ReturnNum(x0, y0, rNum, *map);
	int sx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
	int sy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
	
	for(int i=0; i<8; i++){
		int dx = sx[i];
		int dy = sy[i];
		int x = x0 +dx;
		int y = y0+dy;
		for(int j=0; j<rNum[i]; j++){
			map->map[y][x] = map->p;
			x += dx;
			y += dy;
		}
	}
	return SUCCESS;
}