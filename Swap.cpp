#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout<<"Enter Value of a : ";
    cin>>a;
    cout<<"Enter Value of b : ";
    cin>>b;
 
    int temp = a;
    a = b;
    b = temp;
    
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b;

    return 0;
}