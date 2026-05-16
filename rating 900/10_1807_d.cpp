#include <vector>
#include <iostream>
using namespace std;
vector<int> make_prefix_sum_arr(vector<int> & arr){
    vector<int> prefix_sum_arr;
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        prefix_sum_arr.push_back(sum);
    }
    return prefix_sum_arr;
}
string solve(int l,int r,int k,vector<int> & arr,vector<int> & prefix_sum_arr){
    l=l-1;
    r=r-1;
    int left_sum=0;
    int right_sum=0;
    if(l!=0){
        left_sum=prefix_sum_arr[l-1];
    }
    int n=arr.size();
    if(r!=n-1){
        right_sum=prefix_sum_arr[n-1]-prefix_sum_arr[r];
    }
    int sum= left_sum+right_sum+k*(r-l+1);
    if(sum%2==0){
        return "No";
    }
    return "Yes";
}
int main(){
    int t;
    cin>>t;
    vector<vector<string>> answers;
    for(int i=0;i<t;i++){
        int n,q;
        cin>>n>>q;
        vector<int> arr;
        for(int j=0;j<n;j++){
            int element;
            cin>>element;
            arr.push_back(element);
        }
        vector<string> ans;
        vector<int> prefix_sum_arr=make_prefix_sum_arr(arr);
        for(int z=0;z<q;z++){
            int l,r,k;
            cin>>l>>r>>k;
            ans.push_back(solve(l,r,k,arr,prefix_sum_arr));
        }
        answers.push_back(ans);
    }
    for(vector<string> arr: answers){
        for(string ans: arr){
            cout<<ans<<endl;
        }
        //cout<<endl;
    }
    return 0;
}