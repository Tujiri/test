#include <stdio.h>
#include "reversi1.h"

int main(int argc, char** argv){
	struct map map;
	Exception(Mapio(argv[1], &map));
	ViewMap(map);
	int isEndFlag = 1;
	map.p=-1;
	while(1){
		if(IsCanSet(map)){
			int x=0;
			int y=0;
			if(map.p==-1)
				GetPosition(&x, &y, map);
			else
				PcPosition(&x,&y, map);
			UpdateMap(x,y,&map);
			map.p = -1*map.p;
		}else if(isEndFlag){
			isEndFlag = 0;
			PassTurn(&map.p);
		}else{
			CheckWinner(map);
			return SUCCESS;
		}
	}
}