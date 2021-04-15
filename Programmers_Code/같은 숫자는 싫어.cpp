/*arr.erase(unique(arr.begin(), arr.end()),arr.end());
<algorithm>
unique() 인접요소가 같을경우 뒤로 보내고 포인터값 반환
sort()사용하고사용하면 좋음*/
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++) {
        if (i != 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        answer.push_back(arr[i]);
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    //cout << "Hello Cpp" << endl;

    return answer;
}