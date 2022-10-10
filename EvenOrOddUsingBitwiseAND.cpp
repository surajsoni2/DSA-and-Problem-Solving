#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"enter a number to check it is even or odd"<<endl;
    cin>>n;

    if (n&1)
    {
        cout<<n<<" is odd number";  
    }
    else{
        cout<<n<<" is even number";  
        
    }
    
}