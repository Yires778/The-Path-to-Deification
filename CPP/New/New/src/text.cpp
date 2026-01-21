#include <iostream>

class Log
{

public:
	const int LoglevelError = 0;
	const int LoglevelWarning = 1;
	const int LoglevelInfo = 2;
private:
	int m_Loglevel = LoglevelInfo;
public:
	void SetLevel(int level)
	{
		m_Loglevel = level;
	}

	void  Error(const char* message)
	{
		if(m_Loglevel >= LoglevelError)
		std::cout << "[ERROR]:" << message << std::endl;
	}
	
	void  Warn(const char* message)
	{
		if (m_Loglevel >= LoglevelWarning)
		std::cout << "[Warn]:" << message << std::endl;
	}
	
	void  Info(const char* message)
	{	
		if (m_Loglevel >= LoglevelInfo)
		std::cout << "[Info]:" << message << std::endl;
	}

};


int main()
{
	Log log;
	log.SetLevel(log.LoglevelWarning);
	log.Warn("Hello!");
	log.Error("Hello!");
	log.Info("Hello!");
	std::cin.get();
}
