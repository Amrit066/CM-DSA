#include<iostream>>
#include<vector>
#include<algorithm>
using namespace std;

bool sortSecond(const pair<int,int> &a,const pair<int,int> &b)
{
  return (a.second < b.second);
}

int defkin(int W,int H, vector<pair<int,int>> position){
    pair<int,int> currmax;
  
    currmax.second=0;
  
    sort(position.begin(),position.end());
    currmax.first=position[0].first -1;

    for(int i=0;i<position.size();i++){
        if(i == position.size()-1){
          if(W - position[i].first  > currmax.first){
            currmax.first= W - position[i].first;
          }
          else{
            continue;
          }
        }
        else{
          if(position[i+1].first -position[i].first > currmax.first){
            currmax.first= position[i+1].first -position[i].first-1;
          }
          else{
            continue;
          }
        }
    }
    sort(position.begin(),position.end(),sortSecond);
    currmax.second=position[0].second -1;
    for(int i=0;i<position.size();i++){
        if(i == position.size()-1){
          if(H - position[i].second  > currmax.second){
            currmax.second= W - position[i].second;
          }
          else{
            continue;
          }
        }
        else{
          if(position[i+1].second -position[i].second > currmax.second){
            currmax.second= position[i+1].second -position[i].second-1;
          }
          else{
            continue;
          }
        }
    }
  return currmax.first * currmax.second;
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
        cout<<"x= "<<position[i].first<<"; y= "<<position[i].second<<endl;
    }

    cout<<"Total penalty for the position is "<<defkin(w,h,position)<<endl;

    return 0;
}