class Solution {
public:
    int countDigits(int num) {
        int rem=0;
        int count=0;
        int n=num;
        while(n>0){
          rem = n % 10;
          if(num % rem == 0){
            count++;
          }
          n=n/10;
        }
        return count;
    }
};