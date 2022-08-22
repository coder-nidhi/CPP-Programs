#include <iostream>

using namespace std;

int main()
{
    
    
    int n, reverse=0, remainder=0, original;
    
    cout<<"Enter a positive number : ";
    cin>>n;
    
    original=n;
    
    while(n!=0)
    {
        remainder = n % 10;
        reverse = reverse* 10 + remainder;
        n /= 10;
    }

    if (original == reverse)
        cout<<"It is a palindrome";
    else
        cout<<"IT is not a palindrome";
    
    return 0;
}