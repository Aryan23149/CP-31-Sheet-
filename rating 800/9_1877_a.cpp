#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &efficiency_array)
{
    int sum = 0;
    for (int i = 0; i < efficiency_array.size(); i++)
    {
        sum += efficiency_array[i];
    }
    return -1 * sum;
}

int main()
{
    int t;
    cin >> t;
    vector<int> answer;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> efficiency_array;
        for (int j = 1; j <=n-1; j++)
        {
            int element;
            cin >> element;
            efficiency_array.push_back(element);
        }
        answer.push_back(solve(efficiency_array));
    }
    for (int k = 0; k < t; k++)
    {
        cout << answer[k] << endl;
    }
    return 0;
}
// 2
// 4
// 3 -4 5
// 11
// -30 12 -57 7 0 -81 -68 41 -89 0 
 