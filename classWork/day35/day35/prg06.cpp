#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <chrono>
#include <sstream>

// Logging Levels
enum LogLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

// Convert log level to string
std::string levelToString(LogLevel level) {
    switch (level) {
    case DEBUG: return "DEBUG";
    case INFO: return "INFO ";
    case WARNING: return "WARN ";
    case ERROR: return "ERROR";
    default: return "UNKNOWN";
    }
}

// Get current time in "YYYY-MM-DD HH:MM:SS.mmm" format using chrono
std::string getCurrentTime() {
    using namespace std::chrono;

    auto now = system_clock::now();
    auto in_time_t = system_clock::to_time_t(now);
    auto ms = duration_cast<milliseconds>(now.time_since_epoch()) % 1000;

    std::ostringstream oss;
    oss << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d %H:%M:%S");
    oss << "." << std::setfill('0') << std::setw(3) << ms.count();
    return oss.str();
}

// Logger Class
class Logger {
    std::ofstream logFile;

public:
    Logger(const std::string& filename) {
        logFile.open(filename, std::ios::app);  // Append mode
        if (!logFile.is_open()) {
            std::cerr << "Failed to open log file\n";
        }
    }

    ~Logger() {
        if (logFile.is_open())
            logFile.close();
    }

    void log(LogLevel level, const std::string& message) {
        if (logFile.is_open()) {
            logFile << "[" << getCurrentTime() << "] "
                << "[" << levelToString(level) << "] "
                << message << std::endl;
        }
    }
};

// Main Application
int main() {
    Logger logger("app.log");

    logger.log(INFO, "Application started");
    logger.log(DEBUG, "Initializing variables");

    int x = 10, y = 0;
    logger.log(DEBUG, "x = 10, y = 0");

    if (y == 0) {
        logger.log(WARNING, "Attempt to divide by zero");
        logger.log(ERROR, "Division failed due to zero denominator");
    }
    else {
        int z = x / y;
        logger.log(INFO, "Division successful: " + std::to_string(z));
    }

    logger.log(INFO, "Application ended");
    return 0;
}
