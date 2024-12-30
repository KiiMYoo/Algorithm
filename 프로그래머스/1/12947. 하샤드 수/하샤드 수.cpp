#include <string>
#include <vector>

using namespace std;


bool solution(int x) {
    int a = 0;
    int initial_x = x;
    while(x!=0){
        a += x%10;
        x /= 10;
    }
    return initial_x%a == 0;
}