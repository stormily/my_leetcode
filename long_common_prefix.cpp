#include <iostream>
#include <string>
#include <vector>
using namespace std;


string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0)
        return "" ;
    if(strs.size() == 1)
		return strs[0];  
        
    for (int i = 0; i < strs[0].length(); i++) {
		for (int j = 1; j < strs.size(); j++) {
			if ((i >= strs[j].length()) || strs[j][i] != strs[0][i]) {
				return strs[0].substr(0,i);
			}
		}
	}
    return strs[0];
}

int main()
{
	vector<string>str = { "flower","flow","flight" };
	cout << longestCommonPrefix(str) << endl;
}