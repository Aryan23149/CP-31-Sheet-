#include <iostream>
#include <vector>
using namespace std;
string solve(vector<int> & data,int k){
    for(int i: data){
        if(i==k){
            return "Yes";
        }
    }
    return "No";
}
int main(){
    int t;
    cin>>t;
    vector<string> answer;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<int> data;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            data.push_back(x);
        }
        string ans=solve(data,k);
        answer.push_back(ans);
    }
    for(int j=0;j<t;j++){
        cout<<answer[j]<<endl;
    }
    return 0;
}