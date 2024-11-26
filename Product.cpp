#include"Product.h"
Product::Product()
{
	price = 0;
}
Product::Product(string n, int p,int q)
{
	name = n;
	price = p;
	quantity = q;
}

void Product::setQuantity(int q)
{
	if (q >= 0)
		quantity = q;
}
void Product::setName(string n)
{
	name = n;
}
void Product::setPrice(int p)
{
	price = p;
}

string Product::getName()const
{
	return name;
}
int Product::getPrice()const
{
	return price;
}



int main()
{
	Product p("3 Door Blue", 40000,5);
	cout << p.getName() << p.getPrice();
}