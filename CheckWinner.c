#include <stdio.h>
#include "reversi1.h"

int CheckWinner(Map map){
	int playerA=0;
	int playerB=0;
	for(int y=0; y<map.h; y++){
		for(int x=0; x<map.w; x++){
			switch(map.map[y][x]){
				case 0:
					break;
				case -1:
					playerA++;
					break;
				case 1:
					playerB++;
					break;
			}
		}
	}
	printf("Player%s‚ÌŸ‚¿‚Å‚·I",(playerA>playerB)?"A":"B");
	return  SUCCESS;
}