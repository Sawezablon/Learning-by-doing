import psycopg2

def connect():
    conn = psycopg2.connect(
        host = "localhost",
        database = "learn",
        user = "postgres",
        password = "D@wizard_64"
    )
    return conn

def close_connection(conn):
    conn.close()
