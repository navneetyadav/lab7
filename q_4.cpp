//calling the library
#include<iostream>
using namespace std;

// recursive function to print the sum
int sum(int a, int b, int sm){
	//checking condition
	if(b<=a)
	{
		//adding numbers
		sum=sm+b;
		//recursing the  function again
		sum(a, b+1, sm);
	}
	else
	{
		//displaying sum
		cout<<"THE SUM OF THE NUMBERS BETWEEN 1 AND  "<<a<<" = "<<sm<<endl;
		return 1;
	}
}

//declaring driver function
int main() 
{
	//declaring variables for performing the task
	int n;
	//ask the  user to enter limit
	cout<<"Enter the number upto which the sum has to be calculated"<<endl;
	cin>>n;
	//calling the recuring function
	sum(n, 1, 0);
	return 0;
}
