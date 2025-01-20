#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> numstring = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    for (int i = 0; i < 10; i++)
    {
        while(s.find(numstring[i]) != string::npos)
        {
            s.replace(s.find(numstring[i]), numstring[i].length(), to_string(i));
        }
    }

    answer = stoi(s);

    return answer;
}