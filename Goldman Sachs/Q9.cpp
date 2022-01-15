class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        int t=1;
        stack<int> st;
        string ans="";
        for(int i=0;i<S.size();i++)
        {
            st.push(t);
            t++;
            if(S[i]=='I')
            {
                while(!st.empty())
                {
                    ans+=to_string(st.top());
                    st.pop();
                }
                
            }
        }
        st.push(t);
        while(!st.empty())
        {
            ans+=to_string(st.top());
            st.pop();
        }
        return ans;
    }
};
