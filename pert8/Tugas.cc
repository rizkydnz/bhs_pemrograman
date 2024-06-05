#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Customer {
public:
    string name;
    string need;

    Customer(const string& n, const string& nd) : name(n), need(nd) {}
};

class Product {
public:
    string name;
    string category;

    Product(const string& n, const string& c) : name(n), category(c) {}
};

class Business {
private:
    vector<Customer> customers;
    vector<Product> products;

public:
    void addCustomer(const string& name, const string& need) {
        customers.emplace_back(name, need);
    }

    void addProduct(const string& name, const string& category) {
        products.emplace_back(name, category);
    }

    void recommendProducts() {
        for (const auto& customer : customers) {
            cout << "Recommendations for " << customer.name << " (" << customer.need << "):\n";
            for (const auto& product : products) {
                if (product.category == customer.need) {
                    cout << "- " << product.name << "\n";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    Business myBusiness;

    myBusiness.addCustomer("Alice", "Electronics");
    myBusiness.addCustomer("Bob", "Books");

    myBusiness.addProduct("Smartphone", "Electronics");
    myBusiness.addProduct("Laptop", "Electronics");
    myBusiness.addProduct("Novel", "Books");
    myBusiness.addProduct("Comics", "Books");

    myBusiness.recommendProducts();

    return 0;
}
