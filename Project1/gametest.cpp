#include<stdio.h>





void sweep()
{

	printf("start sweep game \n");

}
void menu()
{
	printf("*****************************\n");
	printf("******   1��play    *********\n");
	printf("******   0��exit    *********\n");
	printf("*****************************\n");


}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			sweep();
			break;
		case 0:
			printf("�˳���Ϸ \n");
			break;
		default:
			printf("ѡ�����������ѡ�� \n");
			break;
		}
	} while (input);

}

int my_strlen(char* arr)
{
	char* start_adr = arr;
	char* end_adr = arr;
	while (*end_adr != '\0')
	{
		end_adr++;
	}
	return end_adr - start_adr;
}
int main()
{
	char arr[] = "1234567890qwertyuiopasdfghjklzxcvbnm";

	int ret = my_strlen(arr);
	printf("�ַ�������:%d \n", ret);

	//test();
	return 0;
}