#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long solve(vector<long long>& arr,long long n,long long a,long long b){
    sort(arr.begin(),arr.end());
    long long i=0;
    long long count=0;
    while(b!=0){
        if(i<n){
            if(arr[i]+b<=a || b==1){
                b=min(arr[i]+b,a);
                i++;
            }
        }
        if(i==n){
            return count+b;
        }
        b--;
        count++;
    }
    return count;
}
long long solveLearnt(vector<long long> & arr, long long n ,long long a ,long long b){
    long long maximum_time=b;
    for(long long i=0;i<n;i++){
        maximum_time+=min(arr[i],a-1);
    }
    return maximum_time;
}
int  main(){
    long long t;
    cin>>t;
    vector<long long> answers;
    for(long long i=0;i<t;i++){
        long long a,b,n;
        cin>>a>>b>>n;// max value of timer, current value of timer , no of tools
        vector<long long> times;
        for(long long j=0;j<n;j++){
            long long element;
            cin>>element;
            times.push_back(element); // the number the timer can increase by using the i-th tool
        }
        answers.push_back(solveLearnt(times,n,a,b));
    }
    for(long long j: answers){
        cout<<j<<endl;
    }
    return 0;
}