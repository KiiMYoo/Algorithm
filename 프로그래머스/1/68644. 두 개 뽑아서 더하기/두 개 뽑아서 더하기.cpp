#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i = numbers.size()-1; i >0; i--)
    {
        for(int j = 0; j < numbers.size(); j++)
        {
            for(int k = j + 1; k < numbers.size(); k++)
            {
                if(find(answer.begin(), answer.end(), numbers[j] + numbers[k]) == answer.end())
                {
                    answer.push_back(numbers[j] + numbers[k]);
                }
            }
            
        }
        sort(answer.begin(), answer.end());
    }
    return answer;
}