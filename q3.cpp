#include<iostream>
#include<vector>
using namespace std;


int maxSumSubarray(vector<int> A){
    int negMax=0,negMin=A[0],flag=0;
    int cs=0,largest=0;

    for(int i=0;i<A.size();i++){
        if(A[i]<negMin){
            negMin=A[i];
        }
    }
    // cout<<negMin<<endl;
    negMax=negMin;

    for(int i=0;i<A.size();i++){
        if(A[i]>negMax && A[i]<0){
            negMax=A[i];
        }
        cs+=A[i];
        if(cs<0){
            cs=0;
        }
        if(cs>largest){
            largest=cs;
        }
        if(A[i]>=0){
            flag=1;
        }
    }
    if(flag==0){
        largest=negMax;
    }
    // cout<<negMax<<endl;

    return largest;
}


int main(void){
    vector<int> arr;
    int n;
    
    cout<<"Enter number elements of array"<<endl;
    cin>>n;
    cout<<"Enter each element of array"<<endl;
    for(int i=0;i<n;i++){
        int j=0;
        cin>>j;
        arr.push_back(j);
    }
    cout<<"Sum of largest subarray is "<<maxSumSubarray(arr);

    return 0;
}