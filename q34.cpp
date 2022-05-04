#include<iostream>
using namespace std;

int clearIBits(int n,int i){
    n=n>>i;
    return n<<i;
}

int main(){
    int n1,i;

    cout<<"Enter the number: ";
    cin>>n1;
    cout<<"Enter the bit position: ";
    cin>>i;
    cout<<"Number after clearing "<<i<<"  bits is "<<clearIBits(n1,i)<<endl;
    return 0;
}