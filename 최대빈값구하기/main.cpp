#include<stdlib.h>
#include<iostream>

#define NUMBERS 5

using namespace std;

void ComparedNumber(int *Number,int *a)
{
	for (int i = 0; i < NUMBERS - 1; i++)
	{
		for (int j = i + 1; j < NUMBERS; j++)
		{
			if (Number[i] == Number[j])
			{
				a[i]++;
			}
		}
	}
}
void cpdNumbers(int *Number, int *a)
{
	for (int i = 0; i < NUMBERS - 1; i++)
	{
		if (a[i] < a[i + 1] && a[i] == 0)
		{
			a[i] = 0;
		}
	}
}
void Result(int *Number, int *a)
{
	for (int i = 0; i < NUMBERS; i++)
	{
		if (a[i] != 0)
			cout << Number[i] << " ";
	}
}


int main(void)
{
	int Number[NUMBERS] = { 12, 17, 19, 17, 19 };
	int point[NUMBERS] = { 0, 0, 0, 0, 0};

	 
	for (int i = 0; i < NUMBERS; i++)
		cout << Number[i]<<" ";

	cout << endl;



	//1 숫자 비교
	ComparedNumber(Number,point);
	//2비교한 개수 확인
	cpdNumbers(Number, point);
	
	//3.최대빈 숫자 출력
	Result(Number, point);

	cout << endl;
	return 0;
}

