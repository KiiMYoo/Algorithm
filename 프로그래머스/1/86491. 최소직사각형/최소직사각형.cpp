#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> a;
    vector<int> b;
    
    for(int i = 0; i < sizes.size(); i++)
    {
        if(sizes[i][0] > sizes[i][1])
        {
            int temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
    }
    for(int i = 0; i < sizes.size(); i ++)
    {
        a.push_back(sizes[i][0]);
        sort(a.begin(), a.end(), greater<>());
    }
    for(int i = 0; i < sizes.size(); i ++)
    {
        b.push_back(sizes[i][1]);
        sort(b.begin(), b.end(), greater<>());
    }
    
    answer = a[0] * b[0];
    return answer;
}