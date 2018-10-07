#include<iostream>
using namespace std;
void print(int n)
{	if(n>0)
	{
		print(n-1);
		cout<<n<<endl;

         }
}
int main()
{
int a;
cout<<"enter the number   :"<<endl;
cin>>a;
cout<<"the natural number series is :"<<endl;
print(a);
return 0;
}
