#include<iostream>

using namespace std;

int main()
{
	int n, i, key;
	int A[10];
	int flag = 0;
	
	cout << "***** LINEAR SEARCH *****\n\n";
	
	cout << "Enter the size of array: ";
	cin >> n;
	
	cout << endl;
	
	cout << "Enter the elements in the array: ";
	for(i=0; i<n; i++)
	{
		cin >> A[i];
	}
	
	cout << endl;
	
	cout << "Enter the key: ";
	cin >> key;
	
	//logic
	for(i=0; i<n; i++)
	{
		if(A[i] == key)
		{
			flag = 1;
			break;
		}
	}
	
	cout << endl << endl;
	
	if(flag == 1)
	{
		cout << key << " is found at index " << i;
	}
	else
	{
		cout << key << " is not found";
	}
	
}
