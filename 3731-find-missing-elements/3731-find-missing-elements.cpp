class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if(nums.empty()){
                return {};
            }

        sort(nums.begin(),nums.end());
        vector<int> miss;
        int counter=0;

        for(int i=nums[0];i<=nums.back();i++){
            
            if(nums[counter]==i){
                counter++;    
            }
            else{
                miss.push_back(i);
                
            }
        }
        return miss;
        
    }
};