#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
long long int solve(long long int n){
    vector<int> factors;
    int upper_limit=sqrt(n);
    int count=0;
    int i=1;
    while(n%i==0){
        count++;
        i++;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    vector<long long int> answers;
    for(int i=0;i<t;i++){
        long long int n;
        cin>>n;
        answers.push_back(solve(n));
    }
    for(int j: answers){
        cout<<j<<endl;
    }
    return 0;
}