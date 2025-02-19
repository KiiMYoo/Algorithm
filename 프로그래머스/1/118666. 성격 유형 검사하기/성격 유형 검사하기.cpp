#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    unordered_map<char, int> Personality = {{'R', 0}, {'T', 0}, {'C', 0}, {'F', 0}, {'J', 0}, {'M', 0}, {'A', 0}, {'N', 0}};
    vector<int> Score = {3, 2, 1, 0, 1, 2, 3};
    
    for(int i = 0; i < choices.size(); i++)
    {
        switch(choices[i])
        {
            case 1:
                Personality[survey[i][0]] += 3;
                break;
            case 2:
                Personality[survey[i][0]] += 2;
                break;
            case 3:
                Personality[survey[i][0]] += 1;
                break;
            case 4:
                break;
            case 5:
                Personality[survey[i][1]] += 1;
                break;
            case 6:
                Personality[survey[i][1]] += 2;
                break;
            case 7:
                Personality[survey[i][1]] += 3;
                break;
        }
    }
    
    if(Personality['R'] >= Personality['T'])
    {
        answer += 'R';
    }
    else
    {
        answer += 'T';
    }
    
    if(Personality['C'] >= Personality['F'])
    {
        answer += 'C';
    }
    else
    {
        answer += 'F';
    }
    
    if(Personality['J'] >= Personality['M'])
    {
        answer += 'J';
    }
    else
    {
        answer += 'M';
    }
    
    if(Personality['A'] >= Personality['N'])
    {
        answer += 'A';
    }
    else
    {
        answer += 'N';
    }
    return answer;
}