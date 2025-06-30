#include <stdio.h>
#include <stdlib.h>
#include "reversi1.h"

int Exception(int value){
	switch(value){
		case 0: break;
		
		case 1:
			printf("エラー：引数が不適です\n");
			exit(1);
			break;
			
		case 2:
			printf("エラー:動的なメモリの確保に失敗しました\n");
			exit(1);
			break;
			
		case 3:
			printf("ファイルが開けませんでした\n");
			exit(1);
			break;
	}
			
	return SUCCESS;
}