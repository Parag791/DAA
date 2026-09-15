T hmStr(T l, T s) {
    T m = new();
    if (len(l) == 1) {
        push_r(m, l);
        push_r(m, "=");
        push_r(m, s);
        push_r(m, " ");
    } else {
        T m1 = new();
        push_r(m1, s);
        push_r(m1, "0");
        push_r(m, hmStr(get(l), m1));

        T m2 = new();
        push_r(m2, s);
        push_r(m2, "1");
        push_r(m, hmStr(get(l, 1), m2));
    }
    return m;
};
