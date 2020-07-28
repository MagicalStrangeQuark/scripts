#include <iostream>
#include <pqxx/pqxx>
#include <locale.h>

/**
 * Connection class for postgres DBMS.
 * 
 * To compile this script, run: g++ Postgres.cpp -lpqxx -lpq -o index
 */

std::string PASSWORD = "password";
std::string DBNAME = "somename";
std::string USER = "postgres";
std::string HOSTADDR = "127.0.0.1";
std::string PORT = "5432";

class DB
{
private:
    std::string conn;

public:
    void __set(std::string config, std::string content)
    {
        this->conn.append(config).append(" = ").append(content).append(" ");
    }

    std::string string()
    {
        return this->conn;
    }

    std::string get()
    {
    }
};

std::string config()
{
    DB *database = new DB();

    database->__set("dbname", DBNAME);
    database->__set("user", USER);
    database->__set("password", PASSWORD);
    database->__set("hostaddr", HOSTADDR);
    database->__set("port", PORT);

    return database->string();
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    try
    {
        pqxx::connection C(config());

        if (C.is_open())
        {
            std::cout << "Opened database successfully: " << C.dbname() << std::endl;
        }
        else
        {
            std::cout << "Can't open database" << std::endl;

            return EXIT_FAILURE;
        }

        pqxx::work W(C);

        std::string sql = "INSERT INTO colors(name, hexadecimal) VALUES('white', 'FFFFFF')";

        /* Execute SQL query */
        W.exec(sql);
        W.commit();

        std::cout << "Records created successfully" << std::endl;
        C.disconnect();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;

        return EXIT_FAILURE;
    }

    return 0;
}
