#include<iostream>
#include<vector>
using namespace std;

int lastOccurrence(vector<int> arr,int i,int key){
   if(i == -1){
       return -1;
   } 
   if(key==arr[i]){
       return i;
   }
   else{
       return lastOccurrence(arr,i-1,key);
   }

}

int main(){
    vector<int> v;
    int n,key;

    cout<<"Enter total no of elements: ";
    cin>>n;
    cout<<"Enter each element: "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter elements to be searched: ";
    cin>>key;

    cout<<"Element-"<<key<<" first occurs at index-"<<lastOccurrence(v,n-1,key)<<endl;
}