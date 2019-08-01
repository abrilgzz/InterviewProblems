class Solution {
public:
    string addBinary(string a, string b) {
        // Find the largest string
        // a.length() == 4
        // b.length() == 4
        string largest = (a.length() >= b.length()) ? a : b;
        string shortest = (a.length() < b.length()) ? a : b;
        
        string answer;
        
        int carry = 0;
        int j = shortest.length()-1;
        
        // Start iterating at the end of the largest string
        for(int i=largest.length()-1; i >= 0; i--){
            if((largest[i] == '0' && shortest[j] == '0') && carry == 0){
                answer += '0';
                carry = 0;
            }
            else if((largest[i] == '0' && shortest[j] == '0') && carry == 1){
                answer += '1';
                carry = 0;
            }
            else if((largest[i] == '0' && shortest[j] == '1') && carry == 0){
                answer += '1';
                carry = 0;
            }
            else if((largest[i] == '0' && shortest[j] == '1') && carry == 1){
                answer += '0';
                carry = 1;
            }
            else if((largest[i] == '1' && shortest[j] == '0') && carry == 0){
                answer += '1';
                carry = 0;
            }
            else if((largest[i] == '1' && shortest[j] == '0') && carry == 1){
                answer += '0';
                carry = 1;
            }
            else if((largest[i] == '1' && shortest[j] == '1') && carry == 0){
                answer += '0';
                carry = 1;
            }
            else if((largest[i] == '1' && shortest[j] == '1') && carry == 1){
                answer += '1';
                carry = 1; 
            }
            else if(largest[i] == '1' && carry == 1){
                answer += '0';
                carry = 1;
            }
            else if(largest[i] == '0' && carry == 1){
                answer += '1';
                carry = 0;
            }
            else if(largest[i] == '1' && carry == 0){
                answer += '1';
                carry = 0;
            }
            else if(largest[i] == '0' && carry == 0){
                answer += '0';
                carry = 0;
            }
            j--;
        }
        
        // If there is a carry left at the end, add it
        if(carry == 1){
            answer += '1';
        }
        
        // Reverse the answer string
        reverse(answer.begin(), answer.end());
        return answer;
        
    }
};