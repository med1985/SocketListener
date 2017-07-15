#include <exception>
#include <winsock2.h>

class SocketException : public std::exception
{
	std::string exceptionMsg;
public:
	SocketException(std::string msg) : exceptionMsg(msg)
	{ }

	virtual const char* what() const throw()
	{
		return ("Socket Exception: " + exceptionMsg).c_str();
	}
};

class WindowsSocket
{
private:
	SOCKET ListenSocket;
	SOCKET ClientSocket;
	WSADATA wsaData;
	struct addrinfo* result;
	struct addrinfo hints;
public:
	WindowsSocket()
	{
		ListenSocket = INVALID_SOCKET;
		ClientSocket = INVALID_SOCKET;
	}

	void listenOn(const int port);

};