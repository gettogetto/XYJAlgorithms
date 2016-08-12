/*
Given? an ?arbitrary? ransom? note? string ?and ?another ?string ?containing ?letters from? all ?the ?magazines,? write ?a ?function ?that ?will ?return ?true ?if ?the ?ransom ? note ?can ?be ?constructed ?from ?the ?magazines ; ?otherwise, ?it ?will ?return ?false. ??

Each ?letter? in? the? magazine ?string ?can? only ?be? used ?once? in? your ?ransom? note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
Subscribe to see which companies asked this question
*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1=ransomNote.length();
        int n2=magazine.length();
        if(n1>n2) return false;
        vector<int>numofchar(128,0);
        for(auto ch:magazine)
        {
            numofchar[ch]++;
        }
        for(auto ch:ransomNote){
            if(numofchar[ch]-- <=0) return false;
        }
        return true;
    }
};
