#include <stdio.h>
#include <string.h>
#include "reversi1.h"

//int ViewMap(Map map){
//	char hline[MAX_MAP_SIZE*3+2] = "";
//	for(int i=0; i<map.w; i++) strcat(hline, "---");
//	strcat(hline, "-\n");
//
//	printf("%s",hline);
//	for(int y=0; y<map.h; y++){
//		for(int x=0; x<map.w; x++){
//			printf("|");
//			switch(map.map[y][x]){
//				case 0:
//					printf("  ");
//					break;
//				
//				case 1:
//					printf("Z");
//					break;
//					
//				case -1:
//					printf("œ");
//					break;
//			}
//		}
//		printf("|\n%s",hline);
//	}
//	return SUCCESS;
//}

int ViewMap(Map map){
	char hline[MAX_MAP_SIZE*4+2] = "";
	for(int i=0; i<map.w; i++) strcat(hline, "----");
	strcat(hline, "-\n");
	
	printf("%s",hline);
	for(int y=0; y<map.h; y++){
		for(int x=0; x<map.w; x++){
			printf("|");
			printf("%3d", map.map[y][x]);
		}
		printf("|\n%s",hline);
	}
	return SUCCESS;
}