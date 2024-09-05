-- Create a new database
CREATE DATABASE example_db;

-- Show all databases
SHOW DATABASES;

-- Select a database to use
USE example_db;

-- Drop a database
DROP DATABASE example_db;

-- Create a new table
CREATE TABLE employees (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    position VARCHAR(100),
    salary DECIMAL(10, 2),
    hire_date DATE
);

-- Show all tables in the current database
SHOW TABLES;

-- Describe the structure of a table
DESCRIBE employees;

-- Alter a table to add a new column
ALTER TABLE employees ADD COLUMN department VARCHAR(100);

-- Rename a table
RENAME TABLE employees TO staff;

-- Drop a table
DROP TABLE staff;

-- Insert data into a table
INSERT INTO employees (name, position, salary, hire_date) VALUES
('John Doe', 'Developer', 60000, '2023-01-15'),
('Jane Smith', 'Manager', 80000, '2022-03-22');

-- Update existing records
UPDATE employees SET salary = 65000 WHERE name = 'John Doe';

-- Delete records from a table
DELETE FROM employees WHERE name = 'Jane Smith';

-- Select all records from a table
SELECT * FROM employees;

-- Select specific columns from a table
SELECT name, position FROM employees;

-- Select records with a condition
SELECT * FROM employees WHERE salary > 60000;

-- Select records with multiple conditions
SELECT * FROM employees WHERE position = 'Developer' AND salary > 60000;

-- Select records using LIKE operator
SELECT * FROM employees WHERE name LIKE 'J%';

-- Select records with sorting
SELECT * FROM employees ORDER BY salary DESC;

-- Limit the number of records returned
SELECT * FROM employees LIMIT 5;

-- Create another table for demonstration
CREATE TABLE departments (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL
);

-- Insert data into the departments table
INSERT INTO departments (name) VALUES ('Engineering'), ('HR');

-- Add a foreign key to the employees table
ALTER TABLE employees ADD COLUMN department_id INT;
ALTER TABLE employees ADD CONSTRAINT fk_department
    FOREIGN KEY (department_id) REFERENCES departments(id);

-- Join two tables
SELECT e.name, d.name AS department
FROM employees e
JOIN departments d ON e.department_id = d.id;

-- Left join two tables
SELECT e.name, d.name AS department
FROM employees e
LEFT JOIN departments d ON e.department_id = d.id;

-- Count the number of records
SELECT COUNT(*) FROM employees;

-- Calculate the average salary
SELECT AVG(salary) FROM employees;

-- Find the highest salary
SELECT MAX(salary) FROM employees;

-- Find the lowest salary
SELECT MIN(salary) FROM employees;

-- Group by department and count the number of employees in each
SELECT department_id, COUNT(*) AS employee_count
FROM employees
GROUP BY department_id;

-- Group by department and calculate the average salary in each
SELECT department_id, AVG(salary) AS avg_salary
FROM employees
GROUP BY department_id;

-- Subquery to find employees with a salary greater than the average
SELECT name, salary
FROM employees
WHERE salary > (SELECT AVG(salary) FROM employees);

-- Subquery with EXISTS
SELECT name
FROM employees e
WHERE EXISTS (SELECT 1 FROM departments d WHERE d.id = e.department_id);

-- Create an index on a column
CREATE INDEX idx_salary ON employees(salary);

-- Drop an index
DROP INDEX idx_salary ON employees;

-- Start a transaction
START TRANSACTION;

-- Insert data into multiple tables
INSERT INTO employees (name, position, salary, hire_date) VALUES ('Alice', 'Analyst', 55000, '2023-02-20');
INSERT INTO departments (name) VALUES ('Finance');

-- Commit the transaction
COMMIT;

-- Rollback a transaction
ROLLBACK;

-- Create a new user
CREATE USER 'new_user'@'localhost' IDENTIFIED BY 'password';

-- Grant privileges to a user
GRANT ALL PRIVILEGES ON example_db.* TO 'new_user'@'localhost';

-- Revoke privileges from a user
REVOKE ALL PRIVILEGES ON example_db.* FROM 'new_user'@'localhost';

-- Drop a user
DROP USER 'new_user'@'localhost';

-- Create a view
CREATE VIEW high_salary_employees AS
SELECT name, salary
FROM employees
WHERE salary > 70000;

-- Query the view
SELECT * FROM high_salary_employees;

-- Drop a view
DROP VIEW high_salary_employees;

-- Create parent and child tables with foreign key
CREATE TABLE orders (
    order_id INT AUTO_INCREMENT PRIMARY KEY,
    order_date DATE
);

CREATE TABLE order_items (
    item_id INT AUTO_INCREMENT PRIMARY KEY,
    order_id INT,
    product_name VARCHAR(100),
    quantity INT,
    FOREIGN KEY (order_id) REFERENCES orders(order_id)
);

-- Insert data into parent and child tables
INSERT INTO orders (order_date) VALUES ('2024-09-05');
INSERT INTO order_items (order_id, product_name, quantity) VALUES (1, 'Widget', 10);

-- Update a foreign key (requires updating child first if cascading is not set)
UPDATE order_items SET order_id = 2 WHERE item_id = 1;

-- Drop foreign key constraint
ALTER TABLE order_items DROP FOREIGN KEY order_items_ibfk_1;

-- Show all users
SELECT User, Host FROM mysql.user;

-- Change user password
ALTER USER 'username'@'localhost' IDENTIFIED BY 'new_password';

-- Lock a user account
ALTER USER 'username'@'localhost' ACCOUNT LOCK;

-- Unlock a user account
ALTER USER 'username'@'localhost' ACCOUNT UNLOCK;


-- Analyze the query execution plan
EXPLAIN SELECT * FROM employees WHERE salary > 60000;

-- Show indexes for a table
SHOW INDEX FROM employees;

-- Optimize a table (rebuild indexes and free up space)
OPTIMIZE TABLE employees;

