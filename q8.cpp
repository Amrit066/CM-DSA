#include<iostream>>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> a)
{
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