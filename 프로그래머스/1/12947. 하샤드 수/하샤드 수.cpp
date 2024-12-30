#include <string>
#include <vector>

using namespace std;


bool solution(int x) {
    bool answer = true;
    int a = 0;
    int initial_x = x;
    while(x!=0){
        a += x%10;
        x /= 10;
    }
    if (initial_x % a == 0){
        answer = true;
    }
    else{
        answer = false;
    }
    return answer;
}