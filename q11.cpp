#include<iostream>
using namespace std;

int main(){
    int direction_count[4]={}; //Here element at index-0 represents count for North Direction
    char path[1000]={0};                        //index-1 represents count for South Direction
                                                //index-2 represents count for East Direction
                                                //index-3 represents count for West Direction
    cout<<"Enter Path String: ";
    cin.getline(path,1000);
    cout<<"Path String is \""<<path<<"\""<<endl;

    int i=0;
    while(path[i] != '\0'){
        
        if(path[i] == 'N' || path[i] == 'n'){
            direction_count[0]+=1;
            i++;
        }
        else if(path[i] == 'S' || path[i] == 's'){
            direction_count[1]+=1;
            i++;
        }
        else if(path[i] == 'E' || path[i] == 'e'){
            direction_count[2]+=1;
            i++;
        }
        else if(path[i] == 'W' || path[i] == 'w'){
            direction_count[3]+=1;
            i++;
        }
        else{
            i++;
            continue;
        }
    }

    // For North and South Direction
    if(direction_count[0] > direction_count[1]){
        direction_count[0]-=direction_count[1];
        direction_count[1]=0;
    }
    else if(direction_count[0] < direction_count[1]){
        direction_count[1]-=direction_count[0];
        direction_count[0]=0;
    }  
    else   
        direction_count[0]=direction_count[1]=0;

    // For East and West Direction
    if(direction_count[2] > direction_count[3]){
        direction_count[2]-=direction_count[3];
        direction_count[3]=0;
    }
    else if(direction_count[2] < direction_count[3])  {
        direction_count[3]-=direction_count[2];
        direction_count[2]=0;
    }
    else   
        direction_count[2]=direction_count[3]=0;

    // for(int i=0;i<4;i++){
    //   cout<<"Drection count: "<<direction_count[i]<<endl;
    // }
    cout<<"Shortest Path: ";
    for(int i=0;i<4;i++){
        int j=direction_count[i];
        while(j>=1){
            if(i==0)
                cout<<"N->";
            else if(i==1)
                cout<<"S->";
            else if(i==2)
                cout<<"E->";
            else
                cout<<"W->";
            j--;
        }
    }                                    
    return 0;
}