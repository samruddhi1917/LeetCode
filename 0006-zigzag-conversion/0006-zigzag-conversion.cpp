class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> matrix(numRows, vector<char>(s.size(), ' '));
        int cnt=0;
        int j=0;
        int k=0;
        while(cnt==0 && k<s.size()){
            int i;
            for(i=0;i<numRows;i++){
                if(k<s.size())
                    matrix[i][j]=s[k++];
            }
            if(k<s.size()){
                cnt++;
                j++;
            }
    
            for(int m=i-2;m>0;m--){
                if(k<s.size())
                    matrix[m][j++]=s[k++];
            }
            if(k<s.size())
                cnt--;
        
        }
        k=0;
        for(int i=0;i<numRows;i++){
            for(int j=0;j<s.size();j++){
                if(matrix[i][j]!=' '  && k<s.size())
                    s[k++]=matrix[i][j];
            }
        }
        return s;

    }
};