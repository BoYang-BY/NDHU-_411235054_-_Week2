class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        vector<int> count1(26,0),count2(26,0);

        for(int i=0; i<s1.size() ;i++){
            count1[s1[i]-'a']++;
        }
            for(int i=0; i<s2.size(); i++)
            {
                count2[s2[i]-'a']++;

                if(i>=s1.size()){
                    count2[s2[i-s1.size()]-'a']--;
                }
                
                if(count1 == count2){
                    return true;
                }
            }
        
        return false;
    }
};