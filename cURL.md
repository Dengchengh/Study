# cURL

## 1.HTTP常见请求

1. `curl URL`: 测试能否与目标连接  相当于发送GET请求, curl默认也是发送GET请求
2. `curl -X -POST URL`: 添加`-X POST`来设定POST请求, 也可以`curl -XPOST URL`
3. 一般来说`curl -XPOST URL`需要携带数据; `curl -XPOST URL -d ` `-d`后跟数据
4. 更新数据`curl -XPUT URL -d `将数据放在`-d`后
5. 删除数据`curl -XDELETE URL`

## 2.HTTP首部

1. `curl URL -H 首部`例如:`crul -XPOST https://jsonplaceholder.typicode.com/posts -H 'Content-Type:application/json'-d '{"title":"text"}'`在`-d`前可以有多个首部
2. `curl -l URL`

## 3.文件处理

1. `curl -O URL`下载(大写O)
2. `curl -o name.name URL`可以自定义下载的文件名
3. `curl --limit-rate 速度 URL`下载大文件
   + 速度不写单位默认是字节
   + 如果将下载终止想要恢复则`curl -C - URL`

## 4.连接与测试

1. cURL默认不会跟随重定向, 如需跟随重定向则需要`curl URL -L`
2. `curl -v URL`检查问题
3. `curl --proxy 协议://用户名:密码@代理地址:端口 URL`通过代理访问目标地址(http)
   + `curl -u 用户名:密码 -O FTP`下载
   + `curl -u 用户名:密码 -T 文件 FTP`上传