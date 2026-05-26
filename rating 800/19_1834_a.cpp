#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int solve(vector<int> &arr)
{
    int n = arr.size();
    int n1 = 0; // count of -1
    int n2 = 0; // count of 1
    int answer=0;

    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            n1++;
        }
        else n2++;
    }
    while(n1>n2){
        answer++;
        n1--;
        n2++;
    }
    if(n1%2==1){
        answer++;
    }
    return answer;
}
int main()
{
    int t;
    cin >> t;
    vector<int> answers;
    for (int i = 0; i < t; i++)
    {
        vector<int> arr;
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int input;
            cin >> input;
            arr.push_back(input);
        }
        answers.push_back(solve(arr));
    }
    for (int k : answers)
    {
        cout << k << endl;
    }
    return 0;
}