class Solution {
public:
    bool judgeCircle(string moves) {
        int a[2];
        for(char c : moves){
            if(c == 'R'){
                a[0]+=1;  
            }
            else if(c == 'L'){
                a[0] = a[0] - 1;
            }
            else if(c == 'U'){
                a[1] +=1;
            }
            else if(c == 'D'){
                a[1] = a[1] - 1;
            }
        }
        if(a[0] == 0&&a[1]==0){
            return true;
        }
        else return false;
    }
};