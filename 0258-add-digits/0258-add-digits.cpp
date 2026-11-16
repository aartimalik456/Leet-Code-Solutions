class Solution {
public:
    int addDigits(int num) {
        int rem=0;
        while(num>=10){
        int sum=0;
        while(num>0){
            rem=num%10;
            sum += rem;
            num=num/10;
        }
        num=sum;
        }
        return num;
        
    }
};