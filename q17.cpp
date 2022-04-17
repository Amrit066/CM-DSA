#include<iostream>
#include<cstring>
using namespace std;

string vowel(string S){
    string s1="";
    for(char letter: S){
        if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'){
            s1+=letter;
        }
        else{
            continue;
        }
    }
    
    return s1;
} 

int main(){
    string s1;

    cout<<"Enter string: ";
    getline(cin,s1);

    cout<<"Original String: "<<s1<<endl;
    cout<<"New string: "<<vowel(s1)<<endl;
    return 0;
}