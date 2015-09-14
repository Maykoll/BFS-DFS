#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif


main ()
{
    int matriz [8][8];
int i=0, j=0;
for (i=0;i<8;i++)
	{
		for(j=0 ;j<8;j++)
		{
			matriz [i][j]=0;
			//printf("%d ",matriz[i][j]);
		}
		//printf("\n");
	}
	
matriz [0][2]=1;
matriz [0][7]=1;
matriz [1][0]=1;
matriz [1][3]=1;
matriz [2][1]=1;
matriz [3][1]=1;
matriz [3][4]=1;
matriz [4][5]=1;
matriz [5][1]=1;
matriz [5][3]=1;
matriz [5][6]=1;
matriz [6][4]=1;
matriz [7][6]=1;
printf("\n");
for (i=0;i<8;i++)
	{
		for(j=0 ;j<8;j++)
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
    return 0;	
    
}
