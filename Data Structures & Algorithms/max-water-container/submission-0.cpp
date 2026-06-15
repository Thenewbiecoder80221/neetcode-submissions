class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int area=1;
        int max_area=INT_MIN;
        while(left<=right){

        
            if(heights[left]>=heights[right]){
                area=heights[right]*(right-left);
                right--;
            }
            else{
                area=heights[left]*(right-left);
                left++;
            }

           max_area=max(max_area,area);
        }
        return max_area;
    }
};
