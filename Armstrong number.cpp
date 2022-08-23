#include <iostream>

using namespace std;

int main()
{
    int num, originalNum, rem, result = 0;
    cout<<"Enter a three-digit integer: ";
    cin>>num;
    originalNum = num;

    while (originalNum != 0) 
    {
        rem = originalNum % 10;
        
       result += rem * rem * rem;
        
       originalNum /= 10;
    }

    if (result == num)
        cout<<"It is an Armstrong number.";
    else
        cout<<"It is not an Armstrong number.";

    return 0;
}