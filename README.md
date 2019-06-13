DS128+ v6.2.2 编译内核模块的编译环境

1. 使用root权限运行，下载tarball比较费时间，视网络情况而定

2. 除了内核模块，其它工具也可以使用这个环境编译，比如iptables

   手工编译方式： 
          1.将源代码解压到  build_env/<platform>/
          2. choot build_env/<platform>
          3. cd /source_code && ./configure && make
