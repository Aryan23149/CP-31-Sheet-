#include <iostream>
#include <vector>
using namespace std;
int solve(string s){
    int n=s.length();
    int i=0;
    int j=n-1;
    int answer=n;
    while(i<j){
        if(s[i]=='1' && s[j]=='0'){
            answer-=2;
        }
        else if(s[i]=='0' && s[j]=='1'){
            answer-=2;
        }
        else{
            break;
        }
        i++;j--;
    }
    return answer;
}
int main(){
    int t;
    cin>>t;
    vector<int> answer;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        answer.push_back(solve(s)) ;
    }
    for(int i : answer){
        cout<<i<<endl;
    }
    return 0;
}