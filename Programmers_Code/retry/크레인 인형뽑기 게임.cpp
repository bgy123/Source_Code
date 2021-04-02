//2차원 벡터 접근 v[int][int]
//2차원 벡터 행크기 v.size(), 열크기 v[0].size()
// 벡터 초기화 v(int a) a크기만큼 0으로 초기화

//스택 - stack<T> s;
//스택함수 s.empty() s.top() s.push() s.pop()

//범위기반 for문 - for(배열요소와 같은 자료형(auto 사용하면 좋음)(참조를 사용하면 요소에 영향 끼칠 수 있음) 변수 : 배열)

#include <string>
#include <vector>
//2차원 벡터, 스택
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    int sp = -1;
    vector<int> v;
    for (int i = 0; i < moves.size(); i++) {
        int p = moves[i];
        for (int j = 0; j < board.size(); j++) {
            if (board[j][p - 1] != 0) {
                if (v.size() == 0 || (v[sp] != board[j][p - 1])) {
                    v.push_back(board[j][p - 1]);
                    board[j][p - 1] = 0;
                    sp++;
                    break;
                }
                else {
                    board[j][p - 1] = 0;
                    v.erase(v.begin() + sp);
                    answer += 2;
                    sp--;
                    break;
                }
            }
        }
    }

    return answer;
}
int main() {
    vector<vector<int>> board = { {0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1} };
    vector<int> move = { 1,5,3,5,1,2,5,1,4,3 };
    return solution(board, move);
}