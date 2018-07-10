#include <fstream>
#include <sstream>
#include "Picture.h"

Picture::Picture() : data(""){

}

Picture::Picture(const std::string file)
{
	getPictureFromFile(file);
}

bool Picture::getPictureFromFile(const std::string file)
{
	std::ifstream fs(file);
	if (!fs) 
	{
		data = "ERROR";
		return (false);
	}
	std::ostringstream ss;
	ss << fs.rdbuf();
	data = ss.str();
	return (true);
}