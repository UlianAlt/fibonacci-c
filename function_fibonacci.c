int fibonacci(int num) {
    if (num <= 0) return 0;
    if (num == 1) return 1;

    int a = 0;
    int b = 1;
    int result = 0;

    for (int i = 2; i <= num; i++) {
        result = a + b;
        a = b;
        b = result;
    }

    return result;
}
