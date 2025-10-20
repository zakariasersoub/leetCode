class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        int temp ; 
        while(left < right){
            temp = s[left] ; 
            s[left] = s[right] ;
            s[right] = temp ; 

            left ++ ; 
            right -- ; 
        }
        
    }
};