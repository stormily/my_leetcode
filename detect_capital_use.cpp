detectCapitalUse(string word) {
        int count = 0;
        for (auto i : word) 
        	if (isupper(i)) 
        		count++;
        return !count || count == word.size() || isupper(word[0]) && count == 1;
}

//c++中的auto i : v = for, 用来遍历指定范围
//isupper函数用来判定字母是否是大写