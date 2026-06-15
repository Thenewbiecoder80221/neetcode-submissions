class Solution {
public:
    int trap(vector<int>& height) {
        int trapi=0;
        vector<int>lmax;
        vector<int>rmax;
        int lmaxi=INT_MIN;
        int rmaxi=INT_MIN;
        for(int i=0;i<height.size();i++){
            if(height[i]>=lmaxi){
                lmaxi=height[i];
                lmax.push_back(lmaxi);
            }
            else{
                lmax.push_back(lmaxi);
            }

        }
        for(int i=height.size()-1;i>=0;i--){
            if(height[i]>=rmaxi){
                rmaxi=height[i];
                rmax.push_back(rmaxi);
            }
            else{
                rmax.push_back(rmaxi);
            }
    }
    reverse(rmax.begin(),rmax.end());
    for(int i=0;i<lmax.size();i++){
            trapi=trapi+min(lmax[i],rmax[i])-height[i];

        }
    
    return trapi;
    }
};
