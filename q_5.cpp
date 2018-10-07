//calling the library
#include<iostream>
using namespace std;

// recursive function for finding the sum of even numbers
int even(int a, int b, int evnsm)
{
	if(a<=b)
		{
		//checking if the number is even
		if(n1%2==0){
			//adding the even numbers 
			evnsm=evnsm+a;
		}
		//recurring the function
		even(a+1, b, evnsm);
}
	else
	{
		cout<<"The sum of all even numbers is = "<<sumeven<<endl;
		
		return 1;
	}
}

// recursive function for finding the sum of even numbers
int odd(int a, int b, int odsm)
{
	if(a<=b)
		{
		//checking if the number is odd number
		if(a%2!=0)
		{
			//adding the odd numbers
			odsm=odsm+n1;
		}
		//recurring the function
		odd(a+1, b, odsm);
	}
	else
	{
		
		cout<<"The sum of all odd numbers is = "<<sumodd<<endl;
		
		return 1;
	}
}
//calling the main function
int main()
{
	//declaring the variables for performing the task
	int n1, n2, x;
	//asking user to enter upper and lower limit
	cout<<"Enter the starting number"<<endl;
	cin>>n1;
	cout<<"Enter the ending point"<<endl;
	//accepting value
	cin>>n2;
	//asking user to enter choice
	cout<<"1. Sum of all even numbers between start and end  point."<<endl;
	cout<<"2. Sum of all odd numbers between start and end  point."<<endl;
	cout<<"Enter your preference."<<endl;
	cin>>x;
	//checking the  value of the choice
	if(x==1)
	{
		//calling the function for even sum
		even(n1, n2, 0);
	}
	else if(x==2)
	{
		//calling the function for odd sum
		odd(n1, n2, 0);
	}
	else
	{
		cout<<"Invalid entry."<<endl;
	}
	
	return 0;
}
