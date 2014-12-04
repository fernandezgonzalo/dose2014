import sqlite3

def delete_data_in_db():
    try:
        conn = sqlite3.connect("E:\\Projekte\\ETH\\DOSE\\group2\\coffee.db") #change on your machine
    
        c = conn.cursor()
    
        #create all tables
        c.execute("Delete from user;")
        c.execute("Delete from project;")
        c.execute("Delete from developer_mapping;")
        c.execute("Delete from requirement;")
        c.execute("Delete from sprint;")
        c.execute("Delete from task;")
        conn.commit()
    except Exception as e:
        print(e)

