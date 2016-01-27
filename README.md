#ffmepg OSX Study

###1.FFMepg OSX Lib Download
由于Lib库比较大，我已上传百度云盘，网盘下载地址以及提取码如下：
```
下载地址：http://pan.baidu.com/s/1kTX5s4f
提取密码：8i8a
```
如果你想要自己编译静态库，你可以从[此处](https://github.com/docee/ffmpeg_build)获取编译脚本自行编译！

###2.Link Libraries
使用FFMpeg你需要引入以下库文件：

---------------
```text
libavcodec.a
libavfilter.a
libavformat.a
libavutil.a
libswresample.a
libswscale.a
---------------
CoreMedia.framework
VideoToolbox.framework
VideoDecodeAcceleration.framework
CoreVideo.framework
libiconv.tbd
libbz2.tbd
libz.tbd
```

###3.Prepare For This Project
该工程已默认忽略`.a`文件，请下载静态库，并将lib文件夹复制拷贝到项目文件夹的ffmpeg目录中。

