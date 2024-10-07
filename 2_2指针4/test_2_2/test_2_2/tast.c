#include <stdio.h>

#if 0
//计算器的⼀般实现
int add(int x, int y)
{
    return x + y;
}

int div(int x, int y)
{
    return x / y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

// 计算器
int main()
{
    int x, y;
    int input = 0;
    int ret = 0;
    do
    {
        printf("***************************\n");
        printf(" 1:add                2:sub\n");
        printf(" 3:mul                4:div\n");
        printf(" 0:exit			   \n");
        printf("***************************\n");
        printf("请选择：\n");
        scanf_s("%d", &input);  

        switch (input)
        {
        case 1:
            printf("请输入数字: ");
            scanf_s("%d %d", &x, &y);  
            ret = add(x, y);
            printf("结果: %d\n", ret);
            break;

        case 2:
            printf("请输入数字：");
            scanf_s("%d %d", &x, &y);
            ret = sub(x, y);
            printf("结果: %d\n", ret);
            break;

        case 3:
            printf("请输入数字：");
            scanf_s("%d %d", &x, &y);
            ret = mul(x, y);
            printf("结果: %d\n", ret);
            break;

        case 4:
            printf("请输入数字：");
            scanf_s("%d %d", &x, &y);
            if (y != 0) // 加入除数不能为0的检查
            {
                ret = div(x, y);
                printf("结果: %d\n", ret);
            }
            else
            {
                printf("错误：除数不能为0\n");
            }
            break;

        case 0:
            printf("退出程序\n");
            break;

        default:
            printf("无效选择，请重试\n");
            break;
        }

    } while (input != 0);  // 修正循环条件

    return 0;
}
#endif 0




#if 0
//使⽤函数指针数组的实现的计数器
int add(int x, int y)
{
    return x + y;
}

int div(int x, int y)
{
    return x / y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int main()
{
    int x, y;
    int input = 0;
    int ret = 0;
    int(*p[5])(int x, int y) = { 0, add, sub, mul, div };  // //转移表

    do
    {
        printf("***************************\n");
        printf(" 1:add                2:sub\n");
        printf(" 3:mul                4:div\n");
        printf(" 0:exit               \n");
        printf("***************************\n");
        printf("请选择：\n");
        scanf_s("%d", &input);  // 输入选择

        if (input >= 1 && input <= 4)
        {
            printf("请输入两个数字：");
            scanf_s("%d %d", &x, &y);  // 修正输入
            ret = (*p[input])(x, y);   // 使用函数指针数组调用相应的函数
            printf("结果: %d\n", ret);
        }
        else if (input == 0)
        {
            printf("退出程序\n");
        }
        else
        {
            printf("输入错误，请重试\n");
        }

    } while (input != 0);  // 退出条件

    return 0;
}
#endif 0



#if 0
//找单身狗2
void find_two_unique_numbers(int arr[], int size, int* num1, int* num2) {
    int xor_result = 0;

    // 步骤 1：整体异或，得到两个唯一数字的异或结果
    for (int i = 0; i < size; i++) {
        xor_result ^= arr[i];
    }

    // 步骤 2：找到 xor_result 中最右边的1位
    int rightmost_set_bit = xor_result & (-xor_result);

    *num1 = 0;
    *num2 = 0;

    // 步骤 3：根据最右边的1位，将数字分成两组，分别异或
    for (int i = 0; i < size; i++) {
        if (arr[i] & rightmost_set_bit) {
            *num1 ^= arr[i];  // 这一位是1的数字
        }
        else {
            *num2 ^= arr[i];  // 这一位是0的数字
        }
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int num1, num2;

    find_two_unique_numbers(arr, size, &num1, &num2);

    printf("两个只出现一次的数字是: %d 和 %d\n", num1, num2);
    return 0;
}
#endif 0


#if 0
// 判断是否是闰年
int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;  // 闰年
    }
    return 0;  // 平年
}

// 计算某年某月的天数
int get_days_in_month(int year, int month) {
    int days;
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    case 2:
        // 判断2月份的天数
        if (is_leap_year(year)) {
            days = 29;  // 闰年
        }
        else {
            days = 28;  // 平年
        }
        break;
    default:
        days = 0;  // 不可能出现的情况
        break;
    }
    return days;
}

int main() {
    int year, month;
    // 读取多组输入，直到文件结束
    while (scanf_s("%d %d", &year, &month) != EOF) {
        int days = get_days_in_month(year, month);
        printf("%d\n", days);
    }
    return 0;
}

#endif 0