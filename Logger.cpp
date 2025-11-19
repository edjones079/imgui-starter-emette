#include "Logger.h"

Logger* Logger::GetInstance()
{
    static Logger *logger;

    return logger;
}

void Logger::AddLog(const char* info)
{
    char buff[1024];
}

void Logger::LogInfo(const char* info, bool logToFile)
{
    return;
}

void Logger::LogGameEvent(const char* event)
{
    return;
}