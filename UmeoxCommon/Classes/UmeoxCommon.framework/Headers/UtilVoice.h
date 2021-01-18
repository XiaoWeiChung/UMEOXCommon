//
//  UtilVoice.h
//  语音工具类
//
//  Created by Ye LeePing on 13-10-24.
//  Copyright (c) 2013年 iTensen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "VoiceConverter.h"

typedef enum{
    UtilVoiceStatus_Begin=1,
    UtilVoiceStatus_Success=2,
    UtilVoiceStatus_Timeout=3,
    UtilVoiceStatus_TooShort=4,
    UtilVoiceStatus_Delete = 5,
    UtilVoiceStatus_Error = 6,
}UtilVoiceStatus;

@protocol UtilVoiceDelegate;

@interface UtilVoice : NSObject<AVAudioRecorderDelegate>{
//    id<UtilVoiceDelegate> delegate;
    bool recording;
    int time_max;
    int time_min;
    NSTimeInterval time;//录音时间
}
@property(nonatomic,retain) NSString* file;
@property(nonatomic,assign) id< UtilVoiceDelegate > delegate;
@property(nonatomic,retain) AVAudioRecorder *recorder;
@property(nonatomic,retain) AVAudioSession *session;
- (id)initMax:(int)_max min:(int)_min;
- (void)start;
- (void)stop;
- (void)deleteRecord;
- (NSString *)getFileUrl;
+ (NSString *)download:(NSURL *)url;
//语音下载
+(void)scheduleDownload:(NSString*)name remoteUrl:(NSString*)url result:(void(^)(NSString *amrPath, NSString*wavPath, float length, NSError *error))result;
//时长计算
+(float)lengthOfAudio:(NSString*)audioFullPath;

@end

@protocol UtilVoiceDelegate <NSObject>
//录音状态变化
- (void)UtilVoice:(UtilVoice *)obj recordStateDidChange:(UtilVoiceStatus)status;
- (bool)pcmToMp3:(NSString *)cafFilePath mp3SavePath:(NSString *)mp3FilePath;

@end
