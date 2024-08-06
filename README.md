# git 使用

#### 初始化本地仓库
    git init

#### 链接远程仓库
    git remote add origin 远程仓库链接地址

#### 将远程仓库代码克隆到本地
    git clone 远程仓库地址

#### git clone 都干了哪些事
1. 第一步：初始化本地仓库 git init
2. 第二步：链接远程仓库 git remote add origin 远程仓库链接地址
3. 第三步：将远程仓库代码克隆到本地

#### 将工作区的代码添加到暂存区（需要是有变更的代码,不能有报错）
    git add .

#### 将暂存区的代码提交到本地仓库（在暂存区暂存的代码）
    git commit -m "feat: hello world"
    feat: 新增XXX功能
    fix: 修正XXX

#### 将本地仓库的代码推送到远程仓库（本地仓库代码）
    git push


# 数组

#### 语法
    1. int name[6];
       赋值
    2. int name[]={1,2,3} ;  
   
#### 数组长度
    sizeof(arr) / sizeof(arr[0])

#### for循环
    int arr[] = {1,2,3,4,5};
    for(int elament: arr)
    {
        cout << element << endl;
    }

#### 字符数组
1. 以'\0'结尾
2. 中文用string类型

#### 多维数组
1. 数组内每个元素依旧是数组
2. 必须提供数组长度

# 指针

#### 指针基础
1. 指针：特定类型数据在内存中的存储地址
2. 实际应用：指针变量（载体）

#### 定义语法
    int num = 10;
    int * p;
    p = &num;

    int * q = &num;
1. p存num的地址
2. *p表示num的值

#### 野指针和空指针
1. 野指针：被声明但未初始化（赋值）的指针
2. 空指针
    `int * p = NULL;`

#### 指针运算
1. 指针 + n，地址 + n*类型大小

#### 动态内存分配
    int *p = new int[5];  
    //分配4*5个字节的内存空间，地址存p
    delete[] p;

#### 指针悬挂
1. 指针指向区域已经被回收（delete）

#### const指针/常量指针
1. 指向const的指针：内存数据不可变，指向可变
`const int * p`
2. const指针:指向不可变，内存数据可变
`int * const p`
3. 指向const的const指针：都不可变
`const int * const p`

# 结构体
    struct Student
    {
        string name;
        int age;
        string gender;
    }

    struct Student stu;

    stu = {"小明"，11，"男"};

    cout << stu.age;

1. 创建结构体时，可带默认值

#### 结构体数组
    struct Student stu[3];

     struct *p = new Student;
     p->name = "11";

     deliete p;

#### 结构体指针数组
    struct Student * p = new Student[3];

    p[1].age = 22;

    delete[] p;

# 函数
1. return执行，函数立刻结束
2. 函数不可定义在main函数内
3. 无返回值函数：void
4. 空参函数：()必须写

#### 函数传入数组
    void func(int arr[])
    void func(int arr[10])
    void func(int * arr)
1. 函数接受数组传入，一般建议附带数组长度（否则非常难以统计）
2. 在函数内调用`sizeof(arr)`得到的是指针大小