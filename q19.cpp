#include<iostream>
using namespace std;

void spiralPrint(int arr[][100],int n,int m){
    int count=1,row=0,col=0;
    cout<<"Spiral array: ";
    while(count < n+m){
        if(count%4==1){
            for(int j=col;j<m-col;j++){
                cout<<arr[row][j]<<" ";
            }
            row++;
            count++;
        }
        else if(count%4==2){
            for(int i=row;i<n-row+1;i++){
                cout<<arr[i][m-1-col]<<" ";
            }
            col++;
            count++;
        }
        else if(count%4==3){
            for(int j=m-1-col;j>=col-1;j--){
                cout<<arr[n-row][j]<<" ";
            }
            count++;
        }
        else{
            for(int i=n-1-row;i>=row;i--){
                cout<<arr[i][col-1]<<" ";
            }
            count++; 
        }
    }
    
}

int main(){
    int n,m;
    int arr[100][100];

    cout<<"Enter row and column of 2d array: ";
    cin>>n>>m;
    cout<<"Enter elemnts of 2d array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Original array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    spiralPrint(arr,n,m);
    return 0;
}