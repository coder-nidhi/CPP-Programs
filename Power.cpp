#include <iostream>

using namespace std;

int main()
{
    int a, b;
    
    cout<<"Enter a number a : "<<endl;
    cin>>a;
    
    cout<<"Enter power of a that is b : "<<endl;
    cin>>b;
    
    int ans = 1;
    
    for(int i=1;i<=b;i++){
        ans = ans*a;
    }
    
    cout<<"Answer is : "<<ans<<endl;
    
    return 0;
}
