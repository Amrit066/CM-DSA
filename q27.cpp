#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
      int n,i,l,sr,er,temp,count;
      n=matrix.size();
      count=0;
      i=0;
      l=0;
      sr=0;
      er=n-1;
      while(l<n/2){
        i=0;
        while(i<(er-sr)){
          temp=matrix[sr][sr+i];
          count=0;
          for(int k=0;k<4;k++){
              if(count==0){
                  int t;
                  t=matrix[sr+i][er];
                  matrix[sr+i][er]=temp;
                  temp=t;
              }
              if(count==1){
                  int t;
                  t=matrix[er][er-i];
                  matrix[er][er-i]=temp;
                  temp=t;
              }
              if(count==2){
                  int t;
                  t=matrix[er-i][sr];
                  matrix[er-i][sr]=temp;
                  temp=t;
              }
              if(count==3){
                  matrix[sr][sr+i]=temp;
              }
              count++;
          }
          i++;
        }
        sr++;
        er--;
        l++;
      }
      
}

int main(){
  vector<vector<int>> matrix;
  int n;

  cout<<"Enter order of matrix: ";
  cin>>n;
  cout<<"Enter element of matrix:"<<endl;
  for(int i=0;i<n;i++){
    vector<int> temp;
    for(int j=0;j<n;j++){
      int t;
      cin>>t;
      temp.push_back(t);
    }
    matrix.push_back(temp);
  }
  
  cout<<"Original Matrix:"<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  rotate(matrix);
  cout<<"Rotated Matrix:"<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
