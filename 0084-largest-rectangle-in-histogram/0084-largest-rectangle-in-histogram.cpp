class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>left(n,0);//left smaller nearest
        vector<int>right(n,0); //right small nearest
        stack<int>st;

        //right smaller nearest   //same as next greater element only difference is greater
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                right[i]=n;  //right side border case we cant write it as -1
            }
            else {
                right[i]=st.top();
        }
        st.push(i);
    }

    while(!st.empty()){
        st.pop();
    }

    //left smaller nearest //same as previous smaller element
    for(int i=0;i<n;i++){
        while(st.size()>0 && heights[st.top()]>=heights[i]){
            st.pop();
        }
        if(st.empty()){
            left[i]=-1;
        }
        else{
             left[i]=st.top();
        }
        st.push(i);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int width = right[i]-left[i]-1;
        int currArea = heights[i] * width; 
        ans=max(ans,currArea);
    }
    return ans;
    }
};