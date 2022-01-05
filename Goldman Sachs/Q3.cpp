class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int front=0;
        int back=0;
        int count=0;
        long long temp=1;
        while(back<n)
        {
            temp*=a[back];
            if(temp<k)
            {
                count+=back-front+1;
            }
            else
            {
                while(front<back&&temp>=k)
                {
                    temp/=a[front];
                    front++;
                }
                if(temp<k)
                {
                    count+=back-front+1;
                }
            }
            back++;
        }
        return count;
    }
};
