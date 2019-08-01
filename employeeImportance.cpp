/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportanceOfSubs(vector<int>& subordinates, int id){
        if(subordinates.size() == 0)
            return Employee.importance;
        
        int importance = 0;
        for(int i=0; i < subordinates.size(); i++){
            importance = getImportanceOfSubs(Employee[subordinates[i]].subordinates, subordinates[i]);
        }
        return importance;
    }
    
    int getImportance(vector<Employee*> employees, int id) {
        
        // Employee Importance Map
        map<int,int> empImpMap;
        
        // Map the importance of each employee
        for(int i=0; i < employees.size(); i++){}
        
        int importanceOfSubs = getImportanceOfSubs(Employee[id].subordinates, id); 
        
        return Employee[id].importance + importanceOfSubs;
    }
};