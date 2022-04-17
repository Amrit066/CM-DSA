#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int binaryToDecimal(string s)
{
    int decimal=0,n=int(s.length()-1);

    for(int i=0;i<=n;i++){
        if(s[i] == '1'){
            decimal+=pow(2,n-i);
        }
    }
    return decimal;
}

int main(){
    string s1;

    cout<<"Enter bit string: ";
    getline(cin,s1);

    cout<<"Original bit string: "<<s1<<endl;
    cout<<"String after converting to decimal number: "<<binaryToDecimal(s1)<<endl;

    return 0;
}