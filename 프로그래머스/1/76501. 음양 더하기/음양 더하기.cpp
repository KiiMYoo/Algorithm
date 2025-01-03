#include <string>
#include <vector>

using namespace std;

long long solution(vector<int> absolutes, vector<bool> signs) {
    long long answer = 0;
    for(int i = 0; i < absolutes.size(); i++){
        if (signs[i] == true){
            answer += absolutes[i];
        }
        else{
            answer -=absolutes[i];
        }
    }
    return answer;
}