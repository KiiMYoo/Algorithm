#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int s = n/2;
    
    if(n%2 != 0){
        for(int i = 0; i < s + 1; i++){
            answer += "수";
            for(int j = i; j < s; j++){
                answer += "박";
                break;
            }
        }
    }
    else{
        for(int i = 0; i < s; i++){
            answer += "수";
            for(int j = 0; j < s; j++){
                answer += "박";
                break;
            }
        }
    }
    return answer;
}