#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left = 0;
        int maxLength = 0;
        
       
        vector<int> charCount(26, 0); 
        
        for (int right = 0; right < s.length(); ++right) {
            
            int currCharIndex = s[right] - 'a';
            charCount[currCharIndex]++;
            
             while (charCount[currCharIndex] > 2) {
                int leftCharIndex = s[left] - 'a';
                charCount[leftCharIndex]--;
                left++;
            }
            
            
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};