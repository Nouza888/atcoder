#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int count_report_num(vector<vector<int>> &children, int x){
    int report_num=0;

    if(children.at(x).size()==0){
        return 0;
    }
    for(int c:children.at(x)){
        
    }
}

int main(){
    int N;
    cin >> N;

    vector<int> p(N);
    p.at(0)= -1;
    for(int i=1;i<N;i++){
        cin >>p.at(i);
    }

    vector<vector<int>> children(N);
    for(int i=1;i<N;i++){
        int parent =p.at(i);
        children.at(parent).push_back(i);
    }

    rep(i,N) cout<<count_report_num(children,i)<<i;

    return 0;
}