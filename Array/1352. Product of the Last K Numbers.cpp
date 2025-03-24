class ProductOfNumbers {
public:
    vector<int> product;
    ProductOfNumbers() {
        product = {1}; 
    }
    void add(int num) {
        if (num == 0) {
            product.clear();
            product.push_back(1); 
        } else {
            product.push_back(product.back() * num);
        }
    }  
    int getProduct(int k) {
        int size = product.size();
        if (k >= size) return 0;  
        return product.back() / product[size - k - 1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
