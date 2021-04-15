//시간 복잡도 너무 큼
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n - lost.size();
    for (int i = 0; i < lost.size(); i++) {
        for (int j = 0; j < reserve.size(); j++) {
            if (lost[i] == reserve[j]) {
                reserve.erase(reserve.begin() + j);
                lost.erase(lost.begin() + i);
                i--;
                answer++;
                break;
            }
        }
    }
    for (int i = 0; i < lost.size(); i++) {
        for (int j = 0; j < reserve.size(); j++) {
            if (lost[i] == reserve[j] - 1) {
                reserve.erase(reserve.begin() + j);
                answer++;
                break;
            }

            if (lost[i] == reserve[j] + 1) {
                reserve.erase(reserve.begin() + j);
                answer++;
                break;
            }
        }

    }
    return answer;
}