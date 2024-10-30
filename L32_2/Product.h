#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::endl;



namespace Products {
	class Product
	{
	protected:
		std::string name;
		float price;
		std::string manufacturer;
		int age;
	public:
		Product();
		Product(std::string name, float price, std::string manufacturer, int age);
		virtual ~Product();
		void setName(std::string name);
		std::string getName()const;

		void setPrice(float price);
		float getPrice()const;


		void setManufacturer(std::string manufacturer);
		std::string getManufacturer()const;

		void setAge(int age);
		int getAge()const;

		virtual void show()const = 0;
		virtual float calcPrice()const = 0;


	};


}



