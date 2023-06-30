import psycopg2
from db_connection import connect, close_connection

def create_table(table_name, columns):
    try:
        conn = connect()
        cur = conn.cursor()
        column_defs = [f"{col[0]} {col[1]}" for col in columns]
        create_table_query = f"CREATE TABLE {table_name} ({', '.join(column_defs)})"
        cur.execute(create_table_query)
        conn.commit()
        cur.close()
        close_connection(conn)
        print("Table created successfully!")
    except (psycopg2.Error, Exception) as e:
        print("Error occurred during table creation:", str(e))
    finally:
        if conn is not None:
            close_connection(conn)

def delete_table(table_name):
    try:
        conn = connect()
        cur = conn.cursor()
        drop_table_query = f"DROP TABLE IF EXISTS {table_name}"
        cur.execute(drop_table_query)
        conn.commit()
        cur.close()
        close_connection(conn)
        print("Table deleted successfully!")
    except (Exception, psycopg2.Error) as error:
        print("Error deleting table:", error)
    finally:
        if conn is not None:
            close_connection(conn)
