#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int solve(string s){
    int n=s.length();
    int max_count=1;
    int count=1;
    char character=s[0];
    for(int i=1;i<n;i++){
        char current_char=s[i];
        if(current_char==character){
            count++;
        }
        else{
            character=current_char;
            count=1;
        }
        max_count=max(count,max_count);
    }
    return max_count+1;
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