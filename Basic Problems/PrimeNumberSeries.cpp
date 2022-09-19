#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to print n number of prime numbers";
    cin >> n;

    for (int j = 0; j <= n; j++)
    {
        if (j==0 || j==1)
        {
            continue;
        }
        else
        {
            int i;
            for (i = 2; i < j; i++)
            {
                if (j % i == 0)
                {
                    break;
                }
            }
            if (i==j)
            {
                cout << j << " ";
            }  
        }
    }
}