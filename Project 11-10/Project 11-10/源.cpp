#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>



//数组名是什么？
//数组名是首元素地址
//但有两个例外
//1. sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数组。
//2. &数组名，取出的是数组的地址。 &数组名，数组名表示整个数组。

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}


//数组作为函数参数

//冒泡排序

void bubble_sort(int arr[],int sz)
{
	//确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设这一趟要排序的数据已经有序
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//本趟排序的数据其实不完全有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序,排成升序
	//arr是数组，对数组进行传参时，实际上传递过去的是数组arr首元素的地址
	bubble_sort(arr,sz);//冒泡排序函数

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}