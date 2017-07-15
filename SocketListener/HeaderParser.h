#pragma once

#include <vector>
#include <sstream>
#include <iostream>
#include "RequestHeader.h"


using namespace std;

class HeaderParser
{
public:
	std::vector<RequestHeader> parse(string request)
	{
		stringstream stream;
		string field;
		string value;
		auto* current = &field;
		cout << request << endl;
		for (auto c : request)
		{
			*current += c;
			if (c == ':')
			{
				current = &value;
			}
		}
		vector<RequestHeader> headers;
		return headers;
	}

};
