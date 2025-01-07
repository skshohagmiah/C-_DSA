class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;

        vector<string> rows(min(numRows, int(s.length())));

        int currentRow = 0;
        bool goingDown = false;

        for(char c : s){
          rows[currentRow] += c;

            if(currentRow == 0 || currentRow == numRows - 1){
                goingDown = !goingDown;
            }

            currentRow += goingDown ? 1 : -1;
        }

        string result;

        for(string ro : rows){
            result += ro;
        }

        return result;
    }
};