#include <iostream>
using namespace std;

#include "solution.h"

int tripletSum(int *input,int size,int x ){
int i,j,k,c=0;
for(i=0;i<size;i++){
  for(j=0;j<size;j++){
     if(i<j){
    for(k=0;k<size;k++){
     if(j<k&&x==input[i]+input[j]+input[k]){
        c++;
       }
     }
    }
  }
 }
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

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
