#include <stdio.h>
#include <stdlib.h>
#include "reversi1.h"

int Exception(int value){
	switch(value){
		case 0: break;
		
		case 1:
			printf("�G���[�F�������s�K�ł�\n");
			exit(1);
			break;
			
		case 2:
			printf("�G���[:���I�ȃ������̊m�ۂɎ��s���܂���\n");
			exit(1);
			break;
			
		case 3:
			printf("�t�@�C�����J���܂���ł���\n");
			exit(1);
			break;
	}
			
	return SUCCESS;
}