//sort(v.begin(), v.end(), cmp); < : 오름차순,  > : 내림차순 cmp - 비교하는 데이터 자료형을 인자로 받기
//<utility> pair<>,<> p : 데이터 쌍 표현,두 객체를 하나의 객체로 -> sort()가능 
//make_pair(T, T) : 데이터 할당
//p.first 첫번째 인자 p.second 두 번째 인자
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <iostream>

using namespace std;

bool cmp(pair<float, int> a, pair<float, int> b) {
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a > b;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<float, int>> v;
    float num = (float)stages.size();
    float su = 0;
    sort(stages.begin(), stages.end());
    for (int i = 1; i <= N; i++) {
        while (!stages.empty() && i == stages[0]) {
            su++;
            stages.erase(stages.begin());
        }
        if (num == 0)num = 1; //num이 먼저 0이 되었을 때
        v.push_back(make_pair((su / num), i));
        num -= su;
        su = 0;
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < N; i++) {
        answer.push_back(v[i].second);
    }
    return answer;
}