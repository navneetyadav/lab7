//calling the libraries
#include<iostream>
#include<cmath>
using namespace std;

//writing the recursive function
int rev(int a, int num)
{
	//declaring the field variables
	int x, y, z;
	
	x=a; i=y; z=1;
	//while loop for counting  the number of digits
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
		
		cout<<"the reverse of the number is = "<<numr<<endl;

		return 1;
	}
}

//calling the main  function
int main()
{
	//declaring variables for the task
	int nm;
	//asking user to enter a number
	cout<<"Enter a number."<<endl;
	cin>>nm;
	//calling function to perform the task
	rev(nm, 0);
	return 0;
}
