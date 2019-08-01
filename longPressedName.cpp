class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        // If they are the same size, no key was long pressed
        if(name.length() == typed.length())
            return true;
        
        // If typed's length is shorter that name's, no key was long pressed
        if(typed.length() < name.length())
            return false;
        
        int i=0;
        int j=0;
        
        while(i < typed.length()){
            while(typed[i] == name[j] && j < name.length()){
                i++;
            }
            j++;
        }
        
        
        
        if(j != name.length() ||  // Did not finish iterating through name
           i >= j || // i surpassed j
           (i >= typed.length() && j < name.length())) // Still have letters to be checked in name
            return false;
        else
            return true;
    }
};