#include<stdio.h>





void sweep()
{

	printf("start sweep game \n");

}
void menu()
{
	printf("*****************************\n");
	printf("******   1、play    *********\n");
	printf("******   0、exit    *********\n");
	printf("*****************************\n");


}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			sweep();
			break;
		case 0:
			printf("退出游戏 \n");
			break;
		default:
			printf("选择错误，请重新选择 \n");
			break;
		}
	} while (input);

}
int main()
{

	test();
	return 0;
}