#include <stdio.h>
#include <iostream>
#include <ctime>


#define randnumbers
using namespace std;


int main()
{
    const int n = 10;
	int arr[n];
    int min;
	srand(time(NULL));
#ifdef randnumbers

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand(); 
		cout << i << " element of array = " << arr[i] << endl;
		if (i == 9)
		{
			cout << "---------------------" << endl;
		}
	}
#endif // randnumbers

	

	for (int i = 0; i < n - 1; ++i)
	{

		int smallestIndex = i;


		for (int curIndex = i + 1; curIndex < n; ++curIndex)
		{

			if (arr[curIndex] < arr[smallestIndex])

				smallestIndex = curIndex;
		}

		swap(arr[i], arr[smallestIndex]);
	}
	for (int i = 0; i < n; ++i)
	{
		cout << i << " element of array = " << arr[i] << endl;
		if (i == 9)
		{
			cout << "---------------------" << endl;
		}
	}
	system("pause");
	return 0;
}
