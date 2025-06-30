#include <stdio.h>
#include "reversi1.h"

int IsCanSetXY(int x, int y, Map map){
	int rNum[8]={0};
	ReturnNum(x, y, rNum, map);
	for(int i=0; i<8; i++)
		if(rNum[i]) return 1;
	return 0;
}