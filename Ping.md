# Ping

## ping的五步法

1. `ping 127.0.0.1`检测自己的主机基础网络配置是否正常即检查本机的tcp/ip是否正确安装
2. `ping 本机ip`不能ping公网ip, 只可以ping内网ip(如果ping不通, 网线或者wifi连接有问题)
3. `ping 默认网关`即测试路由器是否正常工作
4. `ping 目标ip` 如果出错
   + 对方主机下线
   + 防火墙禁止了ping请求
   + 数据包丢失
5. `ping 目标主机名` 即域名

## 2.Ping数据包

1. `ping ip`或`ping 域名`
2. `ping -c n ip` `-c`可以指定ping的次数`n`为一个确定的正整数
3. ICMP: 网络层协议,IP协议的一部分, ping的实质是ICMP下的echo请求和echo响应
4. seq表示sequence次序
5. ttl: Linux初始值为64而Windows初始值为128, 每当一个数据包经过一个路由就会减一,如果ttl的值为0, 数据包就会被丢弃,这可以防止数据包在网络里"游来游去"可以用`ping localhost`查看本机ttl初始值
6. 在ping命令后有一个 `n data bytes` 在执行完ping后返回值的最前面也会有`m bytes` 前者是每个请求使用了56个数据字节,而ICMP数据包的报头会使用8个字节所以后者m=n+8

## 3.常见错误

1. `Request timeout`: 请求超时
2. `Destination Network/host unreachable`: 一般表示对方主机下线或不存在互联网里也可能是输入错误
3. `Hardware Error`: 硬件问题

## 4.一些操作

1. `ping -a ip`在ping成功时会发出声音
2. `ping -i n ip`每隔n秒发送一次
3. `ping -c 100 -q ip`

