#include<iostream>

using namespace std;

int main()
{
	int First = 0;
	int Second = 0;
	int Sum = 0;

	cout << " 첫번재 숫자를 입력해주세요. : ";
	cin >> First;
	cout << " 두번재 숫자를 입력해주세요. : ";
	cin >> Second;

	Sum = First + Second;

	cout << " 첫번재와 두번째 숫자를 합친 값 : " << Sum;


	return 0;

}