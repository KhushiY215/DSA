class Solution {
public:
    static constexpr int MOD = 1e9 + 7;
    static constexpr int LOG = 17; // 2^17 > 1e5

    vector<int> depth;
    vector<vector<int>> up;
    vector<long long> pow2;
    vector<vector<int>> g;

    void dfs(int u, int p) {
        up[0][u] = p;

        for (int v : g[u]) {
            if (v == p) continue;
            depth[v] = depth[u] + 1;
            dfs(v, u);
        }
    }

    int lca(int a, int b) {
        if (depth[a] < depth[b]) swap(a, b);

        int diff = depth[a] - depth[b];
        for (int k = 0; k < LOG; k++) {
            if (diff & (1 << k))
                a = up[k][a];
        }

        if (a == b) return a;

        for (int k = LOG - 1; k >= 0; k--) {
            if (up[k][a] != up[k][b]) {
                a = up[k][a];
                b = up[k][b];
            }
        }

        return up[0][a];
    }

    vector<int> assignEdgeWeights(vector<vector<int>>& edges,
                                  vector<vector<int>>& queries) {
        int n = edges.size() + 1;

        g.assign(n + 1, {});
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            g[u].push_back(v);
            g[v].push_back(u);
        }

        depth.assign(n + 1, 0);
        up.assign(LOG, vector<int>(n + 1, 1));

        dfs(1, 1);

        for (int k = 1; k < LOG; k++) {
            for (int v = 1; v <= n; v++) {
                up[k][v] = up[k - 1][ up[k - 1][v] ];
            }
        }

        pow2.assign(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            pow2[i] = (pow2[i - 1] * 2) % MOD;
        }

        vector<int> ans;

        for (auto &q : queries) {
            int u = q[0], v = q[1];

            int w = lca(u, v);
            int len = depth[u] + depth[v] - 2 * depth[w];

            if (len == 0) ans.push_back(0);
            else ans.push_back((int)pow2[len - 1]);
        }

        return ans;
    }
};