#include<iostream>
#include<vector>
using namespace std;

int wayOfTiling(int n, int m){
    if(n<0 ||m<0){
        return 0;
    }
    if((n==0 && m==m)||(n==0 && m==1)){
        return 1;
    }
    int m1=wayOfTiling(n-1,m);
    int m2=wayOfTiling(n-m,m);
    return m1+m2;
}

int main(){
    int n,m;

    cout<<"Enter dimension of floor: ";
    cin>>n>>m;

    cout<<"Total ways= "<<wayOfTiling(n,m)<<endl;

    return 0;
}