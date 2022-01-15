class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    ull x=0;
	    ull y=0;
	    ull z=0;
	    ull a[n];
	    a[0]=1;
	    ull m;
	    for(int i=1;i<n;i++)
	    {
	        m=min(2*a[x], min(3*a[y],5*a[z]));
	        a[i]=m;
	        if(2*a[x]==m)
	        {
	            x++;
	        }
	        if(3*a[y]==m)
	        {
	            y++;
	        }
	        if(5*a[z]==m)
	        {
	            z++;
	        }
	    }
	    return a[n-1];
	}
};
