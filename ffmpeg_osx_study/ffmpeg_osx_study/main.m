//
//  main.m
//  ffmpeg_osx_study
//
//  Created by 黄盼青 on 16/1/27.
//  Copyright © 2016年 temobi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "exercise1.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        NSLog(@"FFMepg Exercise");
        
        
        //Exercise 1
        getMediaInfoWithURL([@"http://video.app.ddpai.com/+86-15851416035/video/00a5wOd1451908841_20160104193338_29.mp4" UTF8String]);
        
        
    }
    return 0;
}
