class Solution {
public:
    void makeRow(int rowSize, vector<vector<int>> & solution){
        vector<int> newRow (rowSize + 1,0);
        newRow[0] = 1;
        newRow[rowSize] = 1;
        if(rowSize == 0 || rowSize == 1){
            solution.push_back(newRow);
            return;
        }
        // build row based on prev row
        for(int i = 0; i < rowSize - 1; i++){
            newRow[i+1] = (solution[rowSize - 1][i] + solution[rowSize - 1][i+1]);
        }
        solution.push_back(newRow);
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>solution;
        for(int i = 0; i < numRows; i++){
            makeRow(i,solution);
        }
        return solution;   
    }
};