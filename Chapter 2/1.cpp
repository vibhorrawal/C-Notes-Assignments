//Program to ask temperature in celsius and display in celsiius//

#include<iostream>
using namespace std;

int main()
{
	int f,c;
	cout<<"Enter Temperature in Farhenheit : ";
	cin>>f;
	
	c = ((5/9)*((f)-32));
	
	cout<<"Celsius temperature is : "<<c<<endl;
	
	return 0;
}
