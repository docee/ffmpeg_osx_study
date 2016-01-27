//
//  exercise1.c
//  ffmpeg_osx
//
//  Created by 黄盼青 on 16/1/27.
//  Copyright © 2016年 temobi. All rights reserved.
//

#include "exercise1.h"
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>

int getMediaInfoWithURL(const char * url){
    
    //注册
    av_register_all();
    
    //初始化网络连接
    avformat_network_init();
    
    AVFormatContext *pFormatContext = avformat_alloc_context();
    
    if(avformat_open_input(&pFormatContext, url, NULL, NULL) !=0 ){
        
        av_log(pFormatContext, AV_LOG_ERROR, "ERROR:Can't open Media File.");
        return -1;
    }
    
    
    if(avformat_find_stream_info(pFormatContext, NULL) < 0) {
        
        av_log(pFormatContext, AV_LOG_ERROR, "ERROR:Can't find stream info.");
        
    }
    
    av_dump_format(pFormatContext, 0, url, 0);
    
    avformat_close_input(&pFormatContext);
    avformat_free_context(pFormatContext);
    
    
    return 0;
}

