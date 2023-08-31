class DatabaseConnection {
private:
    static DatabaseConnection* instance;
    std::string host;
    std::string username;
    std::string password;
    std::string database;
    // Other private members

    // Private constructor to prevent direct instantiation
    DatabaseConnection(const std::string& host, const std::string& username, const std::string& password, const std::string& database)
        : host(host), username(username), password(password), database(database) {
        // Connect to the database
        // Implement your connection logic here
    }

public:
    // Static method to get the instance of the class
    static DatabaseConnection* getInstance(const std::string& host, const std::string& username, const std::string& password, const std::string& database) {
        if (!instance) {
            instance = new DatabaseConnection(host, username, password, database);
        }
        return instance;
    }

    void connect() {
        // Implement your connection logic here
    }

    void disconnect() {
        // Implement your disconnection logic here
    }
};

// Initialize the instance as null
DatabaseConnection* DatabaseConnection::instance = nullptr;

// Usage example:
DatabaseConnection* db1 = DatabaseConnection::getInstance("localhost", "user", "password", "mydatabase");
DatabaseConnection* db2 = DatabaseConnection::getInstance("example.com", "admin", "adminpass", "testdb");

// The same instance is returned
std::cout << (db1 == db2) << std::endl;  // Output: 1 (true)
