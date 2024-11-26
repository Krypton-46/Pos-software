#ifndef PRODUCT_DATABASE_H
#define PRODUCT_DATABASE_H
#include"Product.h"
class ProductDataBase
{
	Product* data;
	int noOfProducts;
public:
	ProductDataBase();
	void reSize(int);
	void addProduct();
	void removeProduct(string);
	int getnoOfProducts()const;
};
#endif // !PRODUCT_DATABASE_H
