#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char str[100])
{
    for(int i=0;i< strlen(str)/2;i++){
        if(str[i] != str[strlen(str)-1-i])
            return false;
    }
    return true;
}

int main(){
    char word[100];

    cout<<"Enter the string: "<<endl;
    cin.get(word,100);

    if(isPalindrome(word))
        cout<<"String: "<<word<<" is a palindrome."<<endl;
    else    
        cout<<"String: "<<word<<" is not a palindrome."<<endl;

    return 0;
}