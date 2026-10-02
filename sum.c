#include <stdio.h>

void show_menu() {
    printf("===== 计算器 =====\n");
    printf("1.加法 2.减法 3.乘法 4.除法 0.退出\n");
}

int main() {
    int choice;

    while (1) {
        show_menu();
        printf("请输入选项: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                printf("exit\n");
                return 0;

            case 1: {
                int one, two;
                printf("请输入第一个数字: ");
                scanf("%d", &one);
                printf("请输入第二个数字: ");
                scanf("%d", &two);
                int result = one + two;
                printf("结果等于 %d\n", result);
                break;
            }
            
            case 2:{
                int tr, fr;
                printf("请输入一个数字\n");
                scanf("%d", &tr);
                printf("请输入一个数字\n");
                scanf("%d", &fr);
                int ui = tr - fr;
                printf("结果等于:%d\n", ui);
                break;
            }
            
            case 4: {
    int a, b;
    printf("请输入被除数: ");
    scanf("%d", &a);
    printf("请输入除数: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("除数不能为 0\n");
        break;
    }

    double result = (double)a / b;
    printf("结果等于: %f\n", result);
    break;
}
            
            case 3:{
                int gh, ln;
                printf("请输入一个数字\n");
                scanf("%d", &gh);
                printf("请输入一个数字\n");
                scanf("%d", &ln);
                int jj = gh * ln;
                printf("结果等于:%d\n", jj);
                break;
            }

            default:
                printf("无效选项，请重新输入\n");
                break;
        }
    }
}