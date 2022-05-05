#include<iostream>
#include<vector>
using namespace std;

void allocc(vector<int> v1,int i,int key,vector<int> &v2){
    if(i==v1.size()){
        return ;
    }
    if(v1[i]==key){
        v2.push_back(i);
    }
    allocc(v1,i+1,key,v2);
}
vector<int> findAllOccurences(int k, vector<int> v){
    vector<int> indx;
    allocc(v,0,k,indx);
  return indx;
}

int main(){
    vector<int> v,indx;
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

    indx=findAllOccurences(key,v);
    cout<<"Element-"<<key<<" occurs at indexes-{";
    for(int x:indx){
        cout<<x<<", ";
    }
    cout<<"}";
}