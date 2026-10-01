class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(auto x : operations){
            if(x=="+"){
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.push(num1);
                st.push(num1+num2);
            }
            else if(x=="D"){
                int num=st.top()*2;
                st.push(num);
            }
            else if(x=="C"){
                st.pop();
            }
            else st.push(stoi(x));
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
        
    }
};