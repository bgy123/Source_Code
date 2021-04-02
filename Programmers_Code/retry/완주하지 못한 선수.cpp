//해시 뭔지 모름
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    /*for(int i=0;i<participant.size();i++){
        for(int j=0;j<completion.size();j++){
            if(participant[i]==completion[j]){
                participant.erase(participant.begin()+i);
                completion.erase(completion.begin()+j);
                i--;
                j--;
                break;
            }
        }
    }*/
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for (int i = 0; i < completion.size(); i++) {
        if (participant[i] != completion[i]) {
            return participant[i];
        }
    }
    return participant[participant.size() - 1];
    /*string answer = "";
    answer=participant[0];
    return answer;*/
}