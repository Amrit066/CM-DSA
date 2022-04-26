#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool stairCaseSearch(vector<vector<int>> darr,int key){
    int i,j,it=0;

    i=0;
    j=darr[0].size()-1;
    while(true){
      it++;
      if(i>=darr.size() || j<=0){
          break;
      }
      else{
        if(darr[i][j]==key){
            cout<<"Total iteration is "<<it<<endl;
            return true;
          }
        else if(key>darr[i][j]){
            i++;
          }
        else if(key<darr[i][j]){
            j--;
          }
        else{
            continue;
          }
        }
    }

    cout<<"Total iteration is "<<it<<endl;
    return false;
}

int main(){
    vector<vector<int>> darr;
    int key,r,c;

    cout<<"Enter number of rows and columns: ";
    cin>>r>>c;

    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<r;i++){
        vector<int> arr;
        for(int j=0;j<c;j++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        darr.push_back(arr);
    }

    cout<<"Enter number to be searched: ";
    cin>>key;

    cout<<"Array is:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<darr[i][j]<<"    ";
        }
        cout<<endl;
    }

    string flag=stairCaseSearch(darr,key)?"True":"False";
    cout<<"The number= "<<key<<" is present in the array: "<<flag<<endl;
    return 0;
}