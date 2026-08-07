class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int n = min(word1.size(), word2.size());

        string m;
        int i;
        for(i=0;i<n;i++){
            m.push_back(word1[i]);
            m.push_back(word2[i]);
        }
        if(word1.size()>word2.size()){
            for(int j=i;j<word1.size();j++)
                m.push_back(word1[j]);
            
        }else{
            for(int j=i;j<word2.size();j++)
                m.push_back(word2[j]);
            
        }
           
        return m;
    }
};