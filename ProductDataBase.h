#ifndef PRODUCT_DATABASE_H
#define PRODUCT_DATABASE_H
#include"Product.h"
class ProductDataBase
{
	Product* data;
	int noOfProducts;
	int size;
public:
	ProductDataBase();
	void reSize(int);
	void addProduct();
	//void addProduct(const Product &);
	void removeProduct(const string &);
	int getnoOfProducts()const;
	void displayAllProducts()const;
	~ProductDataBase();
};
#endif // !PRODUCT_DATABASE_H
