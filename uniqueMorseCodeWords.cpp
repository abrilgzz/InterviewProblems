/*
Abril Gonzalez
February 2019


LeetCode Problem 804. Unique Morse Code Words
Now, given a list of words, each word can be written as a concatenation of the 
Morse code of each letter. For example, "cba" can be written as "-.-..--...", 
(which is the concatenation "-.-." + "-..." + ".-"). We'll call such a concatenation, 
the transformation of a word.

Return the number of different transformations among all words we have.


Runtime: O(n)

*/

class Solution {
public:
    // Function that encodes word to morse
    string toMorse(string word){
        // a = 0, b = 1, ...
        // ASCII: a = 97, b = 96, ...
        vector<string> morseAlphabet = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string wordInMorse = "";
        
        for(int i=0; i < word.length(); i++){
            // for example; a - 97 = 0
            wordInMorse += morseAlphabet[(word[i] - 97)];
        }
        
        return wordInMorse;   
    }
    
    int uniqueMorseRepresentations(vector<string>& words) {
        int countUnique = 0;
        // Keep track of unique encoded words
        set<string> morseSet;
        
        // Encode each word in the vector to Morse code and insert into set
        for(int i=0; i < words.size(); i++){
            // If it was able to insert into set, increase counter of unique words
            if(morseSet.insert(toMorse(words[i])).second){
                countUnique++;
            }
        }
        
        return countUnique;    
    }
};