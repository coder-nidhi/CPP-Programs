#include <iostream>

using namespace std;

int main()
{
    char ch;
    int num;
    cout<<"Enter an integer value or a character : " <<endl;
    cin>>ch;
    
    if(ch>='a' && ch<='z')
    {
        cout<<"Lower case";
    }
    
    else if(ch>='A' && ch<='Z')
    {
        cout<<"Upper case";
    }
    
    else if(num>=0 && num<=9)
    {
        cout<<"Numeric";
    }
    return 0;
}

