class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        for(int i : candies){
            if(i>max){
                max = i;
            }
        }
        vector<bool> result;
        for(int i : candies){
            if(i+extraCandies >= max){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
        
    }
};