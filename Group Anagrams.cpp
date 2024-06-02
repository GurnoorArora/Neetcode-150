class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //making an array of unordered n=map
            //sorting all the strings first
            //making an unordered map
            unordered_map<string,vector<string>> umap;
             vector<vector<string>> ans;
            for(int i=0;i<strs.size();i++)
            {
                string temp=strs[i];
                sort(strs[i].begin(),strs[i].end());
                umap[strs[i]].push_back(temp);

            }
            //after sorting let us use the sorted values as hashed values
             for(auto it:umap)
            ans.push_back(it.second);
        
        return ans;
    }
            
    
};
