#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        string s, t;
        cin >> s >> t;

        // Frequency of characters required in target string
        vector<int> freq(26, 0);

        for(char ch : t)
        {
            freq[ch - 'A']++;
        }

        int i = s.size() - 1;
        int j = t.size() - 1;

        bool possible = true;

        while(i >= 0 && j >= 0)
        {
            // Character match ho gaya
            if(s[i] == t[j])
            {
                freq[s[i] - 'A']--;

                i--;
                j--;
            }
            else
            {
                // Ye character future me chahiye
                if(freq[s[i] - 'A'] > 0)
                {
                    possible = false;
                    break;
                }

                // Ye character kabhi nahi chahiye
                i--;
            }
        }

        // Agar t ka koi character match hi nahi hua
        if(j != -1)
        {
            possible = false;
        }

        if(possible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
