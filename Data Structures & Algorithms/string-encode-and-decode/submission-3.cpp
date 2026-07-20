class Solution {
public:

    string encode(vector<string>& strs) {
        string encde;
        int len =0;
        for(int i =0;i<strs.size();i++)
        {   
            len = strs[i].size();
            encde += to_string(len)+"#"+strs[i];
        }
        return encde;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int len =0;
        int siz=0;
        while(len <s.size())
        {
            while(s[len]!='#')
            {
                siz=siz*10+(s[len]-'0');
                len++;
            }
            len++;
            string str = "";
            int k=len;
            while(siz--)
            {
                str+=s[k];
                len++;
                k++;
            }
            ans.push_back(str);
            siz=0;
        }
        return ans;
    }
};
