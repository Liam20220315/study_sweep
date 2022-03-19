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

typedef struct message
{
	char name[20];
	char sex[5];
	int age;
}ms;

void printf_struct1(ms temp)
{
	printf("name: %s \n", temp.name);
	printf("sex: %s \n", temp.sex);
	printf("age: %d \n", temp.age);

}

void printf_struct2(ms *ptr)
{
	printf("name: %s \n", ptr->name);
	printf("sex: %s \n", ptr->sex);
	printf("age: %d \n", ptr->age);

}

int main()
{
	//char arr[] = "1234567890qwertyuiopasdfghjklzxcvbnm";

	//int ret = my_strlen(arr);
	ms a = {"hesongqing","男",35};
	printf_struct1(a);
	printf("\n");
	printf_struct2(&a);
	//printf("字符串长度:%d \n", ret);

	//test();
	return 0;
}