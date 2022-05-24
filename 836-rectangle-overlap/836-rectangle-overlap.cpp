class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        
        if(rec2[1]>=rec1[3] || rec2[3]<=rec1[1] ||  rec2[0]>= rec1[2] || rec1[0]>=rec2[2])
            return false;
        
        return true;                           
        
    }
};

//rectangle will not overlap if rectangle lies on top , bottom , left and right of first rectangle
//so, i just given condition in which rectangle lies in those condition