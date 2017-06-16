# MySQL的安装过程  
## 安装囧事  
*因为一向不太会记密码，所以安装MySQL的时候脑子一抽就直接把密码设成1了*  
~~真是一个悲伤的故事:pig:~~  
## 安装过程
1.vim .vimrc 删除第18行就可以复制粘贴文本
2.用vim打开源列表文件  
sudo vim /etc/apt/sources.list  
3.复制源码  
deb http://mirrors.aliyun.com/ubuntu/ xenial main restricted universe multiverse
deb http://mirrors.aliyun.com/ubuntu/ xenial-security main restricted universe multiverse
deb http://mirrors.aliyun.com/ubuntu/ xenial-updates main restricted universe multiverse
deb http://mirrors.aliyun.com/ubuntu/ xenial-backports main restricted universe multiverse  
####测试版源
deb http://mirrors.aliyun.com/ubuntu/ xenial-proposed main restricted universe multiverse
#### 源码
deb-src http://mirrors.aliyun.com/ubuntu/ xenial main restricted universe multiverse
deb-src http://mirrors.aliyun.com/ubuntu/ xenial-security main restricted universe multiverse
deb-src http://mirrors.aliyun.com/ubuntu/ xenial-updates main restricted universe multiverse
deb-src http://mirrors.aliyun.com/ubuntu/ xenial-backports main restricted universe multiverse
#### 测试版源
deb-src http://mirrors.aliyun.com/ubuntu/ xenial-proposed main restricted universe multiverse
#### Canonical 合作伙伴和附加
deb http://archive.canonical.com/ubuntu/ xenial partner
deb http://extras.ubuntu.com/ubuntu/ xenial main  
4.sudo apt-get update 更新源   
sudo apt-get install mysql-client mysql-server 安装mysql服务器和客户端    
sudo apt-get install tasksel  
sudo tasksel  
5.数据库安装完成  
## 运行MySQL  
先用命令mysql -u root -p进入MySQL  
再用命令create database stu 创建了数据库stu  
# MarkDown的使用  
*按照教程一步一步写的，表情用的比较熟* :joy::joy:
