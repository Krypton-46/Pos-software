#include"ProductDataBase.h"
int main()
{
	ProductDataBase b;
	b.addProduct();
	b.addProduct();
	b.displayAllProducts();
	b.removeProduct("musab");
	b.addProduct();
	b.displayAllProducts();
	b.removeProduct("asad");
	//b.displayAllProducts();
	return 0;
}