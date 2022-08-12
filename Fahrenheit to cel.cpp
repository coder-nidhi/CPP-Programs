#include <iostream>

using namespace std;

int main()
{
    float f, c;
    
    cout<<"Fahrenheit = ";
    cin>>f;
    
    c=(f-32)*5/9;
    
    cout<<"Temperature in cel is "<<c;
    
    return 0;
}
