class Solution {
public:
    bool isPalindrome(int x) {
        string temp = to_string(x);
        for(int i = 0; i<temp.length();i++){
            if(temp.at(i)!=temp.at(temp.length()-1-i)){
                return false;
            }
        }return true;
    }
};
