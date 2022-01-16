# 笔记
## 第三章 处理数据
### char
1. char在默认情况下不确定符号，是否有符号由C++实现决定，可以最大限度将 这种类型与硬件属性匹配。使用 signed char 和 unsigned char
2. wcha_t（宽字符类型） 可用于拓展字符集，字符流用wcin和wcout

### const限定符
    通用格式如下：
         const type name = value ;//应在声明中对const进行初始化
    比# define 好的原因：const可以去确定指定类型，可以利用作用域规则将定义限制在特定的函数或文件之中
### 浮点数
浮点数两种表示方法：
1. 常用的标准小数点表示法
2. E表示法：3.45e6 （3.45为尾数 ，6为指数）
### 运算符重载
    相同的符号进行多种操作，C++允许用户扩展运算符重载，以便能够用于用户定义的类。
### 类型转换
#### 潜在的数值转换问题
1. 将较大的复电类型转换为较小的浮点类型：精度（有效位数）降低，值可能超出目标类型的取值范围，在这种情况下，结果将是不确定的。
2. 将浮点类型转换为整型：小数部分丢失，原来的值可能超过目标类型的取值范围，在这种情况下，结果将是不确定的。
3. 将较大的整型转换为较小的整型：原来的值可能超出目标类型的取值范围，通常只复制右边的字节。
#### 用{}方式初始化时进行的转换
    列表初始化（list-initialization），用于复杂的数据类型提供值列表。列表初始化不允许缩窄（narrowing）

## 第四章 复合类型
### 数组初始化规则
    只有在定义数组时才能使用初始化。此后，就不能将一个数组赋值给另一个部分初始化，其他元素均设置为0。
    在定义数组时，禁止缩窄操作，C++提供了Vector（模版类）
### 字符串
#### 两种处理方法：
    1. C语言方法，‘\0’结尾。
    2. 基于string类库的方法
    警告：在计算存储字符串所需的最短数组时，别忘了将结尾的空字符计算在内。
    “S”不是字符常量，表示两个字符（字符S和'\0'组成的字符串）而且，“S”实际上表示的时字符串所在的内存地址，因此下面的语句试图将一个内存地址复制给shirt_size:
        char shirt_size = "S" ; //illegal type mismatch
#### strlen()
    strlen(),不计算结尾的空字符，只计算可见的字符。sizeof（）指出整个数组的长度。
#### cin如何确定已完成字符串输入
    在17章解决。
#### 每次读取一行字符串输入 ：getline ()
    getline()函数读取整行，使用cin.getline(name , count):如果参数是20 ，最多读取19个字符。
#### 面对行的输入： get（）
    get（）有多种变体
    两种用法:  cin.get(name ,ArSize) ;
              cin.get() ;
              cin.get(name ,ArSize) ;
    或者：
            cin.get(name1, ArSize).get() ;
#### get（）和getline（）
    为什么要使用get（），而不是getline（）？首先，老版本实现没有getline（），get（）使输入更仔细。
    getline（）使用起来简单一些，get（）使得检查错误更简单些。
#### 空行和其他问题
    1. 读取空行，之前是在get（）或者getline（）结束读取的位置开始读取。目前的做法是：当get（*（*not getline*） ）读取空行后将设置失效位（failbit）。导致接下来的输入将被阻断，但可以使用cin.clear();来恢复输入。
    2. 输入字符串比分配空s间长。

### C++允许函数有多个版本，条件是这些版本的参数列表不同---》函数重载

## String类
### 简介
    string类位于名称空间std中，所以必须提供一条using编译指令。
### 一些函数
#### strcpy()将字符串复制到字符数组中
    strcpy(charr1 ,charr2);
#### strcat()将字符串附加到字符数组末尾
    strcat(charr1 ,charr2);
#### string类I/O
    在输入时，因为未初始化长度。在使用strlen（）时，计算字节数直到空字符，导致数组长度可能不同
### 原始(raw)字符穿
    格式：R“+    *****  +*”

## 结构体
    C++允许在声明结构变量时省略关键字struct
### 成员赋值(memberwise assignment)
### 结构数组
    inflatable gifts[100] ; // array of 100 inflatable structures 

## 公用体(union)
### 可以使用几种格式中的一种来存储
## 枚举（enum）
### 格式
    enum spectrum {red , orange , yellow ,green , blue , violet ,indigo ,ultraviolet} ;
    spectrum 成为新类型的名称，red，orange成为符号常量，对应整数0～7，这些常量叫做枚举量。
    赋值：spectrum band ; 
        band = blue ; //valid ,blue is an enumerator
        band = 2000 ; // invalid ,2000 not an enumerator
# 指针和自由存储空间
## 计算机在存储数据时必须跟踪的三种属性。
    1. 信息存储在何处
    2. 存储的值是什么
    3. 存储的信息是什么类型
## 声明和初始化指针
    int* ptr ; // ptr地址，* 解引用，间接值
## 使用new来分配内存
    new比malloc（）更好
    int* pn = new int ;
    new int 告诉程序，需要适合存储int 的内存，new运算符根据类型来确定需要多少字节的内存，然后，找到这样的内存，并返回其地址。
### 标准格式
    typeName * pointer_name = new typeName ;

        


    
