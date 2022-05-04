#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n;

    cout<<"Enter total elements of array: ";
    cin>>n;
    cout<<"Enter elemets: "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"array is: {";
    for(int x:v){
        cout<<x<<",";
    }
    cout<<"}"<<endl;
    int y=v[0];
    for(int i=1;i<n;i++){
        y^=v[i];
    }
    cout<<"Unique element is "<<y<<endl;

    return 0;
}