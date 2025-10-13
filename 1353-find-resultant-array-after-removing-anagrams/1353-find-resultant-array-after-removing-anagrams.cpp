class Solution
{
    public:
        bool isanagram(string a, string b)
        {
            int al[26] = { 0 };
            for (int i = 0; i < a.size(); i++)
            {
                int d = a[i] - 'a';
                al[d]++;
            }
            for (int i = 0; i < b.size(); i++)
            {
                int d = b[i] - 'a';
                al[d]--;
            }
            for (int i = 0; i < 26; i++)
            {
                if (al[i] != 0)
                    return false;
            }
            return true;
        }
    vector<string> removeAnagrams(vector<string> &words)
    {
        vector<string> res;
        for (int i = 0; i < words.size(); i++)
        {
            if (words[i] == " ")
            {
                continue;
            }
            for (int j = i + 1; j < words.size(); j++)
            {
                if (words[j] == " ")
                {
                    continue;
                }
                if (isanagram(words[i], words[j]))
                {
                    words[j].replace(0, words[j].size(), " ");
                }
                else
                {
                    break;
                }
            }
            res.push_back(words[i]);
        }
        return res;
    }
};