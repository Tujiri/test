#include <stdio.h>
#include "reversi1.h"

int PassTurn(int* p){
	printf("Player%s�͒u�����Ƃ��ł��܂���B",(*p==-1)?"A":"B");
	*p *= -1;
	return SUCCESS;
}