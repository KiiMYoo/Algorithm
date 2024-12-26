#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int a = 0;
    
    for(int i = 1; i <= n; i++){
        a=n%i;
        if(a==0){
            answer += i;
        }
    }
    return answer;
}