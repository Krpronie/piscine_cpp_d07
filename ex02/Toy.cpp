#include "Toy.h"

Toy::Toy() :_type(Toy::BASIC_TOY), _name("toy"), _picture(){

}

Toy::Toy(ToyType type, std::string name, std::string file) :_type(type), _name(name), _picture(file){

}

Toy &Toy::operator=(const Toy &other)
{
	this->_name = other._name;
	this->_picture = other._picture;
	return (*this);
}

Toy::ToyType Toy::getType() const
{
	return (this->_type);
}

std::string Toy::getName() const
{
	return (this->_name);
}

std::string Toy::getAscii() const
{
	return (this->_picture.data);
}

void Toy::setName(std::string name)
{
	this->_name = name;
}

bool Toy::setAscii(std::string file)
{
	return (this->_picture.getPictureFromFile(file));
}