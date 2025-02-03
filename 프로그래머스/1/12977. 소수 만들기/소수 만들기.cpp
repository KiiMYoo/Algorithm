#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    vector<int> Sums;
    
    for(int i = 0; i < nums.size()-2; i++)
    {
        for(int j = i+1; j < nums.size()-1; j++)
        {
            for(int k = j+1; k < nums.size(); k++)
            {
                Sums.push_back(nums[i] + nums[j] + nums[k]);
            }
        }
    }
    
    answer = Sums.size();
    
    for(int i = 0; i < Sums.size(); i++)
    {
        for( int j = 2; j < Sums[i]; j++)
        {
            if(Sums[i]%j == 0)
            {
                answer--;
                break;
            }
        }
    }
    
    
    

    return answer;
}