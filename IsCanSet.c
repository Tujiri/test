#include <stdio.h>
#include "reversi1.h"

int IsCanSet(Map map){
	for(int y=0; y< map.h; y++)
		for(int x=0; x< map.w; x++)
			if(IsCanSetXY(x,y,map))
				return 1;
	return 0;
}