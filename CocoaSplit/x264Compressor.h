//
//  x264Compressor.h
//  streamOutput
//
//  Created by Zakk on 3/17/13.
//  Copyright (c) 2013 Zakk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "libavformat/avformat.h"
#import "libavcodec/avcodec.h"
#import "libswscale/swscale.h"
#import <CoreVideo/CoreVideo.h>
#import "h264Compressor.h"
#import "CaptureController.h"
#import "CapturedFrameData.h"




@interface x264Compressor : NSObject <h264Compressor>
{
    
    
    AVCodec *_av_codec;
    AVCodecContext *_av_codec_ctx;
    struct SwsContext *_sws_ctx;
    dispatch_queue_t _compressor_queue;
    
    
}


@property (strong) id<ControllerProtocol> settingsController;
@property (strong) id <ControllerProtocol> outputDelegate;

-(bool)compressFrame:(CapturedFrameData *)frameData;
-(bool)setupCompressor;


@end
