#include "testlib.h"
using namespace std; 
int main(int argc, char* argv[])
{
    registerTestlibCmd(argc, argv);
    //while(!ans.eof()
		long long s = inf.readLong();
    	long long n = ouf.readLong();
		if(n <= 0 || n > 2147483647)
			quitf(_wa, "The answer is wrong");
        long long t = 0, last, d;
    	for (int i = 0; i < n; i++)
		{
	        long long x;
	        x = ouf.readLong();
	        if (x < -2147483648 || x > 2147483647) 
			{
				quitf(_wa, "The answer is wrong");
				return 0;
			}
	        t += x;
	        if(i == 0) last = x;
	        else if (i == 1)
			{
	            d = x - last;
				last = x;
	        } 
			else 
			{
	            if (x - last != d) 
				{
					quitf(_wa, "The answer is wrong");
					return 0;
				}
	            last = x;
			}
    	}
    	if(t != s) quitf(_wa, "The answer is wrong");
    	else quitf(_ok, "The answer is correct.");
    	return 0;
}
