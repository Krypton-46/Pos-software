#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
#include<string>
using namespace std;
class Product
{
	string name;
	int price;
	int quantity;
public:
	Product();
	Product(string,int,int);
	void setName(string);
	void setQuantity(int);
	void setPrice(int);
	string getName()const;
	int getPrice()const;
	int getQuantity()const;
};
#endif // !PRODUCT_H
