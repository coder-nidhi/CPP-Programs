#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout<<"Enter to numbers : "<<endl;
    cin>>a>>b;
    
    char op;
    
    cout<<"Choose any operator you want : "<<endl;
    cin>>op;
    
    switch(op){
        case '+' : cout<<(a+b)<<endl;
        break;
        
        case '-' : cout<<(a-b)<<endl;
        cout<<(a-b)<<endl;
        break;
        
        case '*' : cout<<(a*b)<<endl;
        break;
    
        case '/' : cout<<(a/b)<<endl;
        break;
        
        case '%' : cout<<(a%b)<<endl;
        break;
        
        default : cout<<"Please enter a valid operation"<<endl;
    }
    return 0;
}
