class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;  //map stores the char and its freq
        queue<int>q;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(m.find(s[i]) == m.end()){ //if char is not in the map
               q.push(i);  //then insert its index
            }
             m[s[i]]++;  //and increase its freq
            while(q.size()>0 && m[s[q.front()]] > 1){  //if freq is greater then 1 in the map
                q.pop();  //then pop that char
            }
        }
        if(q.empty()){
                return -1;
            }
            else{
                return q.front();
            }
    }
};