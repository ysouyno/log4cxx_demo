// console_application_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <Windows.h>
#include <atlstr.h>
#include <string>
#include <log4cxx/logger.h>

log4cxx::LoggerPtr logger(log4cxx::Logger::getLogger("console"));

int main()
{
    LOG4CXX_INFO(logger, "main");

    CString cstr(L"cstring");
    LOG4CXX_INFO(logger, cstr.GetBuffer()); // need .GetBuffer()

    cstr = L"ÖÐÎÄ";
    LOG4CXX_INFO(logger, cstr.GetBuffer());

    std::string str("string");
    LOG4CXX_INFO(logger, str);

    return 0;
}
