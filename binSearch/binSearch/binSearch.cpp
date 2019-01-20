/**********************************************************
*date:2019-1-20
*功能:二分查找
*	1. 有序的数据集
*	2. 元素必须存储在连续的空间
*算法思想：
*
*
*相关的面试题:
*	1. 旋转数组的最小数字
*	2. 在排序数组中查找数字
**********************************************************/

#include <iostream>

using namespace std;

/*
*返回值:
*		如果成功，返回目标的索引值；否则返回-1
*/
namespace version1
{
	int binSearch(int array[], int low, int high, int key)
	{
		int middle = -1;

		while (low != high)
		{
			middle = (low + high) / 2;//???整数溢出???
			if (array[middle] > key) //查找左半区
			{
				high = middle - 1;
			}
			else if (array[middle] < key)
			{
				low = middle + 1;
			}
			else
			{
				//key等于目标值，返回
				return middle;
			}
		}
		return middle;
	}
}
int main()
{
	int arry[] = { 10, 14, 21, 38, 45, 47, 53, 81, 87, 99 };

	int index = version1::binSearch(arry,0,sizeof(arry)/sizeof(arry[0]) - 1,81);
	if (index != -1)
	{
		cout << __LINE__ << ",index=" << index << ",arry[index]=" << arry[index] << endl;
	}
	else
	{
		cout << __LINE__ << "not found" << endl;
	}
	return 0;
}