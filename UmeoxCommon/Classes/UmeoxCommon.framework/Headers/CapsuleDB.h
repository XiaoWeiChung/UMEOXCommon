//
//  CapsuleDB.h
//  Capsule
//
//  Created by rogers on 14-6-4.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PlausibleDatabase.h"
#import "WChatMessage.h"
#import "clockmodel.h"
#import "NewClassTimeModel.h"

@interface CapsuleDB : NSObject {
    PLSqliteDatabase* db;
}

+ (void)checkAndUpdateDb;

+(CapsuleDB *)open;
- (void)close;
//设备信息
- (BOOL)insertHolders:(NSArray*)logs;
- (BOOL)deleteHolders:(long)holderId;
- (BOOL)updateHolderBean:(HolderBean*)holder;
- (HolderBean* )getHolderWithHolderId:(long)holderId;
- (HolderBean* )getCurrentHolder;
- (NSMutableArray* )getHolders;
- (NSMutableArray* )getAllHolderImei;

//位置信息
- (BOOL)deletePostion:(HolderBean *)bean;
- (BOOL)insertPositions:(NSMutableArray*)positionList andHolderId:(NSInteger)holderId;
- (BOOL)updatePositionsWithPositionBean:(HolderPostionBean*)bean andHolderId:(NSInteger)holderId;
- (NSMutableArray*)getPositionsFromDate:(NSString*)startTime endTime:(NSString*)endTime holderId:(int)holderId;
//推送消息
- (BOOL)insertNotification:(PushMsgBean*)msg;
- (void)insertPushMessage:(NSMutableArray*)msgList;
- (BOOL)isExitNotification:(PushMsgBean*)msg;
- (BOOL)updateNotification:(NSString*)messageId andHolderId:(long)holderId;
- (NSMutableArray*)getNoticficationsFromType:(int)type andHolderId:(long)holderId;
- (NSMutableArray*)getNoticficationsWithHolderId:(long)holderId andDest:(NSString*)dest;
- (BOOL)delPushMsg:(PushMsgBean*)msg;
- (BOOL)delTables;
//系统消息
- (void)insertSystemMessage:(NSMutableArray*)msgList andHolderId:(long)holderId;
- (BOOL)isExitSystemMessage:(SystemMsgBean *)msg;
- (BOOL)deleteSystemMessageWithMessageId:(int)msgId andHolderId:(long)holderId;
- (BOOL)updateSystemMessageWithMessageId:(int)msgId andMessage:(int)state andHolderId:(long)holderId;
- (NSMutableArray*)getSystemMessageWithHolderId:(long)holderId;

// 语聊信息
- (BOOL)insertChatMessage:(WChatMessage *)message;
- (BOOL)insertChatMsgs:(NSArray *)msgList;
- (BOOL)updateChatMessage:(WChatMessage *)message;
// 查询两个Id之间的所有聊天信息, messageId为结束ID, 倒叙查找
- (NSArray *)getChatMessageWithFromId:(NSString *)fromId toId:(NSString *)toId fromMessageId:(NSInteger)msgId;
- (NSArray *)getGroupChatMessageWithFromId:(NSString *)fromId toId:(NSString *)toId fromMessageId:(NSInteger)msgId;
// 删除聊天记录并删除本地录音文件
- (BOOL)deleteChatMessageWithMessageId:(NSInteger)msgId;
// 语聊消息是否存在
- (BOOL)isExistChatMessage:(WChatMessage *)msg;

// 清空语聊记录
- (void)deleteChatMessageWithFriendId:(NSString *)friendId memberId:(NSString *)memberId type:(NSInteger)type;
// 清空单条系统消息
- (BOOL)deleteSystemMessageWithMessageId:(int)msgId;
// 清空全部系统消息
- (BOOL)deleteSystemMessageWithHolderId:(long)holderId;
// 清空全部推送消息
- (BOOL)delPushMsgWithHolderId:(long)holderId;

//手表好友--
//创建手表好友表
- (void)createChartFriendsTableWithHolderId:(NSString *)holderId;
//获取手表好友列表
- (NSArray *)getChartFriendWithHolderId:(NSString *)holderId;
//更新手表好友信息
- (void)updateChartFriendDataWithHolderId:(NSString *)holderId andFrienddata:(NSDictionary *)dict;
//添加手表好友数据
- (void)addChartFriendDataWithHolderId:(NSString *)holderId byFriendsArray:(NSArray *)friends;
//删除手表好友
- (void)deleteChartFriendWithHolderId:(NSString *)holderId andFriendID:(NSString *)friendId;
//删除手表好友表
- (void)deleteChartFriendTableWithHolderId:(NSString *)holderId;

//家庭成员表   --
//创建家庭成员表
- (void)createFamilyMemberTableWithHolderId:(NSString *)holderId;
//获取家庭成员列表
- (NSArray *)getFamilyMemberWithHolderId:(NSString *)holderId;
//更新家庭成员信息
- (void)updateFamilyMemberDataWithHolderId:(NSString *)holderId andMemberData:(NSDictionary *)dict;
//添加家庭成员数据
- (void)addFamilyMemberDataWithHolderId:(NSString *)holderId byMembersArray:(NSArray *)members isAddOne:(BOOL)ret;
//删除家庭成员
- (void)deleteFamilyMemberWithHolderId:(NSString *)holderId andMemberID:(NSString *)memberId;
//删除家庭成员表
- (void)deleteFamilyMemberTableWithHolderId:(NSString *)holderId;

//安全区域表   --
//创建安全区域表
- (void)createGeoFenceTableWithHolderId:(NSString *)holderId;
//获取安全区域列表
- (NSArray *)getGeoFenceWithHolderId:(NSString *)holderId;
//更新安全区域信息
- (void)updateGeoFenceDataWithHolderId:(NSString *)holderId andGeoFenceBeandata:(GeoFenceBean *)dict;
//添加安全区域数据
- (void)addGeoFenceDataWithHolderId:(NSString *)holderId byGeoFenceArray:(NSArray *)geoFences isAddOne:(BOOL)ret;
//删除安全区域
- (void)deleteGeoFenceWithHolderId:(NSString *)holderId barrierId:(NSString *)barrierId;
//删除安全区域表
- (void)deleteGeoFenceTableWithHolderId:(NSString *)holderId;

//闹钟表   --
//创建闹钟表
- (void)createDeviceClockTableWithHolderId:(NSString *)holderId;
//获取闹钟列表
- (NSArray *)getDeviceClocksWithHolderId:(NSString *)holderId;
//更新闹钟信息
- (void)updateDeviceClockDataWithHolderId:(NSString *)holderId andDeviceClockdata:(clockmodel *)clockModel;
//添加闹钟数据
- (void)addDeviceClockDataWithHolderId:(NSString *)holderId byDeviceClocksArray:(NSArray *)clocks isAddOne:(BOOL)ret;
//删除闹钟
- (void)deleteDeviceClockWithHolderId:(NSString *)holderId clockId:(NSString *)clockId;
//删除闹钟表
- (void)deleteDeviceClockTableWithHolderId:(NSString *)holderId;


//上课禁用表   --
//创建上课禁用表表
- (void)createClassTimesTableWithHolderId:(NSString *)holderId;
//获取上课禁用表列表
- (NSArray *)getClassTimesWithHolderId:(NSString *)holderId;
//更新上课禁用表信息
- (void)updateClassTimesDataWithHolderId:(NSString *)holderId andClassTimesdata:(NewClassTimeModel *)classTimeModel;
//添加上课禁用表数据
- (void)addClassTimesDataWithHolderId:(NSString *)holderId byClassTimesArray:(NSArray *)classTimes isAddOne:(BOOL)ret;
//删除上课禁用表
- (void)deleteClassTimesWithHolderId:(NSString *)holderId clockId:(NSString *)classTimeId;
//删除上课禁用表表
- (void)deleteClassTimesTableWithHolderId:(NSString *)holderId;


@end
