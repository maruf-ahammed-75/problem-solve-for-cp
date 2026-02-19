Description: Computes partial sums a[0] + a[1] + ... + a[pos - 1], and
updates single elements a[i], taking the difference between the old and new
value.
Time: Both operations are O (log N).(0 based indexing)

struct FT {
    vector<ll> s;
    int n;

    FT(int n) {
        this->n = n;
        s = vector<ll>(n, 0);
    }

    // add 'dif' to index pos
    void update(int pos, ll dif) {
        for (; pos < n; pos |= pos + 1)
            s[pos] += dif;
    }

    // sum of range [0, pos)
    ll query(int pos) {
        ll res = 0;
        for (; pos > 0; pos &= pos - 1)
            res += s[pos - 1];
        return res;
    }

    // sum of range [l, r)
    ll query(int l, int r) {
        return query(r) - query(l);
    }

    // find minimum pos such that sum[0, pos] >= sum
    // returns -1 if sum <= 0
    // returns n if no prefix satisfies
    int lower_bound(ll sum) {
        if (sum <= 0) return -1;

        int pos = 0;
        ll cur_sum = 0;

        // largest power of 2 <= n
        int pw = 1;
        while ((pw << 1) <= n) pw <<= 1;

        for (; pw > 0; pw >>= 1) {
            if (pos + pw <= n && cur_sum + s[pos + pw - 1] < sum) {
                cur_sum += s[pos + pw - 1];
                pos += pw;
            }
        }

        return pos;  // 0-based index
    }
};
