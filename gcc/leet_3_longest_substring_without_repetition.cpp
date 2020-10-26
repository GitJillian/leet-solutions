class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        
        int result = 0;
        if (s.length() == 0){
            result = 0;
        }
        else if(s.length() == 1){
            result = 1;
        }
        else{
            string temp_string = "";
            for(int i = 0; i<s.length(); i++)
            {   string str(1, s.at(i));
                temp_string += str;
                int start_index = temp_string.find(str);
                if (start_index!=temp_string.length()-1){
                    result = max(result, max(int(start_index+1), int(temp_string.length()-1 - start_index)));
                    temp_string = temp_string.substr(start_index+1, temp_string.length()-1);
            
                }
                else{
                    result = max(int(temp_string.length()),result);
                }
            }
        }
        return result;
    }   
};
