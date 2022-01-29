//editor ที่ใช้คือ Visual Studio Code
/* ประกอบด้วย 3 ส่วน
    1. Explorer
    2. Editor
    3. Terminal (Ctrl+Shift+`)*/
//C complier ที่ใช้คือ GNU GCC/G++
//Git ภายในจะมี Git bash
//พิมพ์ cd ใน Bash เพื่อเปลี่ยน Working Directory
//พิมพ์ clear ใน bash เพื่อ clear text ใน terminal
//ภาษา c ใช้นามสกุล .c

//การทำ print hello orld ใน c

// ข้อสังเกต: สี text จะเปลี่ยนตาม code snippet
#include <stdio.h>

// C เป้น strong type => ต้องบอก type ให้ทุกอย่าง
int main(){//scope ดูที่ปีกกา
    printf("Hello World"); //ปิดด้วย semicolon
}

//กด clrt+s เพื่อ save file
//complie ด้วย gcc file_name.c => ได้ a.exe
//gcc file_name.c -o lab1 ได้ lab1.exe
//run ด้วย ./filename
