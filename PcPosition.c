#include <stdio.h>
#include "reversi1.h"

int PcPosition(int* x, int* y, Map map){
	int maxSum=0;
	for(int i=0; i<map.h; i++){
		for(int j=0; j<map.w; j++){
			int rNum[8] = {0};
			ReturnNum(j,i,rNum,map);
			int newSum=0;
			for(int k=0; k<8; k++){
				newSum += rNum[k];
			}
			if(newSum>maxSum){
					*x = j;
					*y = i;
					maxSum = newSum;
			}
		}
	}
	return SUCCESS;
}