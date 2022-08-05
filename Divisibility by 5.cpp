//To check if the number is divisible by 5

#include <iostream>

using namespace std;

int main()
{
    int number;
    
    cout<<"Enter any number : ";
    cin>>number;
    
    if(number%5==0){
        cout<<"It is divisible by 5"<<endl;
    }
    else{
    cout<<"It is not divisible by 5"<<endl;
    }
    
    return 0;
}