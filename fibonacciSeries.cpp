#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number as far as you want Fibonacci Series";
    cin >> n;

    int first = 0, second = 1;

    for (int i = 0; i < n; i++)
    {
        cout << first << " ";
        int temp = first;

        first = second;

        second = temp + second;
    }
}