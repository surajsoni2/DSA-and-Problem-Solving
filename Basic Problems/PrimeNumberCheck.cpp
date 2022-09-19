#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number to check it is prime or not";
    cin >> n;

    if (n == 2)
    {
        cout << "2 is Prime number";
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if(n % i == 0) {
                 cout << n << " is not Prime";
            return 0;
            }
        }
        cout << n << " is Prime";
    }
}