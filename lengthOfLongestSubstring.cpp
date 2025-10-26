class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int maxLen=0,start=0;
        // int n=s.size();
        // unordered_map<char,int>m,mp;
        // for(int i=0;i<n;i++) {
            
        //     mp[s[i]]++;
        //     if(mp[s[i]]>1 && m[s[i]]>=start){// if all the characters are equal then only m[s[i]] < start otherwise m[s[i]]>=start
        //         start=m[s[i]]+1;
        //         //mp[s[i]]--;
        //     }
        //     m[s[i]]=i;
        //     maxLen=max(maxLen,i+1-start); //length of a substring is calculated by lastIndex-firstIndex+1(i-start+1)
        // }
        // return maxLen;

        int start=0,maxi=0;
        unordered_map<char,int>mp,m;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(m.find(s[i])!=m.end() && m[s[i]]>=start){
                start=m[s[i]]+1;
            }
            m[s[i]]=i;
            maxi=max(maxi,i+1-start);
        }
        return maxi;

    }
};
