#include "Product.h"

Products::Product::Product()
{
    name = "no name";
    price = 0;
    manufacturer = "no name";
    age = 0;
}

Products::Product::Product(std::string name, float price, std::string manufacturer, int age)
{
    this->name = name;
    this->price = price;
    this->manufacturer = manufacturer;
    this->age = age;
}

Products::Product::~Product()
{

}

void Products::Product::setName(std::string name)
{
    this->name = name;

}

std::string Products::Product::getName() const
{
    return name;
}

void Products::Product::setPrice(float price)
{
    this->price = price;

}

float Products::Product::getPrice() const
{
    return price;
}

void Products::Product::setManufacturer(std::string manufacturer)
{
    this->manufacturer = manufacturer;

}

std::string Products::Product::getManufacturer() const
{
    return manufacturer;
}

void Products::Product::setAge(int age)
{
    this->age = age;

}

int Products::Product::getAge() const
{
    return age;
}
