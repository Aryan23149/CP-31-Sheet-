#include <iostream>
#include <vector>
using namespace std;
vector<int> solve(int x, int k)
{
    vector<int> answer;
    if(x%k==0){
        answer.push_back(x-1);
        answer.push_back(1);
        return answer;
    }
    else{
        answer.push_back(x);
        return answer;
    }
    return answer;
}
int main()
{
    int t;
    cin >> t;
    vector<vector<int>> answers;
    for (int i = 0; i < t; i++)
    {
        int x, k;
        cin >> x>> k;
        answers.push_back(solve(x, k));
    }
    for (vector<int> ans : answers)
    {
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}