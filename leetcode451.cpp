#include <unordered_map>
#include <queue>
class Solution {
public:
    
    string frequencySort(string s) {
        string ans;
        unordered_map<char,int> charNum; //用無排序的map 記錄每個字元出現的次數
        
        for(int i=0;i<s.size();i++)
            charNum[s[i]]+=1;
        
        priority_queue<pair<int,char>> strQueue; //優先佇列
           
        for(auto str: charNum){
            //cout << str.second<< "  ";
            //cout << str.first << endl;
            strQueue.push({str.second,str.first}); //字母數較大的就會在queue最前面
        }
        while(!strQueue.empty()){
            pair<int,char> p = strQueue.top();
            //cout << p.second << endl;
            strQueue.pop();
            ans.append(p.first,p.second);
        }
        
        return ans;
    }
};
