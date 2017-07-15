#pragma once
#include <string>

class RequestHeader
{
public:
	const std::string field;
	const std::string value;
	RequestHeader(std::string field, std::string value) : field(field), value(value)
	{ }

	std::string toString()
	{
		return field + ": " + value;
	}
};