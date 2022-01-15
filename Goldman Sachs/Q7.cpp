class Solution {
  public:
    int findPosition(int N , int M , int K) {
        if((K+M-1)>N)
        {
            if((K+M-1)%N==0)
               return N;
            else return (M+K-1)%N;
        }
        else
        {
            return K+M-1;
        }
    }
};
