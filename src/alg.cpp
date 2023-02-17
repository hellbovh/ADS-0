// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
        int res;
        while (a != b) {
                if (a > b)
                        a - a - b;
                else
                        b = b - a;
        }
        res = a;
        return res;
}
