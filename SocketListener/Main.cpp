#pragma once
#include "Socket.cpp"

int main()
{
	WindowsSocket socket;
	socket.listenOn(8080);
}
