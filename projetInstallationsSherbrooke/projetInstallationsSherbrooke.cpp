#include <stdlib.h>
#include <iostream>

#include "jdbc/mysql_connection.h"
#include "jdbc/mysql_driver.h"
#include "jdbc/cppconn/resultset.h"
#include "jdbc/cppconn/statement.h"
#include <windows.h>

using namespace std;


int main() {
    //utf8
    SetConsoleOutputCP(CP_UTF8);

    sql::mysql::MySQL_Driver* driver;
    sql::Connection* con;

    try {
        driver = sql::mysql::get_mysql_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", ""); // Remplacez "" par le mot de passe si nécessaire

        con->setSchema("installationssportivesetrecreatives");

        sql::Statement* stmt;
        sql::ResultSet* res;

        stmt = con->createStatement();
        res = stmt->executeQuery("SELECT * FROM installation");

        cout << "id_installation\tlat_installation\tlong_installation\ttype_installation\tdetail_installation\tnom_installation\tsurface_installation\teclairage_installation" << endl;

        while (res->next()) {
            cout << res->getInt("id_installation") << "\t"
                << res->getDouble("lat_installation") << "\t"
                << res->getDouble("long_installation") << "\t"
                << res->getString("type_installation") << "\t"
                << res->getString("detail_installation") << "\t"
                << res->getString("nom_installation") << "\t"
                << res->getString("surface_installation") << "\t"
                << res->getBoolean("eclairage_installation") << endl;
        }

        delete res;
        delete stmt;
        delete con;

    }
    catch (sql::SQLException& e) {
        cout << "Erreur MySQL : " << e.what() << endl;
    }

    return 0;
}
