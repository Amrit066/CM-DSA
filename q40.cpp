#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector<int> arr,int i,int n,int key){
   if(i == n){
       return -1;
   } 
   if(key==arr[i]){
       return i;
   }
   else{
       return firstOccurrence(arr,i+1,n,key);
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

    cout<<"Element-"<<key<<" first occurs at index-"<<firstOccurrence(v,0,n,key)<<endl;
}