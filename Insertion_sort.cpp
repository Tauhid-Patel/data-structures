// Insertion sort
#include<iostream>

using namespace std;

int main()
{
	int n, i, loc, tmp;
	int A[10];
	
	cout << "*** INSERTION SORT  ***\n\n";
	
	cout << "Enter size of array: ";
	cin >> n;
	
	cout << "Enter the elements of array: ";
	for(i=0; i<n; i++)
	{
		cin >> A[i];
	}
	
	cout << "Original array: ";
	for(i=0; i<n; i++)
	{
		cout << A[i] << " ";
	}
	
	//logic
	for(i=1; i<n; i++)
	{
		tmp = A[i];
		loc = i-1;
		
		while(tmp<A[loc] && loc>=0)
		{
			A[loc+1] = A[loc];
			loc = loc - 1;
		}
		
		A[loc+1] = tmp;
	}

	cout << endl << endl;
	
	cout << "Sorted array: ";
	for(i=0; i<n; i++)
	{
		cout << A[i] << " ";
	}	
}
