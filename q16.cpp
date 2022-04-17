#include<iostream>
#include<cstring>
using namespace std;

string sort(string s){
    for(int i=0;i<s.length()-1;i++){
        for(int j=0;j<s.length()-1-i;j++){
            if(s[j]>s[j+1]){
                char temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    return s;
}

string removeDuplicates(string s){
    string s1="";
    int arr[26]={};

    for(int i=0;i<int(s.length());i++){
        if(s[i] != '\n'){
          if(s[i]>='A' && s[i]<='B' ){
            if(arr[(int(s[i])+32)%97]){
                continue;
            }
            else{
               arr[(int(s[i])+32)%97]++;
            }
        }
        else{
            if(arr[int(s[i])%97]){
                continue;
            }
            else{
               arr[int(s[i])%97]++;
            }
        }
      }
      else{
        continue;
      }
    }

    for(int i=0;i<26;i++){
        if(arr[i]){
            s1+=char(i+97);
        }
        else{
            continue;
        }
    }
    s1=sort(s1);
    return s1;
}
int main(){
    string s1;

    cout<<"Enter string: ";
    getline(cin,s1);

    cout<<"original String: "<<s1<<endl;
    cout<<"New String in sorted order: "<<removeDuplicates(s1)<<endl;
    return 0;
}