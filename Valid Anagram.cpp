
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()==t.length())
        {
        //for string s
        unordered_map<char,int> s1;
        for(int i=0;i<s.length();i++)
        {
            int key=s[i];
            s1[key]++;
        }
        //for string t
        unordered_map<char,int> t1;

        for(int i=0;i<t.length();i++)
        {
            int key2=t[i];
            t1[key2]++;
        }

        for(auto itr=s1.begin();itr!=s1.end();itr++)
        {
            if(t1[itr->first]!=itr->second){
                return false;

            }
        }

        return true;

        
        }
        else
        {
            return false;
        }

    }
};
