/*
Longest Substring with At Most Two Distinct Characters

Given a string S, find the length of the longest substring T that contains at most two distinct characters. 
Given S = ��eceba��,
T is ��ece�� which its length is 3.
*/
int lengthOfLongestSubstringTwoDistinct(string s) {
        vector<int> map(128, 0);
        int counter=0, begin=0, end=0, d=0; 
        while(end<s.size()){
            if(map[s[end++]]++==0) counter++;
            while(counter>2) if(map[s[begin++]]--==1) counter--;
            d=max(d, end-begin);
        }
        return d;
}
