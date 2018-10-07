//calling the library
#include<iostream>
using namespace std;

//  function to print even numbers
int even(int a, int b)
	{
	if(a<=b)
		{
		if(a%2==0){
			//printing the number
			cout<< a<<endl;
		}
		//reccursing the function
		even(a+1, b);
	}
	//terminating recursive function
	else
	{
		return 1;
	}
}

// function to print odd numbers
int odd(int a, int b){
	
	if(a<=b)
		{
		if(n1%2!=0){
			//printing the number
			cout<< n1<<endl;
		}
		//reccursing the function
		odd(a+1, b);
	}
	//terminating recursive function
	else
	{
		return 1;
	}
}

//calling the main  function
int main()
{
	// variables for performing the task
	int n1, n2, x;
	//asking user to enter upper and lower limit
	cout<<"Enter the start point"<<endl;
	cin>>n1;
	cout<<"Enter the end point"<<endl
	cin>>n2;
	//asking user for choice
	cout<<"1. Print all even numbers between "<<n1<<" and "<<n2<<"."<<endl;
	cout<<"2. Print all odd numbers between "<<n1<<" and "<<n2<<"."<<endl;
	cout<<"WHAT IS YOYR CHOICE?"<<endl;
	cin>>x;
	//checking condition
	if(x==1)
	{
		//calling function for even numbers
		even(n1, n2);
	}
	else if(x==2)
	{
		//calling function for odd numbers
		odd(n1, n2);
	}
	else
	{
		cout<<"Invalid entry!!!"<<endl;
	}
	
	return 0;
}
