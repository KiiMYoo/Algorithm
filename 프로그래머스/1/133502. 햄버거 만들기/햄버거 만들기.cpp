#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> stack;
    
    for (int i = 0; i < ingredient.size(); i++) {
        stack.push_back(ingredient[i]);

        if (stack.size() >= 4 &&
            stack[stack.size() - 4] == 1 &&
            stack[stack.size() - 3] == 2 &&
            stack[stack.size() - 2] == 3 &&
            stack[stack.size() - 1] == 1) {
            
            // 패턴 발견 시 제거
            stack.erase(stack.end() - 4, stack.end());
            answer++;
        }
    }
    return answer;
}
