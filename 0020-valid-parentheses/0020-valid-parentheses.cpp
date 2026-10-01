class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{//if closing brackets then to pop
                if(st.empty()){//in empty stack cant pop
                    return false;
                }
                if((st.top()=='(' && s[i]==')')||
                   (st.top()=='[' && s[i]==']')||
                   (st.top()=='{' && s[i]=='}')){
                    st.pop();
                  }
                  else{//no match
                  return false;
            }
        }
        }
        return st.empty();
    
    }
};