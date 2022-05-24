#include <string>
#include <iostream>
#include <map>

using namespace std;
// 대문자를 소문자로 바꾸고, 알파벳이 아니면 '_'로 바꾸는 함수
char rev(char a)
{

    if (a >= 'A' && a <= 'Z')
    {
        return a - 'A' + 'a';
    }
    if (a < 'a' || a > 'z')
    {
        return '_';
    }
    return a;
}

int solution(string str1, string str2)
{
    int answer = 0;

    map<string, int> m1, m2;
    for (int i = 0; i < str1.size() - 1; i++)
    {
        string temp = "";
        char t1, t2;
        t1 = rev(str1[i]);
        t2 = rev(str1[i + 1]);
        if (t1 == '_' || t2 == '_')
        {
            continue;
        }
        temp += t1;
        temp += t2;
        m1[temp]++;
    }

    for (int i = 0; i < str2.size() - 1; i++)
    {
        string temp = "";
        char t1, t2;
        t1 = rev(str2[i]);
        t2 = rev(str2[i + 1]);
        if (t1 == '_' || t2 == '_')
        {
            continue;
        }
        temp += t1;
        temp += t2;
        m2[temp]++;
    }

    float hap = 0;
    float ch = 0;
    // m1과 m2의 원소 비교해서 더 많은 원소를 가진 값을 합집합에 더하고 적은 것은 교집합에 더하기
    for (auto e : m1)
    {
        if (e.second >= m2[e.first])
            hap += e.second;
        else
        {
            ch += e.second;
        }
    }
    for (auto e : m2)
    {
        if (e.second > m1[e.first])
            hap += e.second;
        else
        {
            ch += e.second;
        }
    }
    if (hap == 0)
        return 65536;
    return (int)ch / hap * 65536;
}