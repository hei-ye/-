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
	 game1(arr,ROW,COL);//����Ԫ�س�ʼ��
	 game2(arr,ROW,COL);//��ӡ����
	 while(1)
	 {
	 game3(arr,ROW,COL);//�����
	 game2(arr,ROW,COL);//��ӡ����
	 ret=game5(arr,ROW,COL);//
	if(ret!='c')
	 {break;}//�ж���Ӯ
	game4(arr,ROW,COL);//������
	 game2(arr,ROW,COL);//��ӡ����
	 ret=game5(arr,ROW,COL);
	if(ret!='c')
	{ break;}//�ж���Ӯ
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
		 printf("�˳���Ϸ\n");
		 break;
	 default:
		 break;
	 }
	}while(input);
	return 0;
}