calling the library
#include<iostream>
using namespace std;

// recursive function
int smd(int a, int sum)
	{
	int b;
	//extracting and adding the digits
	b=a%10;
	sum=sum+x;
	a=a/10;
	if(a!=0)
	{
		//recursing the funcyion
		smd(a,sum);
	}
	else
	{
		//displaying number
		cout<<"the sum of the digits of the number is  = "<<sum<<endl;
		return 1;
	}
}

//calling the main function
int main()
{
	//declaring the  variables
	int n;
	//asking the  user to enter a number
	cout<<"Enter any number"<<endl;
	cin>>num;
	//calling the user defined smd function
	smd(n, 0);
		return 0;
}
