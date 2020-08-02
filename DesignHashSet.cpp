class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
         data.resize(1000, vector<int>());
    }
    
    void add(int key) {
               int hashKey = key % 1000;
        if (data[hashKey].empty()) {
            data[hashKey].resize(1000);
        } 
        data[hashKey][key / 1000] = 1;
    }
    
    void remove(int key) {
         int hashKey = key % 1000;
        if (!data[hashKey].empty()) {
            data[hashKey][key / 1000] = 0;
        } 
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
         int hashKey = key % 1000;
        return !data[hashKey].empty() && data[hashKey][key / 1000];
    }
    private:
    vector<vector<int>> data;
    
};


/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
