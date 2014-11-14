import sqlite3

try:
    conn = sqlite3.connect("coffee.db")

    c = conn.cursor()

    #create all tables
    c.executescript(open("Coffee script.sql","r").read())

except Exception as e:
    print(e)

