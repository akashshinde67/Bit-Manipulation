code:
int Solution::numSetBits(unsigned int A) {
    assert(A >= 0 && A <= UINT_MAX );
    unsigned int total_ones = 0;
    while (A != 0) {
        A = A & (A-1);
        total_ones++;
    }
    return total_ones;
}
