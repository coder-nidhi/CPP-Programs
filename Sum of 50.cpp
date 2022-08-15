#include <iostream>

using namespace std;

int main()
{
    int  num, sum = 0;
 
    for (num = 1; num <= 50; num++)
    {
        sum = sum + num;
    }
    cout<<"Sum = "<<sum;
    
    return 0;
}
