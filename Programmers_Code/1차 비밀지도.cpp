#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for (int i = 0; i < n; i++) {
        arr1[i] = arr1[i] | arr2[i];
        cout << arr1[i] << ' ';
    }
    string s = "";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr1[i] % 2 == 1) {
                s += "#";
            }
            else
                s += " ";
            arr1[i] >>= 1;
        }
        reverse(s.begin(), s.end());
        answer.push_back(s);
        s = "";
    }
    return answer;
}