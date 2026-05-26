#include <iostream>
#include <vector>
using namespace std;
// vector<int> solve(vector<int> & arr){
//     vector<int> ans;
//     ans.push_back(arr[0]);
//     int n= arr.size();
//     for(int i=1;i<n;i++){
//         int current_element=arr[i];
//         int previous_element=ans.back();
//         if(current_element %2 ==0 && previous_element%2==0){
//             ans.push_back(arr[i]+1);
//         }
//         else if(current_element%2 !=0 && previous_element%2!=0){
//             ans.push_back(arr[i]+1);
//         }
//         else if(current_element%2 !=0 && previous_element%2==0){
//             ans.push_back(arr[i]);
//         }
//         else if(current_element%2 ==0 && previous_element%2!=0){
//             if(current_element%previous_element==0){
//                 ans.push_back(arr[i]+2);
//                 continue;
//             }
//             ans.push_back(arr[i]);
//         }
//         else ans.push_back(arr[i]);
//     }
//     return ans;
// }
vector<int> solveLearnt(vector<int> & arr){
    vector<int> answer;
    if(arr[0]==1){
        answer.push_back(2);
    }
    else answer.push_back(arr[0]);
    for(int i=1;i<arr.size();i++){
        int element=arr[i];
        int previous_element=answer.back();
        if(element!=1){
            if(element%previous_element==0){
                answer.push_back(element+1);
            }
            else answer.push_back(element);
        }
        else{
            if(previous_element%2==0){
                answer.push_back(3);
            }
            else{
                answer.push_back(2);
            }
        }
    }
    return answer;
}
int main(){
    int t;
    cin>>t;
    vector<vector<int>> answers;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> arr;
        for(int j=0;j<n;j++){
            int element;
            cin>>element;
            arr.push_back(element);
        }
        answers.push_back(solveLearnt(arr));
    }
    for(vector<int> arr: answers){
        for(int element: arr){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return 0;
}