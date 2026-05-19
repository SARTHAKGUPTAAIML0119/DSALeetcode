#include <map>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        map<char, int> r = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        
        
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && r.at(s[i]) < r.at(s[i + 1])) {
                sum -= r.at(s[i]);
            }
            else {
                sum += r.at(s[i]);
            }
        } 
        
        return sum;
    }                
};