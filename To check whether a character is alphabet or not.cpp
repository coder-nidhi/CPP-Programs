#include <iostream>

using namespace std;

int main()
{
    char ch;
    
    cout<<"Enter any character : ";
    cin>>ch;

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout<<"Character is an ALPHABET";
    }
    else
    {
        cout<<"Character is NOT AN ALPHABET";
    }
    return 0;
}
