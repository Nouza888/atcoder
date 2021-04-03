#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> data(5);
    bool flg=false;
    for(int i=0;i<5;i++){
        cin >> data.at(i);
    }

    for(int i=0;i<data.size()-1;i++){
        if(data.at(i)==data.at(i+1)){
            flg=true;
        }
    }
    if(flg){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}