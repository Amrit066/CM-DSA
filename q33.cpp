#include<iostream>
using namespace std;

int updateIthBit(int n,int i,int d){
    int x=n^(1<<i-1);
    return x|(1<<i-1);
}

int main(){
    int n1,i,val;

    cout<<"Enter the number: ";
    cin>>n1;
    cout<<"Enter the bit position: ";
    cin>>i;
    cout<<"Enter the bit to be updated with[0 or 1]: ";
    cin>>val;
    cout<<"Number after updating "<<i<<"-th bit is "<<updateIthBit(n1,i,val)<<endl;
    return 0;
}