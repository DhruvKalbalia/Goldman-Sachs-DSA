class Solution {
public:
    bool checkIfPangram(string sentence) {
        //hashmap
        unordered_set <char> st;//unordered set
        for (char ch : sentence)
            st.insert(ch);

        return st.size() == 26;

    }
};