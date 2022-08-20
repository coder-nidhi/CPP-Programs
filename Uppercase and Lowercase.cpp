#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout<<"Enter any character: ";
    cin>>ch;

    if(ch >= 'A' && ch <= 'Z')
    {
        cout<<"UPPERCASE alphabet";
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cout<<"lowercase alphabet";
    }
    else
    {
        cout<<"not an alphabet";
    }


    return 0;
}