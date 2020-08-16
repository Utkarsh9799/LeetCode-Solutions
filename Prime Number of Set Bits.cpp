class Solution {
public:
    int setBits(int n)
    {
        int ctr = 0;
        while(n > 0)
        {
            n &= (n - 1);
            ctr++;
        }
        return ctr;
    }
    
    int isPrime(int n)
    {
        if (n <= 1) 
            return 0; 
  
    
        for (int i = 2; i < n; i++) 
            if (n % i == 0) 
                return 0; 
  
        return 1; 
    }
    
    int countPrimeSetBits(int L, int R) {
        int ctr = 0;
        for(int i = L; i <= R; i++)
        {
            ctr += isPrime(setBits(i));
        }
        return ctr;
    }
};
