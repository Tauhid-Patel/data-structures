#include<iostream>

using namespace std;

int main()
{
	char A[] = "Hello";
	int i, j;
	char temp;
	
	cout << "*** REVERSING A STRING ***\n\n";
	cout << "Original string is: " << A;
	cout << endl;
	for(j=0; A[j]!='\0'; j++)
	{
	}
	j=j-1;
	for(i=0; i<j; i++, j--)
	{
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
	cout << "Reverse of the string is: " << A;
}
