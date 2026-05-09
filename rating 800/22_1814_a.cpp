#include <iostream>
#include <vector>
using namespace std;
string solve(long long int n,long long int k){
    if(n%2==0){
        return "YES";
    }
    else{
        if(k%2==0){
            return "NO";
        }
        else if( n>=k){
            return "YES";
        }
        else return "NO";
    }
    return "NO";
}
 int main(){
    long long int t;
    cin>>t;
    vector<string> answers;
    for(long long int i=0;i<t;i++){
        long long int n,k;
        cin>>n>>k;
        answers.push_back(solve(n,k));
    }
    for(string j: answers){
        cout<<j<<endl;
    }
    return 0;
}