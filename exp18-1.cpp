//beginner contest107 B-Grid Compression
#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin >>h >> w;
    vector<vector<char>> grid(h,vector<char>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >>grid.at(i).at(j);
        }
    }
    //まずは横を判定
    for(int i=0;i<grid.size();i++){
        bool flgA = true;
        for(int j=0;j<w;j++){
            if(grid.at(i).at(j)=='#'){
                flgA=false;
            }
        }
        if(flgA){
            grid.erase(grid.begin() +i);
        }
    }
    //次に縦を判定
    for(int i=0;i<grid.at(i).size();i++){
        bool flgB=true;
        for(int j=0;j<grid.size();j++){
            if(grid.at(j).at(i)=='#'){
                flgB=false;
            }
        }
        /*if(flgB){
            for(int j=0;j<grid.size();j++){
                grid.at(j).erase(grid.at(j).begin() +i);
            }
        }*/
    }

    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid.at(i).size();j++){
            cout <<grid.at(i).at(j) <<" ";
        }
        cout <<endl;
    }
}