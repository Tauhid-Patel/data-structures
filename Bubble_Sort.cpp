// Bubble sort
#include<iostream>

using namespace std;

int main()
{
	int n, i, j, tmp;
	int A[10];
	
	cout << "Enter the size of array: ";
	cin >> n;
	
	cout << "Enter the elements of array: ";
	for(i=0; i<n; i++)
	{
		cin >> A[i];
	}
	
	cout << "Original elements: ";
	for(i=0; i<n; i++)
	{
		cout << A[i] << " ";
	}
	
	// logic
	for(i=1; i<n; i++)
	{
		for(j=0; j<n-i; j++)
		{
			if(A[j] > A[j+1])
			{
				tmp = A[j];
				A[j] = A[j+1];
				A[j+1] = tmp;
			}
		}
	}
	
	cout << "Sorted array: ";
	for(i=0; i<n; i++)
	{
		cout << A[i] << " ";
	}
}
