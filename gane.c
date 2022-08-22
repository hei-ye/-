#include"game.h"
void game1(char arr[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
    {  
			for(j=0;j<col;j++)
		{
		 arr[i][j]=' ';
		
		}
	}
}
void game2(char arr[ROW][COL],int row ,int col)
{
  int i=0;
  int j=0;
  for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
     printf(" %c ",arr[i][j]);
	 if(j<col-1)
	 printf("|");
  
  }
  printf("\n");
  for(j=0;j<col;j++)
  {
  printf("---");
  if(j<col-1)
	  printf("|");
  }
  printf("\n");
  }
}
void game3(char arr[ROW][COL],int row ,int col)
{
	int x=0;
	int y=0;
   while(1)
   {
	    printf("玩家走\n");
   scanf("%d%d",&x,&y);
   if((0<=x&&x<=row)&&(0<=y&&y<=col))
   {
	   if(arr[x-1][y-1]==' ')
	   {
	   arr[x-1][y-1]='#';
	   break;
	   }
   else
	   printf("坐标非法，请重新输入\n");
}
   }
   }
void game4(char arr[ROW][COL],int row ,int col)
{
  int x=0;
  int y=0;
  printf("电脑走\n");
  while(1)
  {
x=rand()%3;
  y=rand()%3;
  if(arr[x][y]==' ')
  {
  arr[x][y]='*';
  break;
  }
  }
}
int is_full(char arr[ROW][COL],int row,int col)
{
int i=0;
int j=0;
for(i=0;i<ROW;i++)
{
for(j=0;j<COL;j++)
{
  if(arr[i][j]==' ')
	  return 1;
}
}
return 0;
}
char game5(char arr[ROW][COL],int row ,int col)
{
  int i=0;
  int j=0;
  for(i=0;i<row;i++)
  {
	 // if(arr[i][1]!=' ')
    if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]&&arr[i][2]!=' ')
      return arr[i][0] ;
  }
  for(j=0;j<col;j++)
  {
     //if(arr[1][i]!=' ')
		 if(arr[0][j]==arr[1][j]&&arr[1][j]==arr[2][j]&&arr[2][j]!=' ')
			 return arr[1][j];
  }
   if((arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2])&&arr[2][2]!=' ')
	   return arr[0][0];
   if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0]&&arr[2][0]!=' ')
	   return arr[1][1];
   	if(0==is_full(arr,row,col))
		return 'p';
		return 'c';
	
   
}

void game6(char ret)
{

	if(ret=='#')
		 printf("玩家赢\n");
	  if(ret=='*')
		 printf("电脑赢\n");
	if(ret=='p')
	    printf("平局\n");

}
