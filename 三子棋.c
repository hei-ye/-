#include"game.h"
void meau()
{
  printf("************************\n");
  printf("**** 1.play 0.exit ****\n");
  printf("************************\n");
}
void game()
{
	char ret=0;
	char arr[ROW][COL]={0};
	 game1(arr,ROW,COL);//数组元素初始化
	 game2(arr,ROW,COL);//打印棋盘
	 while(1)
	 {
	 game3(arr,ROW,COL);//玩家走
	 game2(arr,ROW,COL);//打印棋盘
	 ret=game5(arr,ROW,COL);//
	if(ret!='c')
	 {break;}//判断输赢
	game4(arr,ROW,COL);//电脑走
	 game2(arr,ROW,COL);//打印棋盘
	 ret=game5(arr,ROW,COL);
	if(ret!='c')
	{ break;}//判断输赢
	}
	 game6(ret);
	
}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		meau();
	   scanf("%d",&input);
	 switch(input)
	 {
	 case 1:
		game();
		 break;
	 case 0:
		 printf("退出游戏\n");
		 break;
	 default:
		 break;
	 }
	}while(input);
	return 0;
}