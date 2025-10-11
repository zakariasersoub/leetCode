class Solution {
public:
    bool isPalindrome(int x) {
        // الأعداد السالبة ليست Palindrome
        // وأي عدد ينتهي بصفر (ما عدا 0 نفسه) لا يمكن أن يكون Palindrome
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // في حالة الأعداد ذات عدد زوجي أو فردي من الأرقام
        return (x == reversedHalf || x == reversedHalf / 10);
    }
};
