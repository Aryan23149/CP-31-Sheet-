#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(vector<int> &data){
    sort(data.begin(),data.end());
    int n=data.size();
    int len_b=0;
    for(int i=0;i<n;i++){
        if(data[i]!=data[0]){
            break;
        }
        len_b++;
    }
    int len_c=n-len_b;
    if(data[0]==data[n-1]){
        cout<<-1<<endl;
    }
    else{
        cout<<len_b<<" "<<len_c<<endl;
        int element1=data[0];
        int loop_count=0;
        while(loop_count<n && data[loop_count]==element1){
            cout<<data[loop_count++]<<" ";
        }
        cout<<endl;
        while(loop_count<n){
            cout<<data[loop_count++]<<" ";
        }
        cout<<endl;
    }
    return;
}

int main(){
    int t;
    cin>>t;
    vector<vector<int>> answer;
    int k=t;
    while(k--){
        int n;
        cin>>n;
        int l=n;
        vector<int> data;
        while(l--){
            int element;
            cin>>element;
            data.push_back(element);
        }
        answer.push_back(data);
    }
    int l1=t;
    for(int i=0;i<t;i++){
        solve(answer[i]);
    }
    return 0;
}