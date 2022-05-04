#include<iostream>
using namespace std;

int getIthBit(int n,int i){
    return (n>>i-1)&1;
}

int main(){
    int n1,i;

    cout<<"Enter the number: ";
    cin>>n1;
    cout<<"Enter the bit position: ";
    cin>>i;
    cout<<"i-th bit of "<<n1<<" is "<<getIthBit(n1,i)<<endl;
    return 0;
}