class RandomizedCollection {
public:
    vector<int> v;
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        if(find(v.begin(), v.end(), val)==v.end()){
            v.push_back(val);
            return true;
        }
        v.push_back(val);
        return false;
    }
    
    bool remove(int val) {
        auto it = find(v.begin(), v.end(), val);
        if(it == v.end()) return false;
        v.erase(it);
        return true;
    }
    
    int getRandom() {
        int n = v.size();
        return v[rand()%n];
    }
};
