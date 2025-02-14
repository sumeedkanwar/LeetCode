class ProductOfNumbers {
public:

    vector<int> list;
    
    ProductOfNumbers() {
    }
    
    void add(int num) {
        list.push_back(num);
    }
    
    int getProduct(int k) {
        if (k > list.size())
        {
            return 0;
        }
        else
        {
            int sum = 1;
            for (int i = 1; i <= k; i++)
            {
                sum *= list[list.size() - i];
            }
            return sum;
        }
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */