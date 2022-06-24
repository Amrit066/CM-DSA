#include <iostream>
#include<vector>
using namespace std;

void helper(vector<string>& vs,string s,int n,int i){
  if(s[i-1]=='1' && s[i]=='1' && i-1>=0){
    return;
  }
  if(i==n-1){
        vs.push_back(s);
        return;
    }

    helper(vs,s+"0",n,i+1);
    helper(vs,s+"1",n,i+1);
    return;
    
}
vector<string> binaryStrings(int n){
   vector<string> vs;
   string s="";
   int i=-1;
   helper(vs,s,n,i);
   return vs;
    
}

int main() {
  vector<string> vs;
  vs=binaryStrings(4);
  for(string x:vs){
    cout<<x<<endl;
  }
  return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

vector<string> v;

void helper(string str,int n,int i){
    if(i==n){
        v.push_back(str);
        return;
    }
    string s1= str;
    s1.push_back('0');
    helper(s1,n,i+1);

    if(i>0 && str[i-1]=='0'){
       str.push_back('1');
       helper(str,n,i+1);
    }
    else if(i==0){
        str.push_back('1');
        helper(str,n,i+1);
    }

    return;
}

vector<string> binaryStrings(int n){
     v.clear();
     string str;
     helper(str,n,0);
     return v;

}*/