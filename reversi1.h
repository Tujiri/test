#if !defined(REVERSI_H)
#define REVERSI_H

#define MAX_MAP_SIZE 15

typedef struct map{
	char** map;
	int w;
	int h;
	int p;
}Map;

int Mapio(const char*, Map*);
int IsCanSet(Map);
int IsCanSetXY(int,int,Map);
int ReturnNum(int, int,int*, Map);
int GetPosition(int*, int*, Map);
int PcPosition(int*, int*, Map);
int UpdateMap(int, int, Map*);
int SetPeice(int, int, Map*);
int ReturnPeice(int, int, Map*);
int ViewMap(Map);
int PassTurn(int*);
int CheckWinner(Map);

int Exception(int);

#define SUCCESS		0;
#define ARG_FAIL	1;
#define MEM_FAIL	2;
#define FILE_FAIL	3;

#endif