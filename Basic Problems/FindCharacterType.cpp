// Problem - Take a character as user input and output its Character Type like as - (i/p - 'm' o/p - LowerCase Alphabate)

#include<iostream>
using namespace std;

int main(){
    char character;

    cin>>character;
    
    (character>='0' && character<='9')?cout<<"Numeric":(character>='a' && character<='z')?cout<<"LowerCase":(character>='A' && character<='Z')?cout<<"Uppercase":cout<<"Special Character";
}