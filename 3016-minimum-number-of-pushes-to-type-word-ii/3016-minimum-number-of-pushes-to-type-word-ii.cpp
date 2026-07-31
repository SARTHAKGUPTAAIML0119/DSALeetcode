class Solution {
public:
    int minimumPushes(string word) {
        int total_cost=0;
        vector<int>freq(26,0);
        for(char c:word){
            freq[c-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        for(int i=0;i<26;i++){
            if(freq[i]==0) break;
            int cost=((i/8)+1);
            total_cost+=freq[i]*cost;
        }
        return total_cost;
    }
};