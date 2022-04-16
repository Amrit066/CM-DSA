#include<iostream>
#include<vector>
using namespace std;

char intToChar(int num){
    if(num == 1)
        return '1';
    else if(num == 2)
        return '2';
    else if(num == 3)
        return '3';
    else if(num == 4)
        return '4';
    else if(num == 5)
        return '5';
    else if(num == 6)
        return '6';
    else if(num == 7)
        return '7';
    else if(num == 8)
        return '8';
    else if(num == 9)
        return '9';
    else
        return '0';
}

int compress(vector<char>& chars) {
    int length=0,j=0,count=1;
    char prev;

    prev=chars[0];
    for(int i=1;i<chars.size();i++){
        if(chars[i] != prev && count ==1){
            chars[j++]=prev;
            prev=chars[i];
            count=1;
            length+=2;
        }
        else if(chars[i] != prev && count >1 && count <10){
            chars[j++]=prev;
            chars[j++]=intToChar(count);
            prev=chars[i];
            count=1;
            length+=2;
        }
        else if(chars[i] != prev && count >=10){
            vector<int> num;
            chars[j++]=prev;
            length++;
            while(count>0){
                length++;
                num.push_back(count%10);
                count=count/10;
            }
            for(int i=num.size()-1;i>=0;i--){
                chars[j++]=intToChar(num[i]);
            }
            prev=chars[i];
            count=1;
        }
        else{
            count++;
        }

    }
    chars[j]='\0';
    cout<<endl<<"Compressed Array: "<<endl;
    for(char ch:chars){
        cout<<ch<<",";
      }
    cout<<"Below";
    return length;
        
}

int main(){
    vector<char> chars;
    char ch;

    cout<<"Enter each character: "<<endl;
    cin.get(ch);
     while(ch != '\n'){
        if(ch != ' '){
          chars.push_back(ch);
        }
        cin.get(ch);
    }
    chars.push_back('\0');

    cout<<endl<<"Original Array: "<<endl;
    for(char ch:chars){
      cout<<ch<<",";
    }
    cout<<endl<<"Lenght of the compressed array is "<<compress(chars)<<endl;

    return 0;
}