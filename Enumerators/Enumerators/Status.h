#pragma once

//old enum declaration
enum Status
{
	Pending,
	Approved,
	Cancelled
};

//new scoped enum declaration
enum class FileError {
	notFound,
	ok
};

enum class NetworkError {
	ok,
	connected,
	disconnected
};


