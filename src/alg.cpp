// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
        int res = 1;
        if (a < 0)
                a *= -1;
        if (b < 0)
                b *= -1;
        while (a != b) {
                if (a > b)
                        a - a - b;
                else
                        b = b - a;
        }
        res = a;
        return res;
}
