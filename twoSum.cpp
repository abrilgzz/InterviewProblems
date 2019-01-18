/*
Abril Gonzalez
January 2019

387. First Unique Character
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Runtime: O(n)

*/
class Solution {
public:
    int firstUniqChar(string s) {
        // Create character map that stores how many times a character has been detected
        map<char,int> mapCharCounter;
        
        for(int i=0; i< s.length(); i++){
            // If the character has not been seen before, add it to the map
            if(mapCharCounter.find(s[i]) == mapCharCounter.end()){
                mapCharCounter[s[i]] = 1;
            }
            // Increase the number of times the character has been detected
            else{
                mapCharCounter[s[i]]++;
            }
        }
        
        // Iterate through string to see if the character at the current index is
        // the first unique character, according to the previously created map
        for(int i=0; i < s.length(); i++){
            if(mapCharCounter.at(s[i]) == 1)
                return i;
        }
        
        // Return -1 if there is no unique character
        return -1;
    }
};