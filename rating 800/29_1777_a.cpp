#include <iostream>
#include <vector>
using namespace std;
long long int checkEvenNums(vector<long long int> & arr,long long int & index){
    long long int n =arr.size();
    long long int j=index;
    long long int count=0;
    while(j<n){
        if(arr[j]%2==0){
            count++;
        }
        else return count;
        j++;
    }
    // index=j;
    return count;
}
long long int checkOddNums(vector<long long int> & arr, long long int & index){
    long long int n =arr.size();
    long long int j=index;
    long long int count=0;
    while(j<n){
        if(arr[j]%2!=0){
            count++;
        }
        else return count;
        j++;
    }
    // index=j;
    return count;
}
long long int  solve(vector<long long int> & arr){
    long long int i=0;
    long long int n=arr.size();
    long long int count=0;
    while(i<n){
        long long int element=arr[i];
        long long int j=i;
        if(element%2==0){
            long long int cntEven=checkEvenNums(arr,i)-1;
            count+=cntEven;
            i=i+cntEven+1;
        }
        else{
            long long int cntOdd=checkOddNums(arr,i)-1;
            count+=cntOdd;
            i+=cntOdd+1;
        }
    }
    return count;
}
long long int solveVid(vector<long long int > & arr){
    long long int count=0;
    long long int n=arr.size();
    for(int i=0;i<n-1;i++){
        if((arr[i]%2)==(arr[i+1]%2)){
            count++;
        }
    }
    return count;
}
int main(){
    long long int t;
    cin>>t;
    vector<long long int> answers;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<long long int> arr;
        for(int j=0;j<n;j++){
            long long int element;
            cin>>element;
            arr.push_back(element);
        }
        // answers.push_back(solve(arr));// method by me 
        answers.push_back(solveVid(arr));// methiod by video
    }
    for(int j=0;j<t;j++){
        cout<<answers[j]<<endl;
    }
    return 0;
}