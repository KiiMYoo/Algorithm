#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> Weapons;
    
    for(int i = 1; i <= number; i++)
    {
        int attack = 0;
        
        for(int j = 1; j <= sqrt(i); j++)
        {
            if(j == sqrt(i))
            {
                attack += 1;
            }
            else if(i % j == 0)
            {
                attack += 2;
            }
        }
        
        if (attack > limit)
        {
            answer += power;
        }
        else
        {
            answer += attack;
        }
    }
    
    return answer;
}