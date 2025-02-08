class NumberContainers {
public:

    map<int, int> ind;
    map<int, set<int>> num;

    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(ind.find(index) != ind.end())
        {
            int prev = ind[index];
            num[prev].erase(index);
            if(num[prev].empty())
            {
                num.erase(prev);
            }
        }
        ind[index] = number;
        num[number].insert(index);
    }
    
    int find(int number) {
        if (num.find(number) != num.end())
        {
            return *num[number].begin();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */