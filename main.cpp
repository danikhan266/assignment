#include <iostream>

using namespace std;

int main()
{
    int a;
    float b;

    cout<<"C++ program to convert dollar into rupees \n" <<endl;
    cout<<"Enter dollar = ";
    cin>>a;
    b=a*156.75; // 1$ = 156.75 pakistan rupee
    cout<<"Rs. is = "<<b<<endl;

    return 0;

    }
