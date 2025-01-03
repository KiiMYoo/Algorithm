#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    string add = "";
    int i = phone_number.length() - 4;
    
    answer =  add.append(i, '*')+ phone_number.substr(i, 4);
    return answer;
}