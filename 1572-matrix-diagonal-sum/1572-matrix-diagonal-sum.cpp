class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
         if(mat.size() == 1) return mat[0][0];
    int index = 0;
    int sum = 0;
    for(vector<int> i : mat){
        sum += i[index] + i[i.size() - 1 - index];
        index++;
    }
    if(mat.size() % 2 == 0) return sum;
    else{
        int pos = mat.size() / 2;
        return sum - mat[pos][pos];
    }

    }
};