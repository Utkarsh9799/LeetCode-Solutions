class Solution {
public:
    int fib(int N) {
        if(N == 0 || N == 1)
            return N;
        
        int i, first = 0, second = 1, next;
        for(i = 1; i < N; i++)
        {
            next = first + second;
            first = second;
            second = next;
        }
        return next;
    }
};
