#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
string solve(int n,int k,string s){
    unordered_map<char,int> func;
    for(char i : s){
        func[i]++;
    }
    int oddFrequencies=0;
    for(auto p: func){
        if(p.second%2!=0){
            oddFrequencies++;
        }
    }
    int final_length=n-k;
    if(final_length%2==0){
        if(oddFrequencies<=k){
            return "YES";
        }
        return "NO";
    }
    else{
        if(oddFrequencies-1<=k){
            return "YES";
        }
        return "NO";
    }
}
int main(){
    int t;
    cin>>t;
    vector<string> answer;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        answer.push_back(solve(n,k,s));
    }
    for(string j: answer){
        cout<<j<<endl;
    }

    return 0;
}