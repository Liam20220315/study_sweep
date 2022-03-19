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

void printf_char_arrs(void)
{
	char arr1[] = "**********";
	char arr2[] = "##########";
	char arr3[] = "..........";
	char* arr[] = { arr1,arr2,arr3 };
	int i;
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < len1; i++)
	{

		printf(" %s", (arr[i]));
		printf("\n");
	}
}

void printf_int_arrs(void)
{
	int arr1[] = { 1,2,3,2,3,1,2,4,2,1,3,4 };
	int arr2[] = { 2,3,1,2,4,3,1,2,4,1,2,4 };
	int arr3[] = { 3,1,2,3,1,2,3,4,1,2,4,1 };
	int* arr[] = { arr1,arr2,arr3 };
	int i;
	int j;
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < len2; i++)
	{
		for (j = 0;  j< len1; j++)
		{
			printf(" %d", *(arr[i]+j));
		}
		
		printf("\n");
	}


}

int main()
{
	printf_int_arrs();
	return 0;
}