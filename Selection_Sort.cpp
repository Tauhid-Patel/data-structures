// selection sort
#include<iostream>

using namespace std;

int main()
{
	int n, i, j, min, loc, tmp;
	int A[10];
	
	cout << "Enter the size of array: ";
	cin >> n;
	
	cout << "Enter the elements of array: ";
	for(i=0; i<n; i++)
	{
		cin >> A[i];
	}
	
	cout << "the elements of array are: ";
	for(i=0; i<n; i++)
	{
		cout << A[i] << " ";
	}
	
	//logic
	for(i=0; i<n; i++)
	{
		min = A[i];
		loc = i;
		
		for(j=i+1; j<n; j++)
		{
			if(A[j] < min)
			{
				min = A[j];
				loc = j;
			}	
		}
		tmp = A[i];
		A[i] = A[loc];
		A[loc] = tmp;
	}
	
	
	cout << "Sorted array: ";
	for(i=0; i<n; i++)
	{
		cout << A[i] << " ";
	}
	
}
