#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
string solve(vector<int> &nums){
    unordered_map<int,int> a;//using map ds
    for(int i : nums){
        a[i]++;
    }//mapping all elements to no of times they occur
    int n=a.size();//size of map
    if(n>2){
        return "NO";
    }//max two distinct elements in the array are allowed only 
    else if(n==1){
        return "YES";
    }//base case sort of thing ...always true
    else if(n==2){
        vector<int> x(2,0);//for storing their occurences in array
        int k=0;//way to store map info in x vector above 
        for(auto& pair:a){
            x[k++]=pair.second;
        }
        if(abs(x[0]-x[1])<=1){
            return "YES";
        }//if even nums of arrat then this diff is 0 else 1 thus above condition
        else{
            return "NO";// not possible
        }
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;//inputing test cases
    string ans[t];//ds to store our answers
    for(int i=0;i<t;i++){
        int n;
        cin>>n;//array for each test case formation 
        vector<int> a(n,0);
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        ans[i]=solve(a);//solving that test case and storing its answer
    }
    int i=0;
    for(i=0;i<t;i++){
        cout<<ans[i]<<endl;
    }//just printing the result
    return 0;
}