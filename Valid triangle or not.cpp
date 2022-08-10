#include <iostream>

using namespace std;

int main()
{
    int s1, s2, s3, sum; 
  
    cout<<"Enter three angles of triangle : ";  
	cin>>s1>>s2>>s3;

    sum = s1 + s2 + s3; 
 
    if(sum == 180 && s1!=0 && s2!=0 && s3!=0) 
    {
        cout<<"Triangle is valid.";
    }
    else
    {
        cout<<"Triangle is not valid.";
    }
    
    return 0;
}
