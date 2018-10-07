//calling the library
#include<iostream>
using namespace std;

//declaring recursive function
int factorial(int a, int b, int fctr)
	{
		if(b<=a)
	{
		//multiplying the  number to find its  factorial
		fctr=fctr*b;
		//calling function again
		factorial(a, b+1, fctr);
	}
	else
	{
		cout<<"Factorial of "<<a<<" = "<<fctr<<endl;
		return 1;
	}
}

//calling the main function
int main()
{
	//declaring variables
	int num;
	//asking user to enter number
	cout<<"Enter number for calculating the factorial."<<endl;
	cin>>num;
	//calling the user defined factorial function
	factorial(num, 1, 1);
	return 0;
}
