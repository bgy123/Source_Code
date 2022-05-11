//2차원 벡터에 push_back()하려면 1차원 벡터 만들어서 1차원 벡터에 값넣고 1차원 벡터 넣기
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    //vector<vector<int>> answer;
    for (int i = 0; i < arr1.size(); i++) {
        for (int j = 0; j < arr1[0].size(); j++) {
            arr1[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    return arr1;
}