#include <stdio.h>
#include <time.h>
void delay(unsigned int milliseconds) {
    clock_t start_time = clock();
    while (clock() < start_time + milliseconds * CLOCKS_PER_SEC / 1000);
}
int main(){
    printf("Keyword are ");
    delay(2000);
    printf(".....\n");
    printf("auto\n");
    printf("breaak\n");
    printf("case\n");
    printf("char\n");
    printf("const\n");
    printf("continue\n");
    printf("default\n");
    printf("do\n");
    printf("double\n");
    printf("else\n");
    printf("enum\n");
    printf("extern\n");
    printf("float\n");
    printf("for\n");
    printf("goto\n");
    printf("if\n");
    printf("int\n");
    printf("long\n");
    printf("register\n");
    printf("return\n");
    printf("short\n");
    printf("signed\n");
    printf("sizeof\n");
    printf("static\n");
    printf("struct\n");
    printf("switch\n");
    printf("typedef\n");
    printf("union\n");
    printf("unsigned\n");
    printf("void\n");
    printf("volatile\n");
    printf("while\n");
    delay(10000);
    printf("Some extended C keywords");
    delay(10000);
    printf(".....\n");
    printf("asm\n");
    printf("_cs\n");
    printf("_ds\n");
    printf("_es\n");
    printf("_ss\n");
    printf("cdecl\n");
    printf("far\n");
    printf("huge\n");
    printf("near\n");
    printf("pascal\n");

}