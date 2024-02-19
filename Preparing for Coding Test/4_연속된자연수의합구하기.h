#pragma once
#include <iostream>
using namespace std;


int main()
{
	int N;
	cin >> N;
	int count = 1;
	int start_index = 1;
	int end_index = 1;
	int sum = 1;

	while (end_index != N) {
		if (sum == N)
		{
			count++;
			end_index++;
			sum = sum + end_index;
		}
		else if (sum < N)
		{
			end_index++;
			sum = sum + end_index;
		}
		else
		{
			sum = sum - start_index;
			start_index++;
		}
	}
	cout << count << "\n";

}