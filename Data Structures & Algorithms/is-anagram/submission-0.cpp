class Solution {
public:
    bool isAnagram(string s, string t) {
        int i=0;
        int j=0;
        if(s.size()!=t.size()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        while(i<=s.size()-1){
            if(s[i]!=t[j]){
                return false;
            }
            i++;
            j++;

        }
        return true ;

    }
};
