#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reversi1.h"

int Mapio(
	const char* fname,
	Map* map
){
	int x,y;
	char buf[81];
	FILE *fp;
	
	if((fp=fopen(fname, "r")) == NULL) return FILE_FAIL;
	
	fgets(buf, sizeof(buf), fp);
	map->w = atoi(strtok(buf, ","));
	map->h = atoi(strtok(NULL, ",\0\n"));
	
	map->map = malloc(map->h*sizeof(void*));
	if(map->map == NULL) return MEM_FAIL;
	for(int i=0; i< map->h ; ++i){
		map->map[i] = malloc(map->w*sizeof(char));
		if(map->map[i] == NULL){
			while(--y >= 0) free(map->map[i]);
			free(map->map);
			return MEM_FAIL;
		}
	}
	
	for(y=0; y<map->h; ++y){
		fgets(buf, sizeof(buf), fp);
		map->map[y][0] = atoi(strtok(buf, ","));
		for(x=1; x<map->w; ++x)
			map->map[y][x] = atoi(strtok(NULL, ",\0\n"));
	}
	fclose(fp);
	return SUCCESS;
}