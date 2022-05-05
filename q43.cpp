#include<iostream>
#include<vector>
using namespace std;

void helper(int n,vector<int> &v){
    if(n==0){
        return;
    }
    helper(n-1,v);
    v.push_back(n);
}

vector<int> increasingNumbers(int N) {
    vector<int> store;
    helper(N,store);
    return store;
}

int main(){
    vector<int> indx;
    int N;

    cout<<"Enter number: ";
    cin>>N;

    indx=increasingNumbers( N);
    cout<<"In increasing order-> ";
    for(int x:indx){
        cout<<x<<", ";
    }
}