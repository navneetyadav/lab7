//calling the libraries
#include<iostream>
#include<cmath>
using namespace std;

// recursive function
int rev(int a, int num)
{
	//
	int x, y, z;
	x=a; i=0; z=1;
	//while loop for counting the number of digits
	while(x>0)
	{
		x=x/10;
		y++;
	}
	//changing the position of the digits
	z=a%10;
	num=num+z*(pow(10,y-1));
	a=a/10;
	if(a!=0)
	{
		//recursing the function
		rev(a,num);
	}
	else
	{
		
		return numr;
	}
}

//calling the main function
int main()
{
	//declaring the  variables
	int num, revnum;
	//ask user to enter a random number
	cout<<"Enter a random numver"<<endl;
	cin>>num;
	//calling the user defined function
	revnum=rev(num, 0);
	//checking if number is palindrome or not
	if(revnum==num)
	{
		cout<<"The number you entered is palindrome"<<endl;
	}
	else
	{
		cout<<"The number is not palindrome."<<endl;
	}
		return 0;
}
