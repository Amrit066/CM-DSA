#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    vector<pair<int,int>> coords;

    for(int i=0;i<arr.size();i++) {
        for(int j=0;j<arr[0].size();j++){
            if(arr[i][j]==0){
                pair<int,int> p;
                p.first=i;
                p.second=j;
                coords.push_back(p);
            }
        }
    }
    for(pair<int,int> p:coords){
        for(int j=0;j<arr[0].size();j++){
            arr[p.first][j]=0;
        }
        for(int i=0;i<arr.size();i++){
            arr[i][p.second]=0;
        }
    }

    return arr;
    
}

int main(){
    vector<vector<int>> v;
    int r,c;

    cout<<"Enter rows and colums of matrix: ";
    cin>>r>>c;;
    cout<<"Enter elements of matrix:"<<endl;
    for(int i=0;i<r;i++){
        vector<int> temp;
        for(int j=0;j<c;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    v=makeZeroes(v);
    cout<<"Original matrix:"<<endl;
    for(vector<int> x:v){
        for(int y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    cout<<"Rotated matrix:"<<endl;
    for(vector<int> x:v){
        for(int y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}