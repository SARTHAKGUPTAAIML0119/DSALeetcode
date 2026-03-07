class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;

        int count=0;
        for(int i=0;i<n+1;i++){
            if(digits[i]==9){
                count+=1;
            }
        }
        if(count==digits.size()){
            vector<int> result(n + 2, 0);
            result[0] = 1;
            return result;

        }
        else{
            for(int i=n;i>=0;i--){
            if(digits[i]+1==10){
                digits[i]=0;   
            }
            else{
                digits[i]+=1;
                break;
                }
            }

        }
        
        
    return digits;
    }
};