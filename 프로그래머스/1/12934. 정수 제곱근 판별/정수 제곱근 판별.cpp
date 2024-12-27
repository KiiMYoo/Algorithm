#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int y = 0;
    for(long long i = 1; y < n ;i++){
        y = i*i;
        answer = (n==y) ? (i+1)*(i+1) : -1;
    }
    return answer;
}