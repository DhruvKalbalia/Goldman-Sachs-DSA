class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> visited(26,false);
        //bool vector visited(n,false)
        for (char c:sentence){
            visited[c-'a'] = true;
        }
        for (bool letter:visited){
            if(!letter)
                return false;
        }
        return true;
    }
};