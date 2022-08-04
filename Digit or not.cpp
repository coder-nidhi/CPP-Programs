#include <iostream>

using namespace std;

int main()
{
    int ch;
    
    cout<<"Enter any digit : ";
    cin>>ch;
    
    if(ch>='0' && ch<='9')
	{
	    cout<<"It is a digit";
	}
	else{
	    cout<<"It is not a digit";
	}
    return 0;
}
