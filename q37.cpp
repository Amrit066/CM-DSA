#include<iostream>
using namespace std;

int earthLevel(int k)
{
    int count=0;
    while(k>0){
        if(k&1){
            count++;
        }
        k=k>>1;
    }

    return count;
}

int main(){
    int k;

    cout<<"Enter value of k: ";
    cin>>k;

    cout<<"It will take "<<earthLevel(k)<<"-steps to reach at "<<k<<endl;

    return 0;
}