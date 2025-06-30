#include <stdio.h>
#include <stdlib.h>
#include "reversi1.h"

int ReturnNum(int x0, int y0, int* rNum, Map map){

	if(x0<0 || x0>=map.w || y0<0 || y0>=map.h) return ARG_FAIL;
	
	if(map.map[y0][x0]!=0) return ARG_FAIL;
	
	int sx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
	int sy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
	int myValue = map.p;
	int enValue = -1*map.p;
	
	for(int i=0; i<8; i++){
		int dx = sx[i];
		int dy = sy[i];
		int x = x0+dx;
		int y = y0+dy;
		
		if(x<0 || x>=map.w || y<0 || y>=map.h) continue;
		if(map.map[y][x]!=enValue) continue;
		
		for(int j=0;
			x>=0 && x<map.w && y>=0 && y<map.h;
			j++){
			if(map.map[y][x]==enValue){
				x += dx;
				y += dy;
				continue;
			}
			if(map.map[y][x]==myValue){
				rNum[i]=j;
			}
			break;
		}
	}
	return SUCCESS;
}