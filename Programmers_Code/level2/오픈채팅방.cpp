#include <string>
#include <vector>
#include <sstream>
#include <map>
using namespace std;

vector<string> Split(string input, char delimiter)
{
    vector<string> ret;
    stringstream ss(input);
    string tmp;

    while(getline(ss, tmp, delimiter))
        ret.push_back(tmp);
    return ret;
}

vector<string> solution(vector<string> record) {
    map<string,string> m;
    vector<string> answer;
    vector<string> answer1;
    vector<string> v;
    for(int i=0;i<record.size();i++){
        v=Split(record[i],' ');
        if(v[0]=="Enter"){
            answer.push_back(v[1]);
            answer1.push_back("님이 들어왔습니다.");
            m[v[1]]=v[2];
        }
        else if(v[0]=="Leave"){
            answer.push_back(v[1]);
            answer1.push_back("님이 나갔습니다.");
        }
        else if(v[0]=="Change"){
            m[v[1]]=v[2];
        }
    }
    for(int i=0;i<answer.size();i++){
        answer[i]=m[answer[i]]+answer1[i];
    }
    return answer;
}