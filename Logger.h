#pragma once

class Logger {

    private:
        static Logger *instance;

    protected:
        Logger()
        {
        }

    public:

        Logger(Logger *other) = delete;

        static Logger *GetInstance();

        void AddLog(const char* info);

        void LogInfo(const char* info, bool logToFile);

        void LogGameEvent(const char* event);

            
};