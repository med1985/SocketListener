#pragma once

#include <string>
#include "RequestHeader.h"
#include <vector>

class Request
{
public:
private:
	std::vector<RequestHeader> headers;
	std::string body;
	unsigned int bodySize;
};
