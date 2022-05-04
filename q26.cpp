#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare1(pair<string,int> c1,pair<string,int> c2){
    return c1.second<c2.second;
}

bool compare2(pair<string,int> c1,pair<string,int> c2){
    return c1.first<c2.first;
}

int main(){
    vector<pair<string,int>> itemsList;
    int n;
    string criteria;

    cout<<"Enter total number of items: ";
    cin>>n;
    cout<<"Enter itemsList of each items[name price]:"<<endl;
    for(int i=0;i<n;i++){
        pair<string,int> item;
        cin>>item.first>>item.second;
        itemsList.push_back(item);
    }
    cout<<"Enter criteria for sorting[name or price]: ";
    cin>>criteria;
    cout<<"Initial items list : {";
    for(pair<string,int> item:itemsList){
        cout<<"("<<item.first<<","<<item.second<<"),";
    }
    cout<<"\b}"<<endl;
    if(criteria=="price")
        sort(itemsList.begin(),itemsList.end(),compare1);
    else    
        sort(itemsList.begin(),itemsList.end(),compare2);
    cout<<"Final items list: {";
    for(pair<string,int> item:itemsList){
        cout<<"("<<item.first<<","<<item.second<<"),";
    }
    cout<<"\b}"<<endl;

    return 0;
}