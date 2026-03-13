#include <iostream>
#include <vector>
using namespace std;
vector<int> solve(vector<int> &b)
{
    int n = b.size();
    vector<int> a(2 * n, 0);
    a[0] = b[0];
    for (int i = 1; i < b.size(); i++)
    {
        if (b[i - 1] > b[i])
        {
            a[2 * i - 1] = max(b[i] - 1, 1);
        }
        a[2 * i] = b[i];
    }
    vector<int> answer;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != 0)
        {
            answer.push_back(a[i]);
        }
    }
    return answer;
}
int main()
{
    int t;
    cin >> t;
    int k = t;
    vector<vector<int>> answers;
    while (k--)
    {
        int n;
        cin >> n;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int element;
            cin >> element;
            b.push_back(element);
        }
        answers.push_back(solve(b));
    }
    for (int i = 0; i < t; i++)
    {
        int n = answers[i].size();
        cout << n << endl;
        for (int j = 0; j < n; j++)
        {
            cout << answers[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}