class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                digits[i]++;
                return digits;
            }
        }
        digits[0] = 1;
        digits.emplace_back(0);
        return digits;
    }
}; 

//emplace操作是C++11新特性，新引入的的三个成员emlace_front、empace 和 emplace_back,这些操作构造而不是拷贝元素到容器中，这些操作分别对应push_front、insert 和push_back，允许我们将元素放在容器头部、一个指定的位置和容器尾部。
//参考网站：https://blog.csdn.net/penghuicheng/article/details/51505625?utm_source=copy 