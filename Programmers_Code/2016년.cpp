#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    //string answer = "";
    int sum = 0;
    //31 29 31 30 31 30 31 31 30 31 30 31
    if (a == 1) { sum = b; }
    if (a == 2) { sum = b + 31; }
    if (a == 3) { sum = b + 31 + 29; }
    if (a == 4) { sum = b + 31 + 29 + 31; }
    if (a == 5) { sum = b + 31 + 29 + 31 + 30; }
    if (a == 6) { sum = b + 31 + 29 + 31 + 30 + 31; }
    if (a == 7) { sum = b + 31 + 29 + 31 + 30 + 31 + 30; }
    if (a == 8) { sum = b + 31 + 29 + 31 + 30 + 31 + 30 + 31; }
    if (a == 9) { sum = b + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31; }
    if (a == 10) { sum = b + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30; }
    if (a == 11) { sum = b + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; }
    if (a == 12) { sum = b + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; }
    if (sum % 7 == 1)return "FRI";
    if (sum % 7 == 2)return "SAT";
    if (sum % 7 == 3)return "SUN";
    if (sum % 7 == 4)return "MON";
    if (sum % 7 == 5)return "TUE";
    if (sum % 7 == 6)return "WED";
    if (sum % 7 == 0)return "THU";
    //return answer;
}