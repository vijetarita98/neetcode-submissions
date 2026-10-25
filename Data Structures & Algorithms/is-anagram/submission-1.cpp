class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.length() != t.length()){
        return false;
      }
      int charcounts[26] = {0};
      for(int i =0;i< s.length();i++){
        charcounts[s[i] -'a']++;
        charcounts[t[i]-'a']--;
    
      }
      for(int i =0;i<26;i++){
        if(charcounts[i]!= 0){
            return false ; 
        }
      } 
        return true ; 
    }
};
