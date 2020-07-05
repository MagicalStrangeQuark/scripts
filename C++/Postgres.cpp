#include <iostream>
#include <pqxx/pqxx>
#include <locale.h>

/**
 * Postgres connection
 * 
 * @see <https://www.tutorialspoint.com/postgresql/postgresql_c_cpp.htm:
 * @see <https://www.postgresql.org/docs/7.2/libpqpp-connect.html>
 * 
 * ~$: g++ Postgres.cpp -lpqxx -lpq -o index && ./index
 * 
 */

using namespace pqxx;

const std::string DB = "api";
const std::string USER = "postgres";
const std::string PASSWORD = "pass@root";
const std::string HOSTADDR = "127.0.0.1";
const std::string PORT = "5432";

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "portuguese");

    std::cout << "Begin..." << std::endl;

    try
    {
        connection C("dbname = " + DB + " user = " + USER + " password = " + PASSWORD + " hostaddr = " + HOSTADDR + " port = " + PORT);

        if (C.is_open())
        {
            std::cout << "Opened database successfully: " << C.dbname() << std::endl;
        }
        else
        {
            std::cout << "Can't open database" << std::endl;

            return 1;
        }

        C.disconnect();

        work W(C);

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

        return 1;
    }

    std::cout << "end..." << std::endl;

    return 0;
}
