#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void solve(vector<int> & data){
}
int main(){
    int t;
    cin>>t;
    vector<vector<int>> answer;
    for(int i=0;i<t;i++){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int> data;
        data.insert(data.end(),{n,k,x});
        answer.push_back(data);
    }
    for(int i=0;i<t;i++){
        solve(answer[i]);
    }
    return 0;
}