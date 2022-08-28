详细博客  
https://supervj.top/2020/05/12/Git%E4%BD%BF%E7%94%A8%E6%8C%87%E5%8C%97/?highlight=git  

创建本地仓库（在桌面直接右键进入git）    
cd E:/                  --进入E盘  
mkdir GitTest     --创建文件夹GitTest  
cd ./GitTest        --进入GitTest文件夹  
git init                --初始化  

git add test.txt                        提交text.txt文件到待提交列表  
git commit -m "第1次提交"    正式提交到仓库  
git pull origin master             从远程仓库下载代码文件  

1、先输入git remote rm origin 删除关联的origin的远程库  
2、关联自己的仓库 git remote add origin https://gitee.com/xxxxxx.git  
3、最后git push origin master，这样就推送到自己的仓库了  

把文件添加进git中：      git add .  
提交文件：               git commit -m     “2022-08-28”  
把文件推送到git上：      git push origin master  
