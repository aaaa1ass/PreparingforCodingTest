#pragma once
#include <iostream>
using namespace std;


int main()
{
	int suNo, quizNo;
	cin >> suNo >> quizNo;
	int S[100001] = {  };
	for (int i = 1; i <= suNo; i++)
	{
		int temp;
		cin >> temp;
		S[i] = S[i - 1] + temp;
	}
	for (int i = 0; i < quizNo; i++)
	{
		int start, end;
		cin >> start >> end;
		cout << S[end] - S[start - 1] << "\n";
	}
}