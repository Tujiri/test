#include <stdio.h>
#include "reversi1.h"

int PassTurn(int* p){
	printf("Player%s‚Í’u‚­‚±‚Æ‚ª‚Å‚«‚Ü‚¹‚ñB",(*p==-1)?"A":"B");
	*p *= -1;
	return SUCCESS;
}