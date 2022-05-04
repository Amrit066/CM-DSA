#include<iostream>
using namespace std;

int setIthBit(int &n,int i){
    return n|(1<<i-1);
}

int main(){
    int n1,i;

    cout<<"Enter the number: ";
    cin>>n1;
    cout<<"Enter the bit position: ";
    cin>>i;
    cout<<"Number after setting "<<i<<"-th bit is "<<setIthBit(n1,i)<<endl;
    return 0;
}