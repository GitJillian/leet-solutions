#include <iostream>
class Solution {
public:
    int reverse(intv x) {
        string x_str =x.to_string();
        return int(x_str);
        
    }
};
int main(){
    cout<<reverse(10)<<cout;
    return 0;
}