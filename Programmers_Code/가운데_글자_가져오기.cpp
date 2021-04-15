#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    //string answer = "";
    int n = s.length();
    if (s.length() % 2 == 1) {
        return s.substr(n / 2, 1);
    }
    else {
        return s.substr(n / 2 - 1, 2);
    }
    //return answer;
}