#include <stdio.h>
#include "reversi1.h"

int GetPosition(int* x, int* y, Map map){
	printf("�ǂ��ɒu���܂����H\nx:");
	scanf("%d",x);
	printf("y:");
	scanf("%d",y);
	if(IsCanSetXY(*x, *y, map)){
		return SUCCESS;
	}else{
		puts("�l���s�K�ł�");
		return GetPosition(x,y,map);
	}
}