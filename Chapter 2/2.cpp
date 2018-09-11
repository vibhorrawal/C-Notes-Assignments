//pogram to display prime numbers between two numbers

#include<iostream>
using namespace std;
int main()
{
	int i,low,high,flag;
	
	cout<<"Enter two Numbers(intervals) : ";
	cin>>low>>high;
	
	cout<<"Prime Numbers between "<<low<<" And "<<high<<" Are : ";
	
	while(low<high)
	{
		flag=0;
		for(i=2;i<=low/2;i++)
		{
			if(low%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<low<<" ";
		}
		++low;
	}
	return 0;
}
