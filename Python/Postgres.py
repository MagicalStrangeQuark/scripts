import psycopg2;

# CONNECTION INFORMATION

PASSWORD = "pass@root";
HOST = "127.0.0.1";
DATABASE = "api";
USER = "postgres";

# CONNECTION STRING

CONN_STRING = "host = " + str(HOST) + " dbname = " + str(DATABASE) + " user = " + str(USER) + " password = " + str(PASSWORD);

conn = psycopg2.connect(CONN_STRING);

cur = conn.cursor();

# INSERT

cur.execute("INSERT INTO public.colors (hexadecimal, name) values ('FFFFFF', 'white')");

# PERSISTE A INFORMAÇÃO NO BANCO DE DADOS

conn.commit();

# SELECT

cur.execute("SELECT * FROM public.colors");

RETORNO = cur.fetchall();

print(RETORNO);

# UPDATE

# DELETE