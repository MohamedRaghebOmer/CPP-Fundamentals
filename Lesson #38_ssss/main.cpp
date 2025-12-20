#include <iostream>

using namespace std;

struct stProduct
{
    string Name;
    string Manufacturer;
    float Price;
    float TaxPercentage;
    int Quantity;
    float PriceAfterTax;
    float TotalCost;
};

void Get_Product_Data(stProduct &product)
{
    cout << "What is the product name? \n";
    getline(cin, product.Name);

    cout << "Who is the Manufacturer? \n";
    getline(cin, product.Manufacturer);

    cout << "How much the product price is? \n";
    cin >> product.Price;

    cout << "How much the Tax Percentage is? \n";
    cin >> product.TaxPercentage;

    cout << "What is the quantity?\n";
    cin >> product.Quantity;
}

void Calclulate_Total_Cost(stProduct &product)
{
    product.PriceAfterTax = product.Price + ( product.Price * (product.TaxPercentage / 100) );
    product.TotalCost = product.PriceAfterTax * product.Quantity;
}

void Dispaly_Data(const stProduct &product)
{
    cout << "\n===========Product data===========\n";
    cout << "product name: " << product.Name << endl;
    cout << "Manufacturer: " << product.Manufacturer << endl;
    cout << "product price= " << product.Price << endl;
    cout << "TaxPercentage= " << product.TaxPercentage << endl;
    cout << "Quantity= " << product.Quantity << endl;
    cout << "PriceAfterTax= " << product.PriceAfterTax << endl;
    cout << "TotalCost= " << product.TotalCost << endl;
}

int main()
{
    stProduct Product1;

    Get_Product_Data(Product1);
    Calclulate_Total_Cost(Product1);
    Dispaly_Data(Product1);
    return 0;
}
