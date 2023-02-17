#ifndef LISTEXCEPTION_H_INCLUDED
#define LISTEXCEPTION_H_INCLUDED

#include <exception>
#include <string>

class listException : public std::exception{
private:
    std::string msg;

public:
    explicit listException(const char* message) : msg(message) { }

    explicit listException(const std::string& message) : msg(message) { }

    virtual ~listException() throw()  { }

    virtual const char* what() const throw() {
        return msg.c_str();
    }
};
#endif // LISTEXCEPTION_H_INCLUDED
