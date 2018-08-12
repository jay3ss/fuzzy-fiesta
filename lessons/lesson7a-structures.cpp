// This lesson demonstrates how to make a struct.
// Taken from https://www.cprogramming.com/tutorial/lesson7.html
struct database {
    int id_number;
    int age;
    float salary;
};


int main()
{
    database employee;          // There is now an employee variable that has
                                // modifiable variables inside it
    employee.id_number = 1;
    employee.age = 22;
    employee.salary = 12000.21;
}
