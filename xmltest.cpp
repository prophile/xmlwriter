#include "xmlwriter.h"
#include <iostream>

int main ()
{
	XMLWriter writer;
	writer.Open("object");
		writer.Attribute("version", 1);
		writer.Attribute("type", "game");
		writer.Open("metadata");
			writer.Open("meta");
				writer.Attribute("key", "author");
				writer.Data("HCSW");
			writer.Close();
			writer.Open("meta");
				writer.Attribute("key", "date");
				writer.Data("whenever");
			writer.Close();
		writer.Close();
		writer.Open("data");
		writer.Close();
	writer.Close();
	std::cout << writer.GetString() << std::endl;
	return 0;
}
