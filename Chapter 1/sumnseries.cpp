//program of sum of first n numbers
#include<iostream>
using namespace std;

int main()
{
	int n,sum=0;
	cout<<"Enter the number of terms of series to add : ";
	cin>>n;
	
	sum=(n*(n+1))/2;
    cout<<"Sum is : "<<sum;
	
	return 0;	
}
