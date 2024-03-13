//
// Created by Administrator on 11/02/2024.
//
//int g_val = 2024;
////static int g_val = 2024;  这个全局变量就变成内部链接属性了。外部引用时会报错
//#include <stdio.h>
//#include <math.h>
//#include <string.h>
////函数返回类型的地方写成void,表示这个函数不返回任何值，也不需要返回  。当然也可以在最后写：return； 但是只是一个单词加标点而已，没有意义
//void printHelloWorld() {
//    printf("Hello Jane!\n");
//
//    float x = 6.0 / 4;
//    printf("%f\n",x);
//
//    float x2 = 6 / 4;
//    printf("%f\n",x2);
//
//    int x3 = 6 % 4;
//    printf("%d\n",x3);
//}

//定义函数，想要使用自定义的函数，那需要再main函数中调用
//定义函数中的这是形参：生命周期是从进入函数开始到函数结束时形参会自动销毁。形参只在函数内部有效
//int get_max(int i ,int j)  //前面这个int：return z要明确告知返回的是一个int。int就是返回值的类型。
//{
//    int z = 0;
//    if (i > j)
//        z = i;
//    else
//        z = j;
//    return z;  // return z value,即返回较大值
//}


//int is_prime(int n)     //这里的int n 接收实参
//{
//    int j = 0;
//    for (j = 2; j <= sqrt(n); j++)    //   < sqrt(n)没有等号的话结果是错的，一定要包含等号
//    {
//        if (n % j == 0)
//            return 0;
//    }
//   return 1;
//}



//
//int is_prime(int n)
//{
//    int j = 0;
//    for (j = 2; j < n; j++) {
//        if (n % j == 0)
//            return 0;
//    }
//    return 1;
//}


// 判断闰年:如果年份能被4整除但不能被100整除，或者能被400整除，那么它就是闰年
//int is_leap_year(int n)
//{
//    if ((n % 4 ==0 && n % 100 !=0) || (n % 400 ==0))
//        return 1;
//    else                       //不建议省略else，这时候更具有可读性
//        return 0;
//}


//下面这样写比上面更简洁，也是对的
//int is_leap_year(int n)
//{
//    return ((n % 4 ==0 && n % 100 !=0) || (n % 400 ==0));
//}



//int main() {
//    printf("Hello, \nWorld!\n");
//    printf("There are %d apples.\n",3);
//    printf("There are %d %s apples.\n",2,"bananas");
//    printf("%5d",123);
//    printf("%-5d\n",123);
//    printf("%5d\n",123);
//    printf("%-5d\n",123);
//    printf("%12f\n",123.45);
//    printf("%.2f\n",0.5);
//    printf("%.3f\n",0.5);
//    printf("%6.2f\n",0.5);
//
//
//    int a = 12, b = 99;
//    if (a = 12) {
//        // 在块作用域内重新定义变量b
//        int b = 10;
//        printf("%d %d\n",a,b);
//    }
//    printf("%d\n",b);
//
//    //C90中如果只是想要b2只适用于块作用域
//    int a2 = 1;
//    int b2; // 在块的开始处声明变量
//    if (a2 == 1) {
//        b2 = 2; // 在需要的位置进行赋值
//        printf("%d %d\n", a2, b2);
//    }
//    printHelloWorld(); // 在main函数中调用printMessage函数
//
//    //初始化变量
//    int j =0;
//    while (j < 10){
//        // statement 做处理
//        printf("j is now %d\n",j);
//        // 更新变量
//        j++;
//    }
//    printf("%d\n",b);
//
//    // if else 语句
//    int age = 60;
//    if (age < 18)
//        printf("shaonian\n");
////    else if (18 <= age<26)      //表达式不对，因为代码会先执行左边，为真，然后执行右边也为真，则判断结果为真，和预期不同
//    else if (age >= 18 && age < 26)   //  可以直接写成：else if (age < 26)
//        printf("qingnian\n");
//    else if (age >= 26 && age < 70)
//        printf("zhongnian\n");
//
//    // 打印出奇数-方法1
//    int i = 0;
//    for (i == 1; i <= 100; i++)
//    {
//        if (i % 2 != 0)
//            printf("%d ",i);
//    }
//
//    // 换行
//    printf("\n");
//
//    // 打印出奇数-方法2
//    {
//        int k = 1;
//        for (; k <= 100; k += 2)
//        {
//                printf("%d ",k);
//        }
//        //k变量的作用域限制在for循环内部
//    if (k)
//        printf("clanguage%d",k);
//    }
//
//    {
//        //问题1：上面没注释掉的话，这段执行结果得到只有8次，chat回复是没有缓冲，不懂？？
//        // 这for语句中，前面两行初始化其实就是起到声明的作用，并不改变变量的值，循环体中变量的值是由for语句中的expression决定的。因为C11必须是先声明才能使用变量
//        //正确应该是执行9次，每次外层循环开始后，j会被重新初始化(根据for语句中的表达式中的初始化而非一开始的初始化）
//        int p = 2;
//        int l = 2;
//        for (p = 0; p < 3; p++)
//            for (l = 0; l < 3; l++)
//                printf("hehe\n");
//    }
//    printf("\n");
//    {
//        //不要随便省略for语句中的表达式。像下面这种当执行第二次外层循环的时候，j还是上次外层循环改变后的值，始终不满足<3,所以只打印出一次
//        int i = 2;
//        int j = 2;
//        for (;i < 3; i++)
//            for (;j < 3; j++)
//                printf("hehe\n");
//    }
//    printf("\n");
//    {
//        //下面这种变种也是可以的
//        int i, j;
//        for (i = 0, j = 0; i < 2 && j < 3; ++i, j++)
//            printf("hehe\n");
//    }
//
//    {
//        //循环0次，考察的其实就是基础知识，但是却弄错的说明基础知识都没真正理解
//        //判断表达式是j = 0，在这里我想当然的认为这是判断，=这是赋值运算符，不是==判断运算符！！！！ 将0赋值给j,0为假，整个条件是为假，不会执行语句
//        int i = 0;
//        int j = 0;
//        for (i = 0, j = 0; j = 0; i++, j++)
//            j++;
//    }

//    {
//      int i = 5;
//      //这个表达是合法的：先将i的值赋给k(这样i的初始值就保存下来并赋值给了k，然后再将i的值减1）
//      int k = i--; //   这是两步： k = i将i的值赋值给k  这时k的值等于i的初始值,然后i-- 将i的值减1。最终得到k等于i的初始值,i减1
//      printf("k = %d\n",k);   //输出k的值
//      printf("i = %d\n",i);
//    }
//
//    {
//        int a = 1, b = 5;
//        while (a < b) {
//            a++;
//            b--;
//            printf("a = %d\n",a);
//            printf("b = %d\n",b);
//        }
//
//    }


//调用函数
//    {
//    int a = 10;
//    int b = 20;
//    int max = get_max(a, b);    //将a b 的值传入函数参数，函数得到结果赋值给max。  并不是所有函数都要赋值！取决于是否要返回值
//    printf("max = %d\n",max);
//    }

//100-200之间的素数判断并打印
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (is_prime((i)))
//        {
//            count ++;
//            printf("%d ",i);
//        }
//    }
//    printf("\n%d\n",count);


// 判断1000-2000之间哪些是闰年
//    int k = 0;
//    int count_1 = 0;
//    for (k = 1000; k <= 2000; k++)
//    {
//        if (is_leap_year(k))
//        {
//            count_1 ++;
//            printf("%d ", k);
//        }
//    }
//    printf("\n%d\n",count_1);
//
//    int arr[] = {1,2,3};    //一维数组，整型数组初始化
//    printf("\n%d",arr[0]);
//
//    char ch[] = {'5','i','t'}; //一维数组，字符 数组初始化
//    char ch1[] = "5it";    //一维数组，字符 数组初始化       注意，字符串后面是有默认 \0的，所以这里的ch1有4个元素
//    char ch2[] = "bit";    //一维数组，字符 数组初始化       注意，字符串后面是有默认后面放了一个 \0的，所以这里的ch2有4个元素
//    char ch3[5] = "5it";    //一维数组，字符 数组初始化   注意，字符串后面是有默认后面放了一个 \0的，ch3有5个元素:5 i t \0 0
//    printf("\n%s",ch2); //当你使用 printf 函数打印一个以空字符 '\0' 结尾的字符串时，它会打印字符串直到遇到空字符为止，而不会打印空字符本身
//                     //printf只会打印 "5it"字符串，直到遇到空字符 '\0' 为止。因此在终端中只会看到字符串的内容，而不会看到空字符 '\0
//
//    char ch4[] = "bit";
//    char ch5[] = {'b','i','t'};
//    printf("\n%d\n",strlen(ch4));  // 在内存中实际上有四个字符.但是strlen 函数会计算字符串中字符的数量，但不包括空字符 '\0'
//    printf("%d\n",strlen(ch5));  // 随机
//
//    ch5[2] = 'y';
//    printf("%c",ch5[2]);
//    printf("\n-------------------------\n");

//数组大小是可以通过计算得到的
//    int arr[10] = {0};
//    printf("%d\n ",sizeof(arr));
//    printf("%d\n ",sizeof(arr[0]));
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    printf("--------------------\n");
//    arr[4] = 5;
//    int i = 0;
//    for (i = 0; i < sz; i++){
//        printf("%d\n",arr[i]);        //这是访问数组元素可以用变量
//    }
//
//    return 0;
//}



//typedef unsigned int unit;
//int main(){
//
//    unsigned int num = 0;
//    unit num2 = 1 ;          //init 就是unsigned int 的别名了，两者等同
//    return 0;
//}


// main函数中调用test函数，这时进入到test函数中，这时创建一个局部变量a并赋值,最后打印，这时局部变量生命周期就结束了。
// 下一次再调用test 又创建一次还是赋值1,所以结果是10个2，并不是预期的 2 -----11
//void test(){
//    int a = 1;
//    a++;
//    printf("%d ",a);
//}
//
//int main(){
//    int i = 0;
//    while (i < 10){
//        test();
//        i++;
//    }
//    return 0;
//}



//static修饰局部变量，那局部变量出函数并没有销毁，也就是说下一次调用函数进入函数时不会再次创建a了，即int a = 1没用了
//void test(){
//    static int a = 1;
//    a++;
//    printf("%d ",a);
//}
//
//int main(){
//    int i = 0;
//    while (i < 10){
//        test();
//        i++;
//    }
//    return 0;
//}


//用的关键字：extern,用来声明外部符号。声明外部变量:只需要声明类型和名称，不需要将数字也声明
//extern int g_val;
//int main(){
//    printf("%d",g_val);
//    return 0;
//}


//int main(){
//    int num = 10; //创建变量就是在向内存申请4个字节，存储10.第一个子节的地址就是num的地址
////    &num; //  取地址的操作符&。这行代码是：取变量num的地址
//    printf("%p\n",&num);   // %p:以地址的格式打印数据。打印出来的是十六进制的，且每次执行地址都是变化的（因为每次执行变量num都会重新创建）
//    int* p = &num;   //取地址num要存储起来,p的类型是  int* .   p就是指针变量！！！！！
//    *p = 20;
//    printf("%d",num);   //修改了num的值。也就是通过地址找到指针指向的对象
//    return 0;
//}

//指针初始化
//int main(){
//    printf("%d", sizeof(int));
//    int* p;
//    int i = 0;
//
//    p = &i;
//    *p = 13;
//    printf("\n%d",i);   //打印出来可以看到这时候i的值改为13了
//    printf("\n%d",p);
//    return 0;
//}


//交换值
//void swap(int* x, int* y){
//    int temp = 0;
//    temp = *x;
//    *x = *y;
//    *y = temp;         //不需要return，因为已经修改了地址上的值
//}
//
//int main(){
//    int a = 10;
//    int b = 9;
//    swap(&a,&b);  //把地址传入
//    printf("%d %d ",a,b);
//    return 0;
//}



//int main(){
//    char ch[] = {'1','b','\0'};
//    char ch2[] = "1b";
//    printf("%d", strlen(ch));
//    printf("\n%d", strlen(ch2));
//    return 0;
//}


// this function takes a char *
//void print_char_n(char *string, int n) {            //接受一个char *类型的参数，然后用它来访问数组的元素。
//    char character = string[n]; // which we can index like a char[]
//    printf("string[%d] = '%c'\n", n, character);
//}
//
//int main(void) {
//    char str[] = "COMP9024";
//    for (int i = 0; i < 8; i++) {
//        // and we are going to pass in
//        // a char[] instead of a char *
//        print_char_n(str, i);  //数组名实际上是一个指向数组第一个元素的指针。所以当你将数组名作为参数传递给函数时，你实际上是传递了一个指针，这个指针指向数组的第一个元素。
//    }
//
//    return 0;
//}

//int main(){
//    int a[] = {1,2,3,999};
//    int* p = a;
//    while (*p != 999){
//        printf("%d\n",*p);
//        p++;            // p++让变量p指向下一个成员
//    }
//}




//int sum(int* array, int n){
//    int total = 0;
//    for (int i = 0; i < n; i++){
//        total += *(array + i);
//    }
//    return total;
//}

//int main(){
//    int a[] = {1,2,3,4};
//    int b = 10;
//    int c = 0;
//    c = sum(a,b);
//    printf("%d",c);
//    return 0;
//}

//pointer
//int main(){
//    int num = 10;
//    int* p = &num;
//    printf("%p\n",p);  //打印的是num的地址
//    printf("%d\n",*p); // 打印的存储在p这个地址上的值，即num的值
//    p++;  //这是指针运算，将p的值（地址）增加sizeof(*p)，在这个例子中，*p 是一个 int 类型，所以 sizeof(*p) 通常是 4（这取决于您的系统）。
//    // 因此，p++ 会将 p 的值增加 4，也就是说，p 现在指向的是 num 后面的 4 个字节。这个新地址并不一定属于任何您的程序变量，它可能是一个无效地址，
//    // 所以在没有确切知道这个地址是否有效的情况下，尝试访问 *p 可能会导致未定义的行为。
//    printf("%p",p);
//    return 0;
//}


//明天查，这部分简单的还是不会？？？？？？？？？？？？？2.22http://programmedlessons.org/CPuzzlesNew/PartE/partEPuzzle15.html
//数据类型分别占用的字节数
//int main(){
//    int a = 3;
//    double b = 1.5;
//    double sum;
//    sum = a+b+2.0;
//    printf("%f\n",sum);   // 6.500000
//    printf("%f\n",sum=a+b);   // 4.500000
//    sum = sum + 0.5;
//    printf("%f\n",sum); //7.000000错，结果是5.000000
//    return 0;
//}

//int main(){
//    int a = 9;
//    int b =2;
//    double sum;
//    sum = a / b;
//    printf("%f\n",sum);
//    return 0;
//}

//数组初始化以及指针
//int main(){
//    char c[] = "hello";
//    char* p2 = &c;  //这不对，p2是指向数组第一个元素的指针，但是&c却是指向整个数组的指针，前后类型不匹配！！！！！！！！！！！！
//
//    printf("%c\n",*p2);
//    printf("%s\n",c);  //c is s string array,so placeholder should use %s,
////    printf("%c",c); 这不对，%c这是要打印单个字符，而 c 是一个字符数组，不是单个字符，占位符与后面的参数类型不匹配！！！！！！！！！！！
//    //如果你只想要打印字符数组中的单个字符，你需要提供数组中的一个具体元素，而不是整个数组。
//    printf("%c\n",c[2]);  //  打印数组 c 中的第3个字符
//
//    //如果你已经有一个指向数组第一个元素的指针，你可以通过对指针进行适当的偏移来访问数组的其他元素，并修改它们的值
//    char* p = c;
//    p++;          // 移动指针到数组的第二个元素
//    *p = 'a';    // 修改第二个元素的值为 'a'
//    printf("%s",c);  // 打印修改后的数组
//    return 0;
//}


//scanf 函数
//int main(){
//    char a[10];
//    printf("pls type string:");
//    scanf("%s",a); // canf("%c",a)我之前是这么写的错的，"%c" 格式说明符用于读取单个字符，无论用户输入多长的字符串，scanf("%c", a); 只会读取第一个字符，并存储在数组 a 的第一个位置上，其他位置不会被初始化。
//    printf("this is a string %s\n",a);
//    return 0;
//}

//
//int main(void){
//    char a[];
//    scanf("%s",a);
//    return 0;
//}


//求和
#include <stdio.h>
//int add(int x,int y){
//    int z;
//    z = x + y;
//    return z;
//    或者直接用下面一行替代上面3行
//    return (x + y);
}

//int main(){
//    int a = 0;
//    int b = 0;
//    scanf("%d %d",&a,&b);
//    int sum = add(a,b);
//    printf("%d",sum);
//    return 0;
//}


//#include <stdio.h>
//
//#define MAXLEN 128
//
//int main() {
//    char str[MAXLEN];
//
//    printf("Enter a string: ");SDV BN
//    if (fgets(str, MAXLEN, stdin) != NULL) {
//        printf("You entered: %s", str);
//    } else {
//        printf("Error reading input.\n");
//    }
//
//    return 0;
//}
//

//#include <stdio.h>
//void print_string(char *str) {
//    printf("%s\n", str);
//}
//
//int main() {
//    char my_string[] = "Hello";
//    print_string(my_string);
//    return 0;
//}



//#define MAXLEN 10

//int main() {
//    char input[MAXLEN]; // 定义一个字符数组来存储输入的字符串
//
//    // 使用 fgets() 函数从标准输入读取一行字符串
//    printf("Enter a string: ");
//    fgets(input, MAXLEN, stdin);          //h  y  u l he world earth
//
//    // 输出读取到的字符串
//    printf("You entered: %s", input);
//
//    return 0;
//}



//for 循环执行顺序是：先初始化，然后执行判断，如果判断非0 ，那执行循环体部分，这是一次循环
//        下一次再到for循环，这时执行的是调整部分，然后再是判断，判断结果是非0，那执行循环体部分。并不是第一次就3个参数全都判断的！
//#include <stdio.h>
//int main() {
//    int i;
//
//    for (i = 0; i < 5; i++) {
//        printf("%d\n", i);
//    }
//    printf("Loop finished!\n");
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>

//int ADD(int a,int b){
//   return (a + b );
//}
//
//int main (void){
//    int x = 0;
//    int y = 0;
//    scanf("%d %d",&x,&y);
//    int sum = ADD(x,y);
//    printf("%d\n",sum);
//    int a = 10;
//    printf("%d\n",&a);//每运行一次，a都会重新创建，所以地址是变化的，打印出来的结果每次都不一样（十六进制）
//    int* p = &a;    //地址也是数字，只不过是十六进制的，那想要将地址存储起来（地址也被称为指针），放到一个变量p,p的类型就是int*，p就是指针变量
//    return 0;
//}





/*
void inti(int arr[],int sz){
    int i;
    for (i = 0; i < sz; i++) {
        arr[i] = 0;
    }
}

void print(int *arr, int sz) {
    int i;
    for (i = 0; i < sz; i++) {
        printf("%d ",arr[i]);
    }
}

int main(void){
    int arr[5] = {1,2,3,6,8};
    int i;
    int sz = sizeof (arr) / sizeof (arr[0]);
    print(arr,sz);
    inti(arr,sz);
    printf("\n");
    print(arr,sz);
    return 0;
}
*/

//void test(int n);
//
//int main(){
//    int a  = 10;
//    int b = ++a;   // ++a operator: first add then use ((i.e. first assign).  equal to : a=a+1,b = a
//    printf("%d %d\n",a,b);
//    int c = a++;  //first use(i.e. first assign) then add .                  equal to : c = a,a=a+1
//    printf("%d %d\n",a,b);
//
//    int d = 2;
//    printf("%d\n",d--);  //!!!!!!!!!!!!!!!!!   一定要注意d--/d++ 这一定是先使用，然后才是加或减
//    printf("%d\n",d);

//    int e = 9;
//    test(e--);    //传入的只是10，--是先使用。留下来即在main函数内部，这个使用之后a的才会改变。
//    int a[10] = {9};
//    int* p = a;
//    int i;
//    for (i = 0; i < 10; i++) {
////        a[i] = 3;
////        *(a + i) = 3;
////        *(p + i) = 3;
//        *p = 3;
//        p ++;                 //这4种表达结果都一样
//        printf("%d ",a[i]);
//    }
//    return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//int main(){
//    int a = 10;
//    size_t c = sizeof(++a);
//    printf("a=%d\n",a);   //a is 10,doesn't change
//    return 0;
//}

//#include <stdlib.h>
//#include <stdio.h>
//int main(){
//
//    char str[];
//    scanf("%s",&str);
//    printf("%s",str);
//    return 0;
//}
//您无法直接声明一个未指定大小的数组 看chatgpt