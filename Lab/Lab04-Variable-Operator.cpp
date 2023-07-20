/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374000.00
*/
#include <stdio.h>

int main() {
    char employeesID[11];
    float workinghrs;
    float salaryhrs;
    //--| YOUR CODE HERE
    printf("Input the Employees ID(Max. 10 chars):");
    scanf("%s",employeesID);

    printf("Input the working hrs:");
    scanf("%f",&workinghrs);

    printf("Salary amount/hr:");
    scanf("%f",&salaryhrs);

    float =  Total;
    Total = workinghrs * salaryhrs;

    printf("\nemployeesID = %s\n",employeesID);
    printf("Salary = U$ %.2f\n",Total);
    return 0 ;
}//end main function