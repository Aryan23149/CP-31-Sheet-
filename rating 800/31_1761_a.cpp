#include <iostream>
#include <vector>
using namespace std;
string solve(int n,int a, int b){
    if(n==1) return "YES";
    if(a+b<n-1 || (a==n && b==n)){
        return "YES";
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;
    vector<string> answers;
    for(int i=0;i<t;i++){
        int n,a,b;
        cin>>n>>a>>b;
        answers.push_back(solve(n,a,b));
    }
    for(string j: answers){
        cout<<j<<endl;
    }
    return 0;
}