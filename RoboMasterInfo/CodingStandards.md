# <center>上海工程技术大学 木鸢机甲
## <center>代码规范 
> <font color=red size=4>注：本编码规范要求技甲大师算法/电控组所有成员严格遵守，若审查到不符合规范的代码会被要求进行修改</font>
### 命名方式
#### 基础要求
(1)缩写
较短单词可去除元音字母形成缩写
```cpp
temp->tmp
flag->flg
```
较长单词可取前部分字母
```cpp
result->res
increment->inc
initialize->init
```
或使用一些常见缩写
```cpp
message->msg
password->pwd/pswd
```
(2)非特殊情况**不要使用汉语拼音** 作为标识符，更不允许使用拼音首字母缩写
(3)必要时查阅词典，避免拼写错误
#### 变量
(1) 给变量命名时应使用贴合变量意义的单词构成，不应使用a、b、w等简单变量名（在简单循环中可以使用i、j等常用循环变量）
(2) 变量命名方法有驼峰命名法和下划线命名法
驼峰命名法：使用大写字母分割名字中的各个单词，命名变量时**首字母为小写**
下划线命名法：使用下划线分割名字中的单词，应**全为小写**
> 注意：各个兵种可采用不同的命名方法，但在**同一个代码工程中需统一使用同一种方法**
以下为一些命名示例
```cpp
Plain Text
//驼峰命名法示例
userName userPassword
//下划线命名法示例
user_name user_password
//不规范的变量命名
UserName user_Name USER_NAME username
```
#### 函数
函数命名方式推荐与使用的环境（即库函数）风格一致，得到以下规范
(1) 函数所在的**模块名**，以**首字母大写**的形式加下划线作为函数开头
(2) 函数名其余部分使用首字母大写的驼峰命名法
以下为一些命名示例
```cpp
Plain Text
//规范的命名
Chassis_RegisterEvents() System_Init()
//不规范的命名
registerEvents() chassis_register_events()
```
#### 结构体&枚举
(1) 命名方式应使用**首字母大写**的驼峰命名法
(2) 结构体和枚举命名应使用typedef关键词进行类型重命名，使得在使用时无需加struct和enum关键词
例如以下写法
```cpp
typedef struct
{
        int number;
        char *name;
        int score;
}Student;

typedef enum
{
        Red,
        Blue,
        Green
}Color;
```
#### 宏定义
宏定义命名使用**全部字母大写**，单词间分割使用下划线
以下为一些命名示例
```cpp
//规范的宏定义命名
TASK_MAX_NUM MAX_LOG_LENGTH ABS(x)
//不规范的宏定义命名
Task_Max_Num task_max_num Abs(x) abs(x)
```
#### 对齐&缩进
(1) 程序块分界符（左右花括号{}）应分别独占一行并垂直对齐，且与引用它们的代码左对齐
```cpp
C++
//规范的if
if(a==0)
{
        //code
}

//不规范的if
if(a==1)
        {
                //code
}

if(a==1){
        //code
}

```
(2) 花括号内部的代码块向右缩进一个tab，**同一个代码工程中需统一缩进方式**
```cpp
//不规范的单行if
if(a==1) a=0;//不允许写在一行

if(a==1)
a=0;//没有向右缩进

if(a==1)
    a=0;
    b=1;//此语句在if外，若这么写可能引起误解

//规范的单行if
if(a==1)
    a=0;//向右缩进
else if(a==0)
    a=1;
b=1;//if外的语句应该与if垂直对齐

if(a==1)
{
    a=0;//也可以正常加括号包裹
}
```
(4) 空循环应在后面添加一对空的花括号（而不是一个分号）
```cpp
//不规范的空循环
while(a==1);

//规范的空循环
while(a==1){}
```
#### 注释
(1) 每一条宏定义必须有注释
(2) 变量名若含有一些**不是明显约定俗成的缩写**，必须在其定义处注释中标明作用
(3) switch语句中，若由于一些特殊情况需要连续进入两个case语句（即有case无break），必须使用注释标明原因
```cpp
switch(val)
{
    //这种情况必须注释
    case 0:
        //code;
    case 1:
        //code;
    break;
}
```
(4) **自定义函数**必须在函数头注释中标明函数作用，最好也标明作者
```cpp
//系统初始化
//@author:张三
void System_Init()
{
        //code
}
```
(5) 注释应加在所描述代码的**上方或右边**，且与所描述的代码间不应有空行
```cpp
//不允许（隔了空行）
//允许
code;//允许
//不允许
```
(6) 代码的有效注释量应尽量在20%以上(非强制性)，但也不宜过多，不能喧宾夺主
(7) 保证代码和注释的一致性，修改代码时注意注释是否也要修改
#### 文件分配原则
(1) 仔细划分好各个模块，为每一个模块分配一组.c/.cpp/.h/.hpp文件，各模块间尽可能减少联系
(2) .h/.hpp文件中进行**类型定义**和**变量函数的声明**，.c/.cpp文件中进行**变量定义**和**函数实现**

<p align="right" size=3>HsxMark