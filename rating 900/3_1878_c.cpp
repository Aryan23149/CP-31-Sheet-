#include <iostream>
#include <vector>
using namespace std;
string solve(long long int n,long long int k,long long int x){
    long long int sum_min=1;
    long long int sum_max=(n*(n+1))/2;
    if(x>=sum_min && x<=sum_max){
        long long int k_min=(k*(k+1))/2;
        long long int n_k_sum=((n-k)*(n-k+1))/2;
        long long int k_max=sum_max - n_k_sum;
        if(x>=k_min && x<=k_max) return "YES";
        else return "NO";
    }
    return "NO";
}
int main(){
    long long int t;
    cin>>t;
    vector<string> answers;
    for(long long int i=0;i<t;i++){
        long long int n,k,x;
        cin>>n>>k>>x;
        answers.push_back(solve(n,k,x));
    }
    for(string i: answers){
        cout<<i<<endl;
    }
    return 0;
}