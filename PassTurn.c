#include <stdio.h>
#include "reversi1.h"

int PassTurn(int* p){
	printf("Player%sは置くことができません。",(*p==-1)?"A":"B");
	*p *= -1;
	return SUCCESS;
}