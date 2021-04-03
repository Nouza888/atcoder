#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

void saiten(vector<vector<int>> &a, int &x, int &y){
    rep(i,9){
        rep(j,9){
            if(a[i][j]==(i+1)*(j+1)) x++;
            else y++;
            a[i][j]=(i+1)*(j+1);
        }
    }
}

int main(){
    vector<vector<int>> A(9,vector<int>(9));
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> A.at(i).at(j);
        }
    }

    int correct=0;
    int wrong=0;
    saiten(A,correct,wrong);

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout << A.at(i).at(j);
            if(j<8) cout << " ";
            else cout << endl;
        }
    }
    cout << correct << endl;
    cout << wrong << endl;

    return 0;
}