class Solution {
public:
    int fib(int num) {
        if(num<=1)return num;
        int x = 0, y = 1;
   for (int i = 2; i <= num; i++) {
    
     int z = x + y;
      x = y;
      y = z;
   }
    return y;
    }
};