#include<iostream>>
#include<vector>
#include<algorithm>
using namespace std;

int defkin(int W,int H, vector<pair<int,int>> position){
    int penalty=0;
    pair<int,int> prevmax,currmax;

    prevmax.first=0;
    prevmax.second=0;
    currmax.first=0;
    currmax.second=0;

    sort(position.begin(),position.end());

    for(int i=0;i<W;i++){
        if(position[i].first > 0){
            currmax.first=0;
        }
        else{
            currmax.first++;
        }
        if(currmax.first > prevmax.first){
            prevmax.first = currmax.first;
        }
        else{
            continue;
        }
    }
    for(int i=0;i<H;i++){
        if(position[i].second > 0){
            currmax.second=0;
        }
        else{
            currmax.second++;
        }
        if(currmax.second > prevmax.second){
            prevmax.second = currmax.second;
        }
        else{
            continue;
        }
    }
    penalty=prevmax.first * prevmax.second;
    return penalty;
}


int main(){
    vector<pair<int,int>> position;
    int n,w,h;

    cout<<"Enter width of the board: ";
    cin>>w;
    cout<<"Enter height of the board: ";
    cin>>h;
    cout<<"Enter no. of position in array: ";
    cin>>n;
    cout<<"Enter co-ordinates of each position:"<<endl;
    for(int i=0;i<n;i++){
        pair<int,int> temp;
        cin>>temp.first>>temp.second;
        position.push_back(temp);
    }
    cout<<"Co-ordinate of each position in the list :"<<endl;
    for(int i=0;i<n;i++){
        cout<<"x= "<<position[i].first<<" y= "<<position[i].second<<endl;
    }

    cout<<"Total penalty for the position is "<<defkin(w,h,position)<<endl;

    return 0;
}