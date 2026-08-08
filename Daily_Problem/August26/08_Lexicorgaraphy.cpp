#include <bits/stdc++.h>
using namespace std;
vector<int> validSequence(string word1, string word2)
{
    int n = word1.size(), m = word2.size();
    vector<int> last(m, -1);

    int p = n - 1;
    for (int j = m - 1; j >= 0; j--)
    {
        while (p >= 0 && word1[p] != word2[j])
        {
            p--;
        }
        last[j] = p;
        if (p >= 0)
            p--;
    }

    vector<int> seq(m);
    bool used = false;
    int i = 0;

    for (int j = 0; j < m; j++)
    {
        bool found = false;
        while (i < n)
        {
            if (word1[i] == word2[j])
            {
                if (used)
                {
                    if (j + 1 == m || last[j + 1] > i)
                    {
                        seq[j] = i++;
                        found = true;
                        break;
                    }
                }
                else
                {
                    seq[j] = i++;
                    found = true;
                    break;
                }
            }
            else
            {
                if (!used && (j + 1 == m || last[j + 1] > i))
                {
                    seq[j] = i++;
                    used = true;
                    found = true;
                    break;
                }
            }
            i++;
        }
        if (!found)
            return {};
    }

    return seq;
}
int main()
{
    string word1 = "vbcca";
    string word2 = "abc";
    cout << validSequence(word1,word2).size();
    return 0;
    
}