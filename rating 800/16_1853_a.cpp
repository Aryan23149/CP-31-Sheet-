#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int solve(vector<int> & data){
    int min_diff=INT_MAX;
    for(int i=0;i<data.size()-1;i++){
        int difference = data[i+1]-data[i];
        if(difference<0){
            return 0;
        }
        min_diff=min(min_diff,difference);
    }
    int answer= int(min_diff/2) + 1;
    return answer;
}
int main(){
    int t;
    cin>>t;
    vector<int> answer;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> data;
        for(int j=0;j<n;j++){
            int element;
            cin>>element;
            data.push_back(element);
        }
        answer.push_back(solve(data));
    }
    for(int i=0;i<t;i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}