/*
Abril Gonzalez
February 2019


LeetCode Problem 929. Unique Email Addresses
If you add a plus ('+') in the local name, 
everything after the first plus sign will be ignored.
If you add periods ('.') between some characters in the local name part of an email address,
 mail sent there will be forwarded to the same address without dots in the local name.
  
Given a list of emails, we send one email to each address in the list. 
How many different addresses actually receive mails?

Runtime: O(n)

*/

class Solution {
public:
    
    // Method that returns a sanitized version of the local part of email
    string clean(string localPart){
        for(int i=0; i < localPart.length(); i++){
            // Erase '.' 
            if(localPart[i] == '.')
                localPart.erase(i,1);   // (index, num of chars)
            // Erase everything after '+' 
            if(localPart[i] == '+')
                localPart.erase(i,localPart.length()-1);
        }
        return localPart;   
    }
    
    int numUniqueEmails(vector<string>& emails) {
        int numberOfEmails = 0;
        set <string> setOfEmails;
        
        for(int i=0; i < emails.size(); i++){
            size_t posOfAtSign = emails[i].find("@");    
            // Get substring of local part
            string localPart = emails[i].substr(0,posOfAtSign);
            // Get substring of domain name
            string domainName = emails[i].substr(posOfAtSign+1, emails[i].length()); 
            
            // Create new valid email
            string validEmail = clean(localPart) + '@' + domainName;
            
            // Increase counter if email was inserted into set
            if(setOfEmails.insert(validEmail).second)
                numberOfEmails++;
        }
        
        return numberOfEmails;
    }
};