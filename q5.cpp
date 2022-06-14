#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    pair<int,int> p;
    int m,i,j;
    m=arr[arr.size()-1];
    i=0;
    j=arr.size()-1;
    while(i<j){
        if (x-(arr[i]+arr[j])<m){
            m=x-(arr[i]+arr[j]);
            p.first=arr[i];
            p.second=arr[j];
            i++;
        }
        if (x-(arr[i]+arr[j])>m){
            j--;
        }
    }


}

int main(void){
    vector<int> arr;
    pair<int,int> p;
    int n,x;

    cout<<"Enter the element to be searched:";
    cin>>x;
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Sorted array is: "<<endl;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    p=closestSum(arr,x);

    cout<<"Elements- "<<p.first<<" & "<<p.second<<" adds up closest to "<<x<<endl;
    return 0;
}