/**********************************************************
*date:2019-1-20
*����:���ֲ���
*	1. ��������ݼ�
*	2. Ԫ�ر���洢�������Ŀռ�
*�㷨˼�룺
*
*
*��ص�������:
*	1. ��ת�������С����
*	2. �����������в�������
**********************************************************/

#include <iostream>

using namespace std;

/*
*����ֵ:
*		����ɹ�������Ŀ�������ֵ�����򷵻�-1
*/
namespace version1
{
	int binSearch(int array[], int low, int high, int key)
	{
		int middle = -1;

		while (low != high)
		{
			middle = (low + high) / 2;//???�������???
			if (array[middle] > key) //���������
			{
				high = middle - 1;
			}
			else if (array[middle] < key)
			{
				low = middle + 1;
			}
			else
			{
				//key����Ŀ��ֵ������
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