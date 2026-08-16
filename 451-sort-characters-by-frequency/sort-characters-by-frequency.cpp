class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto c:s){              /// insert all char and their freq store
            mp[c]++;
        }

    
        vector<pair<int,char>>v;
        for(auto it : mp){
            v.push_back({it.second,it.first});   // store freq and char (opposite of what we stored earlier)
        }

       sort(v.begin(), v.end(), greater<pair<int, char>>());

       string ans="";

       for(auto ch:v){
        ans+=string(ch.first,ch.second);
       }

       return ans;


        
    }
};