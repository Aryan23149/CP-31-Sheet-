#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> & arr){
    int product=1;
    int n=arr.size();
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    int first_half_pro=1;
    for(int j=0;j<n;j++){
        int element = arr[j];
        first_half_pro*=element;
        int second_half_pro=product/first_half_pro;
        if(first_half_pro==second_half_pro){
            return j+1;
        }
    }
    return -1;
}
int solve2(vector<int> &arr){
    int count=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            count++;
        }
    }
    if(count%2!=0){
        return -1;
    }
    int count2=0;
    for(int j=0;j<n;j++){
        if(arr[j]==2){
            count2++;
        }
        if(count2==count/2){
            return j+1;
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    vector<int> answers;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> arr;
        for(int j=0;j<n;j++){
            int element;
            cin>>element;
            arr.push_back(element);
        }
        answers.push_back(solve2(arr));
    }
    for(int k: answers){
        cout<<k<<endl;
    }
    return 0;
}