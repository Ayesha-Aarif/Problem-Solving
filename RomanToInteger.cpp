#include<string>
#include<map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> dict = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int len=s.length();
    int val=0;
    int prv=0;
    for (int i=len-1;i>=0;--i)
    {
        char c=s[i];
        int cur=dict[c];
        if (cur>=prv) {
            val=val+cur;
        } else {
            val=val-cur;
        }
        prv=cur;
    }
    return val;
    }
};