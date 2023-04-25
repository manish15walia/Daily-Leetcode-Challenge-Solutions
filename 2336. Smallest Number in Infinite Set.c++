/* https://leetcode.com/problems/smallest-number-in-infinite-set/description/ */

class SmallestInfiniteSet {
public:
    map<int,int> m;
    SmallestInfiniteSet() {
        for(int i =1;i<=1000;i++) m[i]++;
    }
    
    int popSmallest() {
        int a = m.begin()->first;
        m.erase(a);
        return a;
    }
    
    void addBack(int num) {
        m[num]++;
    }
};
