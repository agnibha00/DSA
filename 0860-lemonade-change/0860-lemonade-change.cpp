class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int, int> money;
        for (int p = 0; p < bills.size(); p++) {
            if (bills[p] == 5) {

                money[bills[p]]++;
            }
            else if (bills[p] == 10) {
                if (money[5] > 0) {
                    money[bills[p]]++;
                    money[5]--;
                }
                else return false;
            }
            else if (bills[p] == 20) {
                if (money[5] > 0 && money[10]>0) {
                    money[5]--;
                    money[10]--;
                }
                else if (money[5]>=3){
                    money[5] -= 3;
                    
                }
                else return false;

            }
        }
        return true;
    }
};