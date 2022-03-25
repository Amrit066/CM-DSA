#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int> A, int Val){
    int lowerBound=-1;

    for(int i=0;i<A .size();i++){
        if(A[i]>lowerBound && A[i]<=Val){
            lowerBound=A[i];
        }
    }

    return lowerBound;
}

int main(void){
    vector<int> arr;
    int n,k;
    
    cout<<"Enter number elements of array"<<endl;
    cin>>n;
    cout<<"Enter each element of array"<<endl;
    for(int i=0;i<n;i++){
        int j=0;
        cin>>j;
        arr.push_back(j);
    }
    cout<<"Enter value "<<endl;
    cin>>k;
    
    cout<<"Lower bound for "<<k<<" is " <<lowerBound(arr,k);

    return 0;
}