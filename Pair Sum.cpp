#include <iostream>
using namespace std;

#include "solution.h"
#include <climits>
int pairSum(int *input, int size, int x)
{
    int i, j, c = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
        //     if (j == i)
        //     {
        //         continue;
        //     }
        //     else if 
            if (i<j && x == input[i] + input[j])
            {
                c++;
                // input[i] = INT_MIN;
                // input[j] = INT_MIN;
            }
        }
    }
    // cout << c;
    return c;
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}
