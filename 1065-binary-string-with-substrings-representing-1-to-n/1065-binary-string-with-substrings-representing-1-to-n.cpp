class Solution {
public:
    bool queryString(string s, int n) {
        for (int i = 1; i <= n; i++) {
            string bin = toBinary(i);
            if (s.find(bin) == string::npos)
                return false;
        }
        return true;
    }

    string toBinary(int num) { 
        string res = "";
        while (num > 0) {
            if (num % 2 == 0){
                res += '0' ; 
            }else {
                res += '1' ; 
            }
            num /= 2;
        }
        res = reverse(res) ; 
        return res ; 
    }
    string reverse(string res){
        int left = 0 ; 
        int right = res.size() - 1 ; 
        int temp ; 
        while(left < right){
            temp = res[left] ; 
            res[left] = res[right]; 
            res[right] = temp ;
            
            left++ ; 
            right-- ; 

        }
        return res ; 
    }
        
        // reverse(res.begin(), res.end());
};