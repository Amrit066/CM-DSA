#include<iostream>
#include<vector>
using namespace std;

vector<int> WavePrint(int n, int m, vector<vector<int>> arr)
{
    int count=0;
    vector<int> warr;

    cout<<"Wave array: ";
    while(m-1>=0){
        m--;
        if(count==0){
            for(int i=0;i<n;i++){
                cout<<arr[i][m]<<" ";
                warr.push_back(arr[i][m]);
            }
            count++;
        }
        else{
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][m]<<" ";
                warr.push_back(arr[i][m]);
            }
            count--;
        }
    }

    return warr;
}

int main(){
    vector<vector<int>> arr;
    int n,m;

    cout<<"Enter row and column: ";
    cin>>n>>m;
    
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }

    cout<<"Original Array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    WavePrint(n,m,arr);

    return 0;
}