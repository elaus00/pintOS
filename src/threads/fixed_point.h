#define F (1 << 14)
#define INT_MAX ((1 << 31) - 1)
#define INT_MIN (-(1 << 31))
#define FRACTION (1 << 14) // FRACTION 은 14 비트의 분수부

// 정수를 고정 소수점으로 변환
int int_to_fp(int n) {
    return n * FRACTION;
}

// 고정 소수점을 정수로 변환 (소수점 아래를 버림)
int fp_to_int(int x) {
    return x / FRACTION;
}

// 고정 소수점을 정수로 변환 (반올림)
int fp_to_int_round(int x) {
    if (x >= 0) {
        return (x + FRACTION / 2) / FRACTION;
    } else {
        return (x - FRACTION / 2) / FRACTION;
    }
}

// 고정 소수점 덧셈
int add_fp(int x, int y) {
    return x + y;
}

// 고정 소수점 뺄셈
int sub_fp(int x, int y) {
    return x - y;
}

// 정수와 고정 소수점의 덧셈
int add_mixed(int x, int n) {
    return x + n * FRACTION;
}

// 정수와 고정 소수점의 뺄셈
int sub_mixed(int x, int n) {
    return x - n * FRACTION;
}

// 고정 소수점 곱셈
int mult_fp(int x, int y) {
    return ((int64_t)x * y) / FRACTION;
}

// 고정 소수점과 정수의 곱셈
int mult_mixed(int x, int n) {
    return x * n;
}

// 고정 소수점 나눗셈
int div_fp(int x, int y) {
    return ((int64_t)x * FRACTION) / y;
}

// 고정 소수점과 정수의 나눗셈
int div_mixed(int x, int n) {
    return x / n;
}
