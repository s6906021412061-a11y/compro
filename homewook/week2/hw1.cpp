#include <iostream>
using namespace std;
int main(){
      //ประเภทหลักการเลขขึ้นต้นด้วย 0ฐานแปด (octal) 
    //เลขขึ้นต้นด้วย 0x/0Xฐานสิบหก (hex)
    //ตัวอักษรที่ไม่มี 0/0x นำหน้า และไม่ได้อยู่ในเครื่องหมายคำพูดcompiler มองเป็นชื่อตัวแปร → error ถ้าไม่เคยประกาศ
    //ค่าเกินขอบเขตชนิดข้อมูล (เช่น short)เกิด overflow วนค่ากลับ (wrap-around)
    //char ไปเก็บใน intแปลงเป็นรหัส ASCII อัตโนมัติ
   // string ("...") ไปเก็บใน inttype mismatch → error
    int x = 01101;
    cout <<"result=" << x;
    return(0);
} 