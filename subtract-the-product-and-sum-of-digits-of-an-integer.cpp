//subtract the sum and product of an integer given
#include<iostream>
using namespace std;

int main()
{
    int n, x, y, product = 1, sum = 0, number;
    cout << "Enter a number : " ;
    cin >> n ;

    while (n!=0)
    {
        x = n%10; //last digit

        product = product * x;
        sum = sum + x; 

        n = n/10; //removing the last digit
    }
    number = product - sum ;
    cout << "The product is " << product << endl ;
    cout << "The sum is " << sum << endl ;

    cout << " Product - Sum : " << number ;
    
}
