class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        
        for(int i=1;i<=numRows;i++)
        {
            int p=1;
            vector<int> v;
            for(int j=1;j<=i;j++)
            {
                v.push_back(p);
                p=p*(i-j)/j;
            }
            pascal.push_back(v);
        }
    return pascal;
    }
};