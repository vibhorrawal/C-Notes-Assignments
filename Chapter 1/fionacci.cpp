//Program of fibonacci series
#include<iostream>
using namespace std;

int main()
{
	int a=0,b=1,n,next;
    cout<<"Enter the Number of terms in series : ";
    cin>>n;
    
    cout<<"Fibonacci series is : ";
    
    for(int i=0;i<=n;i++)
    {
    	if(i==0)
		{
			cout<<" "<<a;
			continue;	
		}
		if(i==1)
		{
			cout<<" "<<b ;
			continue;	
		}
		next=a+b;
		a=b;
		b=next;
		
		cout<<" "<<next; 
	}
	return 0;
}
