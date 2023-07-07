#include <iostream>
using namespace std;

#include "solution.h"

int duplicateNumber(int *arr,int size){
int j,i,c=0;
for(i=0;i<size;i++){
c=0;
  for(j=i;j<size;j++){
    if(arr[i]==arr[j]){
     c++;
    }
  }
  if(c==2){
    return arr[i];
  }
 }
 return 0;
}

int main()
{

	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << duplicateNumber(input, size) << endl;
	}

	return 0;
}
