#include <iostream>
#include <vector>
#include <string>
using namespace std;
// bool check_ifsorted(vector<int>& arr){
//     for(int i=0;i<arr.size()-1;i++){
//         if(arr[i]>arr[i+1]){
//             return false;
//         }
//     }
//     return true;
// }
// string func(vector<int>& arr){
//     int n=arr.size();
//     for(int i=0;i<n-2;i++){
//         bool flag=false;
//         for(int j=0;j<n-2-i;j++){
//             if(arr[j]<arr[j+1]&&arr[j+1]>arr[j+2]){
//                 flag=true;
//                 swap(arr[j+1],arr[j+2]);
//             }
//         }
//         if(flag==false){
//             break;
//         }
//     }
//     if(check_ifsorted(arr)){
//         return "YES";
//     }
//     return "NO";
// }
string func(vector<int>&arr){
    if(arr[0]==1){
        return "YES";
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;
    vector<string> answer(t);
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        answer[i]=func(arr);
    }
    for(string & result: answer){
        cout<<result<<endl;
    }
    return 0;
}
// approach:

// brute force : use bubble sort with updated swap condition and at the end if we have a sorted array then return yes else no

// Time Complexity: O(t*n*n +n) as for each test case we are using bubble sort and then at last printing array

// SPace Complexity: O(t+n) for storing array and anwer array

// auxilary space:O(t) for storing answers

// optimal approach: if starting element aint one then one cannot be brought at index 0 using special swap thus answer is no and if it is one the starting element then rest of the elements can be sorted using bubble sort which will always give yes as answer.

// Time Complexity: O(t)

// SPace Complexity: O(t+n)..for storing array and answer array

// auxilary space:O(t) for storing answers