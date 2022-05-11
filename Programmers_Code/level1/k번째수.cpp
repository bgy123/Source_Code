#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> v;
    vector<int> answer;
    int n = commands.size();
    int i, j, k;
    for (int a = 0; a < n; a++) {
        i = commands[a][0]; j = commands[a][1]; k = commands[a][2];
        for (int b = i - 1; b < j; b++) {
            v.push_back(array[b]);
        }
        sort(v.begin(), v.end());
        answer.push_back(v[k - 1]);
        v.clear();
    }
    return answer;
}