#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long answer = 0;
    long long initial_num = num;
    if (initial_num == 1){
        return 0;
    }
    else{
        while(initial_num != 1){
            if(initial_num%2 == 0){
                initial_num /= 2;
            }
            else{
                initial_num = 3*initial_num+1;
            }
            answer ++;
            if(answer >= 500){
                return -1;
            }
        }
    }
    return answer;
}