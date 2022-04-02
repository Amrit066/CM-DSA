#include<iostream>
#include<vector>
using namespace std;

vector<pair<int, int>> BubbleSort(vector<pair<int, int>> a, bool flag){
    bool isSorted;
    for(int i=0;i<a.size() ;i++){
            isSorted=true;
            for(int j=0;j<a.size()-i-1;j++){
                if(a[j].first > a[j+1].first){
                    pair<int, int> temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    isSorted=false;
                }
                else if(a[j].first == a[j+1].first && a[j].second > a[j+1].second){
                    pair<int, int> temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    isSorted=false;
                }
                else {
                    continue;
                }
            }
            if(isSorted){
                break;
            }
        }
    return a;
}

int main(void){
    int n;
    vector<pair<int, int>> a;

    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"Enter elements of array as x and y : "<<endl;
    for(int i=0;i<n;i++){
        pair<int, int> input;
        cin>>input.first>>input.second;
        a.push_back(input);
    }

    cout<<"Original array of co-ordinates:"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<"x: "<<a[i].first<<"y: "<<a[i].second<<endl;
    }

    a=BubbleSort(a,true);

    cout<<"Sorted array of co-ordinates:"<<endl;
    for(int i=0;i<a.size();i++){
                cout<<"x: "<<a[i].first<<"y: "<<a[i].second<<endl;

    }

    return 0;
}