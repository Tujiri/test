#include <stdio.h>
#include "reversi1.h"

int GetPosition(int* x, int* y, Map map){
	printf("どこに置きますか？\nx:");
	scanf("%d",x);
	printf("y:");
	scanf("%d",y);
	if(IsCanSetXY(*x, *y, map)){
		return SUCCESS;
	}else{
		puts("値が不適です");
		return GetPosition(x,y,map);
	}
}