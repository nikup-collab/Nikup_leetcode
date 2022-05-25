#include<bits/stdc++.h>
class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        // calculating overkap area
        
        int overlap=max(min(bx2,ax2)-max(ax1,bx1), 0) * max(min(ay2,by2)-max(ay1, by1),0);
        
        int rect1= abs(ax2-ax1)*abs(ay2-ay1);
        int rect2=abs(bx2-bx1)*abs(by2-by1);
        
        return rect1+rect2-overlap;
        
    }
};