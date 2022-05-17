#include<iostream>

using namespace std;

int main() {
	//declaring variables
	int n, i;
	int A[10];
	int max, no_of_passes = 0;
	int bin[10][20], bin_count[10];
	int pass, j, k, r;
	int divisor = 1;
	
	cout << "*** RADIX SORT ***\n\n";
	
	cout << "Enter the size of array: ";
	cin >> n;
	
	cout << "Enter the elements of array: ";
	for(i=0; i<n; i++)
	{
		cin >> A[i];
	}
	
	cout << endl << endl;
	
	cout << "Original array: ";
	for(i=0; i<n; i++)
	{
		cout << A[i] << " ";
	}
	
	// largest number in the array
	max = A[0];
	for(i=1; i<n; i++)
	{
		if(A[i] > max)
		{
			max = A[i];
		}
	}
	
	// number of digits in max
	while(max > 0)
	{
		no_of_passes++;
		max = max / 10;
	}
	
	// Radix sort
	for(pass=1; pass <= no_of_passes; pass++)
	{
		// initialize bin count
		for(k=0; k<10; k++)
		{
			bin_count[k] = 0;
		}
		
		// put numbers in their respective bins
		for(i=0; i<n; i++)
		{
			r = (A[i]/divisor)%10;
			bin[r][bin_count[r]] = A[i];
			bin_count[r]++;
		}
		
		// collect the bins
		i = 0;
		for(k=0; k<10; k++)
		{
			for(j=0; j<bin_count[k]; j++)
			{
				A[i] = bin[k][j];
				i++;
				
			}
		}
		divisor = divisor * 10;
	}
	
	cout << endl << endl;
	cout << "Sorted Array: ";
	for(i=0; i<n; i++)
	{
		cout << A[i] << " ";
	}
}
