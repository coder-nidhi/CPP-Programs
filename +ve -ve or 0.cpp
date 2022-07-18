#include <iostream>

using namespace std;

int main()
{
    int a;
    
    cout<<"Enter a number" <<endl;
    cin>>a;
    
    if(a>0)
    {
        cout<<"It is a +ve number" <<endl;
    }
    else if(a<0)
    {
        cout<<"It is a -ve number" <<endl;
    }
    else
    {
        cout<<"It is zero" <<endl;
    }
    
    return 0;
}
