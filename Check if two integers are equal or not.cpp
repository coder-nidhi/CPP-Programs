#include <iostream>

using namespace std;

int main()
{
    int integer1, integer2;
    cout<<"Enter two integers to check if they are equal or not : ";
    cin>>integer1>>integer2;
    
    if(integer1==integer2){
        cout<<"They are equal"<<endl;
    }
    else
    cout<<"They are not equal"<<endl;
    
    return 0;
}
