#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    int r=0,s=0,t=0,ss=0;
    if(sr-1>=0)
        s+=v[sr-1][ec];
    if(sc-1>=0)
        t+=v[er][sc-1];
    if(sc-1>=0 && sr-1>=0)
        r+=v[sr-1][sc-1];

    ss=v[er][ec]-s-t+r;

    return ss;

}

int findMinMaxSubMatrix(vector<vector<int>> matrix,int m,int n){
    // vector<pair<int,int>> coord;
    int mmsum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int s1,s2,s3,s4,tempmm;
            s1=matrix[i][j];
            s2=matrix[i][n-1]-s1;
            s3=matrix[m-1][j]-s1;
            s4=matrix[m-1][n-1]-s1-s2-s3;

            tempmm=min({s1,s2,s3,s4});
            mmsum=max(mmsum,tempmm);
        }
    }
    return mmsum;
}

int prefixSum2D(vector<vector<int>> matrix, int m, int n){
    int minMango;
    int sr,sc,er,ec,ss=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int sum=0;
            if(i-1>=0){
                sum+=matrix[i-1][j];
            }
            if(j-1>=0){
                sum+=matrix[i][j-1];
            }
          if(i-1>=0 && j-1>=0){
            sum-=matrix[i-1][j-1];
          }
            matrix[i][j]+=sum;
        }
    }
    cout<<"Prefix-sum matrix: "<<endl;
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
    }
    minMango=findMinMaxSubMatrix(matrix,m,n);
    cout<<"Minimun mangoes for Rahul is "<<minMango<<endl;

    cout<<"Enter index no of start row: ";
    cin>>sr;
    cout<<"Enter index no of start column: ";
    cin>>sc;
    cout<<"Enter index no of end row: ";
    cin>>er;
    cout<<"Enter index no of end column: ";
    cin>>ec;

    ss=sum(matrix,sr,sc,er,ec);
    
    return ss;
}

int main(){
    vector<vector<int>> matrix;
    int r,c;
    int sum;

    cout<<"Enter row and column of matrix: ";
    cin>>r>>c;
    cout<<"Enter elements of matrix"<<endl;
    for(int i=0;i<r;i++){
        vector<int> temp;
        for(int j=0;j<c;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }
    cout<<"Original matrix: "<<endl;
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
        cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
    }
    sum=prefixSum2D(matrix,r,c);
    cout<<"Sum of the sub-matrix is "<<sum<<endl;

    return 0;
}