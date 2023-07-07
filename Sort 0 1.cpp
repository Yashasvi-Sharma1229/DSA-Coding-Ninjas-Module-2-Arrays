
#include <iostream>
#include <algorithm>
using namespace std;

#include "solution.h"

void sortZeroesAndOne(int *input,int size ){
  int i,nextzero= 0,t;
  for(i=0;i<size;i++){
    if(input[i]==0){
       t=input[nextzero];
         input[nextzero]=input[i];
         input[i]=t;
        nextzero++;
   }
  }
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int input[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
	}

	return 0;
}
