class TreeAncestor
{
public:
    int N;
    vector<vector<int>> dp;
    vector<int> depth;

    int LOG;
    TreeAncestor(int n, vector<int> &parent)
    {
        LOG = 0;
        while ((1 << (LOG)) <= n)
            LOG++;
        dp = vector<vector<int>>(n, vector<int>(LOG));
        depth = vector<int>(n);
        parent[0] = 0;
        for (int i = 0; i < n; i++)
        {
            dp[i][0] = parent[i];
            if (i != 0)
                depth[i] = depth[parent[i]] + 1;
            for (int j = 1; j < LOG; j++)
            {
                // if((dp[i][j-1])!=-1){
                dp[i][j] = dp[dp[i][j - 1]][j - 1];
                // }
            }
        }
    }

    int getKthAncestor(int node, int k)
    {
        if (depth[node] < k)
            return -1;

        for (int i = 0; i < LOG; i++)
        {
            // if((1&(k>>1))) {node= dp[node][i]; k = k>>1;}
            if ((k & (1 << i)))
                node = dp[node][i];
        }
        return node;
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */

class TreeAncestor
{
public:
    vector<vector<int>> up; // int up[N][20];
    TreeAncestor(int n, vector<int> &parent)
    {
        // LOG = 0;
        //  while((1 << LOG) <= n) {
        //      LOG++;
        //  }
        up = vector<vector<int>>(n, vector<int>(20, -1));
        // up[v][j] is 2^j -th ancestor of node v
        // parent[0] = 0;
        for (int v = 1; v < n; v++)
        {
            up[v][0] = parent[v];
            // if(v != 0) {
            // depth[v] = depth[parent[v]] + 1;
            // }
            for (int j = 1; j < 20; j++)
            {
                if (up[v][j - 1] != -1)
                    up[v][j] = up[up[v][j - 1]][j - 1];
            }
        }
    }

    int getKthAncestor(int node, int k)
    {
        //  if(depth[node] < k) {
        //     return -1;
        for (int i = 0; i < 20; i++)
        {
            if (k & (1 << i))
            {
                node = up[node][i];
                if (node == -1)
                    return -1;
            }
        }
        return node;
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */