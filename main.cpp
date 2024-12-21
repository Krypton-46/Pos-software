#include"ProductDataBase.h"
int main()
{
	Product p("musab", 3000, 5);
	Product q("asad", 2300, 3);
	ProductDataBase b;
	b.addProduct(p);
	b.addProduct(q);
	b.displayAllProducts();
	b.removeProduct("musab");
	b.addProduct();
	b.displayAllProducts();
	b.removeProduct("asad");
	b.displayAllProducts();
	return 0;
}