#include <iostream>
#include <pqxx/pqxx>
#include <locale.h>

enum DBCONFIG
{
    DBNAME = 0,
    USER = 1,
    PASSWORD = 2,
    HOSTADDR = 3,
    PORT = 4,
};
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
};

std::string config()
{
    DB *database = new DB();

    database->__set("dbname", "api");
    database->__set("user", "postgres");
    database->__set("password", "pass@root");
    database->__set("hostaddr", "127.0.0.1");
    database->__set("port", "5432");

    return database->string();
}

/**
 * Postgres connection
 * 
 * @see <https://www.tutorialspoint.com/postgresql/postgresql_c_cpp.htm:
 * @see <https://www.postgresql.org/docs/7.2/libpqpp-connect.html>
 * 
 * ~$: g++ Postgres.cpp -lpqxx -lpq -o index && ./index
 * 
 */
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
