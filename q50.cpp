#include <iostream>
#include<vector>
using namespace std;
void alternativeSorting(vector<int> &v,int n){
  int i_min,i_mx,mx;
  i_min=0;
  i_mx=n-1;
  mx=v[n-1]+7;
  for(int i=0;i<n;i++){
    if(i&1){
      v[i]=v[i]+(v[i_min]%mx)*mx;
      i_min++;
    }
    else{
      v[i]=v[i]+(v[i_mx]%mx)*mx;
      i_mx--;
    }
  }
  for(int i=0;i<n;i++){
    v[i]=v[i]/mx;
  }
  
}
int main() {
  vector<int> v{1,2,3,4,5,6,7,8,9,10};
  int n=10;
  
  cout<<"Array Before:"<<endl;
  for(int x:v){
    cout<<x<<endl;
  }
  alternativeSorting(v,n);
  cout<<"Array After:"<<endl;
  for(int x:v){
    cout<<x<<endl;
  }
  return 0;
}