#include <iostream>
using namespace std;

 int pow(int base, int p)
{
   if(p==0){
			return 1;
		}
		else{
			return base*pow(base,p-1);
		}
}
 

int main()
{
    int base, p, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> p;

    result = pow(base, p);
    cout << base << "^" << p << " = " << result;

    return 0;
}
