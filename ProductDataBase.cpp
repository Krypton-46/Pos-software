#include"ProductDataBase.h"
ProductDataBase::ProductDataBase()
{
	data = nullptr;
	noOfProducts = 0;
	size = 0;
}

void ProductDataBase::reSize(int newSize)
{
	if (newSize == 0)
	{	
		data = nullptr;
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
	if (size == 0)
		reSize(2);
	else if(noOfProducts==size-1)
		reSize(noOfProducts * 2);
	data[noOfProducts] = p;
	noOfProducts++;
}

//void ProductDataBase::addProduct(const Product& p)
//{
//	reSize(noOfProducts + 1);
//	data[noOfProducts] = p;
//	noOfProducts++;
//}
void ProductDataBase::displayAllProducts()const
{
	for (int i = 0; i < noOfProducts; i++)
	{
		cout << '\n'<<data[i].getName();
		cout << '\n'<<data[i].getPrice() ;
		cout << '\n'<< data[i].getQuantity();
	}
}

void ProductDataBase::removeProduct(const string &n)
{
	int i = 0;
	while (i < noOfProducts)
	{
		if (data[i].getName() == n)
			break;
		i++;
	}
	if (i == noOfProducts)
	{
		cout << "\nProduct not Found ";
		return;
	}
	for (i; i < noOfProducts-1; i++)
		data[i] = data[i + 1];
	noOfProducts--;
	cout << "\nProduct Removed Successfully ";
}

int ProductDataBase::getnoOfProducts()const
{
	return noOfProducts;
}
