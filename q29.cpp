#include<iostream>
using namespace std;

int main(){
    int n1;

    cout<<"Enter the number: ";
    cin>>n1;
    if(n1&1)
        cout<<n1<<" is odd."<<endl;
    else    
        cout<<n1<<" is even."<<endl;
    return 0;
}