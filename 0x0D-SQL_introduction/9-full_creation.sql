-- a script that creates a table second_table in the database hbtn_0c_0 in MySQL server and add multiples rows
CREATE TABLE IF NOT EXISTS second_table (id INT, name VARCHAR(256), score INT);
INSERT INTO second_table (id, name, score) VALUES (1, "Joes", 10), 
                                                  (2, "Alice", 3),
                                                  (3, "Bola", 14),
                                                  (4, "General", 8);
