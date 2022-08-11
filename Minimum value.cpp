#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    
    cout<<"Enter three numbers to find the minimum value : ";
    cin>>num1>>num2>>num3;

    if(num1<=num2 && num1<=num3){
        cout<<"Minimum value = "<<num1;
    }
    else if(num2<=num1 && num2<=num3){
        cout<<"Minimum value = "<<num2;
    }
    else{
        cout<<"Minimum value = "<<num3;
    }
    return 0;
}
