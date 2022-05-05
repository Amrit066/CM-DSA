#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr,int i,int n){
    if(i==n-1){
        return true;
    }
    else if(arr[i]>arr[i+1]){
        return false;
    }
    else{
        return isSorted(arr,i+1,n);
    }

}

int main(){
    vector<int> v;
    int n;

    cout<<"Enter total no of elements: ";
    cin>>n;
    cout<<"Enter each element: "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"Array is sorted: "<<isSorted(v,0,n)<<endl;
}