#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Trie {
    Trie* child[26] = {};
    string word = ""; // terminal string
};

class Solution {
public:
    vector<string> ans;
    ll m, n;

    void insert(Trie* root, string& w) {
        for (char c : w) {
            if (!root->child[c - 'a']) root->child[c - 'a'] = new Trie();
            root = root->child[c - 'a'];
        }
        root->word = w; // mark end of word
    }

    void dfs(vector<vector<char>>& b, ll i, ll j, Trie* node) {
        char c = b[i][j];
        if (c == '#' || !node->child[c - 'a']) return;
        node = node->child[c - 'a'];

        if (!node->word.empty()) {
            ans.push_back(node->word);
            node->word = ""; // avoid duplicates
        }

        b[i][j] = '#';
        if (i > 0) dfs(b, i - 1, j, node);
        if (j > 0) dfs(b, i, j - 1, node);
        if (i < m - 1) dfs(b, i + 1, j, node);
        if (j < n - 1) dfs(b, i, j + 1, node);
        b[i][j] = c;
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie* root = new Trie();
        for (auto& w : words) insert(root, w);

        m = board.size(); 
        n = board[0].size();
        for (ll i = 0; i < m; i++)
            for (ll j = 0; j < n; j++)
                dfs(board, i, j, root);

        return ans;
    }
};
