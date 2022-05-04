#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

bool compare(pair<int,int> c1,pair<int,int> c2){
    return sqrt((c1.first*c1.first+c1.second*c1.second))<sqrt((c2.first*c2.first+c2.second*c2.second));
}

int main(){
    vector<pair<int,int>> coordinates;
    int n;

    cout<<"Enter total number of cabs: ";
    cin>>n;
    cout<<"Enter coordinates of each cab[x y]:"<<endl;
    for(int i=0;i<n;i++){
        pair<int,int> point;
        cin>>point.first>>point.second;
        coordinates.push_back(point);
    }
    cout<<"Initial cabs co-ordinates: {";
    for(pair<int,int> point:coordinates){
        cout<<"("<<point.first<<","<<point.second<<"),";
    }
    cout<<"\b}"<<endl;

    sort(coordinates.begin(),coordinates.end(),compare);
    cout<<"Final cabs co-ordinates: {";
    for(pair<int,int> point:coordinates){
        cout<<"("<<point.first<<","<<point.second<<"),";
    }
    cout<<"\b}"<<endl;

    return 0;
}