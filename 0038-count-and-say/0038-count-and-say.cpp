class Solution {
public:

    string rle(string str ){
        
        int size=str.size();
        int j =0,count=0;
        string res="";
        for(int i=0;i<size;i++){
            char p=str[j];

            if(str[i]==p){
                count++;
            }
            else{
                string num=to_string(count);

                res += num;
                res += str[j];
                count=1;
                j=i;
            }

        }
        string num=to_string(count);
        res += num;
        res += str[j];

        return res;

    }
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string a="1";
        for(int i=1;i<n;i++){
            a=rle(a);
        }

        return a;
    }
};