# Git

## 1.git编辑代码前的操作

1. **git有四个区**

+ 工作区(workspace)
+ 暂存区(staging area)
+ 版本库或本地库(local repository)
+ 远程库(remote repository)

2. **git的基本用法**

+ 使用 `git config --global user.name "name"`

+ 和`git config --global user.email "abc@abc.com"`
  > ​	使用这两条语句确定基本信息,就好像登录后才能评论

3. **git本地库的创建**

 + 使用`git init`来初始化一个库
 + 初始化后会有一个.git文件夹(这个文件夹不能乱动)

4. **注册一个GitHub或gitee账号**
5. **在GitHub或gitee上新建一个库**
6. **将本地库与远程库连接**

	+ 在本地git bash输入`ssh-keygen -t rsa -C "abc@abc.com"`
	+ 然后一直按enter
	+ 在`C:\Users\I`生成了一个.ssh文件夹
	+ 文件夹内有`id_rsa.pub`
	+ 打开后复制全部内容
	+ 在GitHub或gitee设置内找到`ssh and gpg keys`然后添加一个新的ssh
	+ 添加完成后在本地git bash内输入`ssh -T git@github.com`
	+ 等待`Are you sure you want to continue connecting (yes/no/[fingerprint])? yes`后输入yes
	+ 等待连接成功

7. **查看当前远程库**

	+ 输入`git remote`
	+ 再 `git remote -v`

## 2.一些简单的命令

1. **文件命令**
  + `cd `用于改变目录
  + `cd ..`用于返回上一个目录如果单独一个`cd`则进入默认目录
  + `pwd`用于显示但钱所在的目录路径
  + `ls`或`ll`显示当前目录中所有文件后者会更详细
  + `touch`新建文件命令
  + `mkdir`新建文件夹命令
  + `rm`删除一个文件
  + `rm -r`删除一个文件夹
  + `mv`移动文件 格式为`mv 原文件 目标目录`值得注意的是两者必须在同一个目录之下
  + `reset`重新初始化终端
  + `clear`清屏

2. **工作命令**

  + `git add .`用于将工作区文件全部添加到暂存区`git add filename`可以单独添加文件到暂存区
   
  + `git commit -m "tips"`用于将暂存区文件提交到版本库`-m"tips"`双引号内写提示信息
  + `git push -u origin master`用于将版本库内的文件提交到远程库
  + `git clone "https"`用于将远程库的内容下载到本地
