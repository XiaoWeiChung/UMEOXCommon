//
//  WChatMessage.h
//  Wherecom
//
//  Created by shun on 15/9/1.
//  Copyright (c) 2015年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger, WChatMsgType) {
    WChatMsgTypeText = 0,                   // 文本语聊
    WChatMsgTypeRecord,                     // 录音文件
    WChatMsgTypeEmotion,                    // 表情包括点赞（K2中使用，K3未使用）
    WChatMsgTypeSOSText,                    // SOS语聊文本
    WChatMsgTypeSOSLocation,                // SOS地址信息
    WChatMsgTypeEmotionGif,                 // 单张动态图
    WChatMegTypeImage,                      // 图片类型
    WChatMsgTypeEmojipic,                   // 多表情
    WChatMsgTypeBeyondSafeZone,             // 超出安全区域
    WChatMsgTypeNotification,               // 通知类型
    WChatMsgTypeClosed,                     // 关机提醒
    WChatMsgTypeLowPower,                   // 低电提醒
    WChatMsgTypeNewFollower,                // 新添关注者
    WChatMsgTypeNewWatchFriend,             // 手表添加手表为好
    WChatMsgTypeMobileMsg,                  // 短信转发
    WChatMsgTypeSystem = 20,                // 系统消息
    WChatMsgTypeWatchOffAlarm = 21,         // 手表脱落报警
    WChatMsgTypeTrueName = 35,              // 实名认证
    WChatMsgTypeSimStatue = 36,             // SIM卡状态
    WChatMsgTypeMoney = 37,                 // 充值
};

@interface WChatMessage : NSObject

@property (nonatomic, strong) NSString *fromId;
@property (nonatomic, strong) NSString *toId;
// messageId 存在三个负数状态  -1000 表示未上传  -1001 表示正在上传   -1002表示上传失败
@property (nonatomic) int64_t messageId;
@property (nonatomic, copy) NSString *messageUrl;
@property (nonatomic, copy) NSString *messageUrlLocal;
@property (nonatomic) WChatMsgType messageType;
@property (nonatomic) int64_t messageTime;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) NSInteger isRead;
@property (nonatomic, copy) NSString *fromName;     // 好友昵称
@property (nonatomic, copy) NSString *fromAvatar;   // 好友头像
@property (nonatomic) NSInteger direction;          // 0:自己发送   1:好友发送
@property (nonatomic) NSInteger isGroupChat;
@end
