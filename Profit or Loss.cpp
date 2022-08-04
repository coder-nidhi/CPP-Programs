#include <iostream>

using namespace std;

int main()
{
    int unit_price, sales_amount, amount;
    
    cout<<"Enter unit price : ";
    cin>>unit_price;
    
    cout<<"Enter sales amount : ";
    cin>>sales_amount;
    
    if(sales_amount>unit_price){
        amount = sales_amount - unit_price;
        
        cout<<"Profit of "<<amount;
    }
    else{
        amount = unit_price - sales_amount;
        cout<<"Loss of "<<amount;
        
    }
    return 0;
}
