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

#### 将工作区的代码添加到暂存区（需要是有变更的代码）
    git add .

#### 将暂存区的代码提交到本地仓库（在暂存区暂存的代码）
    git commit -m "feat: hello world"
    feat: 新增XXX功能
    fix: 修正XXX

#### 将本地仓库的代码推送到远程仓库（本地仓库代码）
    git push