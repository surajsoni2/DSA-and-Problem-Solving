#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number as far as you want sum of numbers";
    cin >> n;

    int sum=0;
    for (int i = 1; i <=n; i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
    
}