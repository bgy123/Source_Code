/*
#include <algorithm> - sort(v.begin(),v,end());
vector<T> v; - 빈 벡터
v.push_back(value);
vector<T> v2(v1); - v2에 v1복사
v.clear();
v.size();
v.erase(v.begin()+i);  //범위로 지우기 가능
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;


    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            int sum = numbers[i] + numbers[j];

            answer.push_back(sum);

        }
    }

    sort(answer.begin(), answer.end());
    for (int i = 0; i < answer.size() - 1; i++) {
        if (answer[i] == answer[i + 1]) {
            answer.erase(answer.begin() + i);
            i--;

        }
    }
    return answer;
}
