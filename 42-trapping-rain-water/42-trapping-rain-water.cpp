class Solution {
public:
    int trap(vector<int>& height) {
        
        int maxleft[height.size()];
        int maxright[height.size()];
        
        //array to store left maximum aray
        maxleft[0]=0;
        for(int i=1;i<height.size();i++){
            maxleft[i]=max(maxleft[i-1], height[i-1]);
        }
        
        //array to store right maximum,
        maxright[(height.size()-1)]=0;
        
        for(int i=height.size()-2;i>=0;i--)
            maxright[i]=max(maxright[i+1], height[i+1]);
        
        //find total water
        int sum=0;
        int s=0;
        
        for(int i=0;i<height.size();i++){
            s=min(maxleft[i],maxright[i])-height[i];
            
            if(s>=0)
                sum+=s;
        }
        return sum;
        
    }
};