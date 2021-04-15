//비교할 때 자료형 생각하기
// string a="";  //빈 스트링 만들고
//a+=dartResult[i];  //더해서 스트링에 넣기
#include <string>
#include <stack>
#include <numeric>

#include <iostream>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    stack<int> v;
    int num;
    for (int i = 0; i < dartResult.size(); i++) {
        if (dartResult[i] == '1' && dartResult[i + 1] == '0') {
            num = 10;
            i++;
        }
        else {
            string a = "";
            a += dartResult[i];
            //cout<<a<<" ";
            num = stoi(a);
        }

        i++;
        if (dartResult[i] == 'S') {
            i++;
        }
        else if (dartResult[i] == 'D') {
            num *= num;
            i++;
        }
        else if (dartResult[i] == 'T') {
            num = num * num * num;
            i++;
        }
        if (dartResult[i] == '*') {
            if (!v.empty()) {
                int temp = v.top();
                v.pop();
                v.push(temp * 2);
            }
            num *= 2;
            i++;
        }
        else if (dartResult[i] == '#') {
            num *= -1;
            i++;
        }
        v.push(num);
        i--;
    }
    while (!v.empty()) {
        answer += v.top();
        //cout<<endl;
       // cout<<v.top()<<" ";
        v.pop();
    }
    return answer;
}