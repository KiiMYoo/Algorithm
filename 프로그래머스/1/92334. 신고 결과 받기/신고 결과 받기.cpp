#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    unordered_map<string, unordered_set<string>> reports; 
    unordered_map<string, int> reportedCount;
    unordered_map<string, int> mailCount;

    for (const string& entry : report) {
        stringstream ss(entry);
        string reporter, reported;
        ss >> reporter >> reported;

        if (reports[reporter].insert(reported).second) {
            reportedCount[reported]++;
        }
    }

    unordered_set<string> bannedUsers;
    for (const auto& entry : reportedCount) {
        if (entry.second >= k) {
            bannedUsers.insert(entry.first);
        }
    }

    // 메일 개수 계산
    for (const auto& entry : reports) {
        for (const string& reported : entry.second) {
            if (bannedUsers.count(reported)) {
                mailCount[entry.first]++;
            }
        }
    }

    vector<int> answer;
    for (const string& id : id_list) {
        answer.push_back(mailCount[id]);
    }

    return answer;
}
