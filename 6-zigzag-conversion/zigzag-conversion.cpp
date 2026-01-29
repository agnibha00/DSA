class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;

        vector<string> rows(numRows);
            int dir=1;
            int c=0;

            for(char ch:s){
                rows[c] +=ch;

                if(c==numRows-1) dir=-1;
                else if (c==0) dir =1;
                c +=dir;

            } 

            string results ="";
            for(string row: rows ){
                results += row;
            }
            return results;
        
    }

};