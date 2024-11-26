#include"ProductDataBase.h"
ProductDataBase::ProductDataBase()
{
	data = nullptr;
	noOfProducts = 0;
}

void ProductDataBase::reSize(int newSize)
{
	if (newSize == 0)
	{	data = nullptr;
		return;
	}
	Product* temp= new Product[newSize];
	int smallerSize = newSize < noOfProducts ? newSize : noOfProducts;
	for (int i = 0; i < smallerSize; i++)
	{
		temp[i] = data[i];
	}
	delete[] data;
	data = temp;
	temp = nullptr;
}

void ProductDataBase::addProduct()
{
	string name;
	int price;
	int quantity;
	cout << "\nEnter Product Name: ";
	cin >> name;
	cout << "\nEnter Product Price: ";
	cin >> price;
	cout << "\nEnter Quantity: ";
	cin >> quantity;
	Product p(name,price,quantity);
	reSize(noOfProducts + 1);
	data[noOfProducts] = p;
	noOfProducts++;
}

void ProductDataBase::removeProduct(string n)
{
	int i = 0;
	while (i < noOfProducts)
	{
		if (data[i].getName() == n)
			break;
	}
	if (i == noOfProducts)
	{
		cout << "\nProduct not Found ";
		return;
	}
	for (i; i < noOfProducts; i++)
		data[i] = data[i + 1];
	noOfProducts--;
}

int ProductDataBase::getnoOfProducts()const
{
	return noOfProducts;
}
