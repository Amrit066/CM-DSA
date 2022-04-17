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

bool checkPermutation(string s1, string s2){
    s1=sort(s1);
    s2=sort(s2);
    if(s1.length() != s2.length()){
        return false;
    }
    else{
        for(int i=0;i<s1.length();i++){
            if(s1[i] != s2[i]){
                return false;
            }
            else{
                continue;
            }
        }
    }
    return true;
}

int main(){
    string s1,s2;
    
    cout<<"Input first string: ";
    getline(cin,s1);
    cout<<"Input second string: ";
    getline(cin,s2);

    cout<<s1<<" is permutation of "<<s2<<" ? "<<endl;
    cout<<"Ans:- "<<checkPermutation(s1,s2)<<endl;

    return 0;
}