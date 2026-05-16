#include <iostream>
#include <vector>
using namespace std;
int solve(string s){
    int current=1;
    int lower_limit=1;
    int upper_limit=1;
    for (char i: s){
        if(i=='<'){
            current++;
        }
        else current --;
        lower_limit=min(current,lower_limit);
        upper_limit=max(current,upper_limit);
    }
    return upper_limit-lower_limit+1;
}
int main(){
    int t;
    cin>>t;
    vector<int> answers;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        answers.push_back(solve(s));
    }
    for(int i: answers){
        cout<<i<<endl;
    }
    return 0;
}