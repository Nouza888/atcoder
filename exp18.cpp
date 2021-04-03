#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >>n>>m;
    vector<vector<char>> r(n,vector<char>(n,'-'));
    vector<int> a(m),b(m);
    for(int i=0;i<m;i++){
        cin >>a.at(i)>>b.at(i);
    }

    for(int i=0;i<m;i++){
        r.at(a.at(i)-1).at(b.at(i)-1)='o';
        r.at(b.at(i)-1).at(a.at(i)-1)='x';
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << r.at(i).at(j);
            if(j!=n-1){
                cout << " ";
            }else{
                cout << endl;
            }
        }
    }
}