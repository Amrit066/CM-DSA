#include <iostream>
#include<vector>
using namespace std;

int helper(vector<int> v, int s, int e,int key){
    if(s>=e)
        return -1;
    int mid=(s+e)/2;
    if(v[mid]==key)
      return mid;
    if(v[mid]>=v[s]){
      return v[s]<=key && key<v[mid]?helper(v,s,mid,key):helper(v,mid+1,e,key);
    }
    else{
      return v[mid]<key && key<=v[e]?helper(v,mid,e,key):helper(v,s,mid-1,key);
    }
}
int rotatedArraySearch(vector<int> v, int x)
{
    return helper(v,0,v.size(),x);
    
}
int main() {
  vector<int> v{1,2,3,4,5,6,7,8,9};
  int key= 10;
  cout<<"Found At: "<<rotatedArraySearch(v,key)<<endl;
}