class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> col;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for (int i : row) {
        for (int j = 0; j < matrix[i].size(); j++) {
            matrix[i][j] = 0;
        }
    }

    // Step 3: Zero out columns
    for (int j : col) {
        for (int i = 0; i < matrix.size(); i++) {
            matrix[i][j] = 0;
        }
    }
       


            
        
    
    }
};