code:
int Solution::solve(int A, int B, int C) {
    int temp = (A>>(B-1)&1) ^ (A>>(C-1)&1);
    A = A ^ (temp <<(B-1));
    A = A ^ (temp << (C-1));
    return A;
}
