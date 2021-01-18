//
//  ConstVal.h
//  Capsule
//
//  Created by saluman on 14-7-8.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef Capsule_ConstVal_h
#define Capsule_ConstVal_h
#define RemoteAlias         @"RemoteAlias"
#define FCM_Token           @"FCMToken_123456"

#define GetMemberID         [UserDataInformation sharedInstance].appData.user.memberId

#define setHolderRadius(radius,holderId)         [[NSUserDefaults standardUserDefaults] setObject:@(radius) forKey:[NSString stringWithFormat:@"radius-%@",@(holderId)]]; \
[[NSUserDefaults standardUserDefaults] synchronize];

#define getHolderRadius(holderId)                [[NSUserDefaults standardUserDefaults] objectForKey:[NSString stringWithFormat:@"radius-%@",@(holderId)]]

#ifdef  DEBUG
#define DLog(fmt, ...) NSLog((@"%s(%d) " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DLog(...)
#endif

#define TabBarHeight                     (isFullScreenDevice ? 83 : 49)
#define NavigationHeight                 (isFullScreenDevice ? 88 : 64)

// iPhone 11系列手机
#define isiPhone11 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) : NO)
#define isiPhone11Pro ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
#define isiPhone11ProMax ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) : NO)

// 全面屏手机系列
#define isFullScreenDevice  ([[CapsuleUtils getiPhoneType] rangeOfString:@"iPhone X"].length || [[CapsuleUtils getiPhoneType] rangeOfString:@"iPhone 12"].length || isiPhone11 || isiPhone11Pro || isiPhone11ProMax)

// 添加、删除语聊标记
#define AddNewChatMsgTag(holderId)       [[NSUserDefaults standardUserDefaults] setObject:[NSNumber numberWithBool:YES] forKey:[NSString                                                  stringWithFormat:@"%dCMD2",holderId]];\
                                         [[NSUserDefaults standardUserDefaults] synchronize];
#define RemoveChatMsgTag(holderId)       [[NSUserDefaults standardUserDefaults] setObject:[NSNumber numberWithBool:NO] forKey:[NSString                                                   stringWithFormat:@"%dCMD2",holderId]];\
                                         [[NSUserDefaults standardUserDefaults] synchronize];

#define kDeviceWidth                        [UIScreen mainScreen].bounds.size.width
#define kDeviceHeigh                        [UIScreen mainScreen].bounds.size.height
#define FKX(view) (view.frame.origin.x+view.frame.size.width)
#define FKY(view) (view.frame.origin.y+view.frame.size.height)

typedef NS_ENUM(NSUInteger, DeviceType) {
    DeviceTypeCandy1 =1,        // 定位糖1
    DeviceTypeWXB1,             // 卫小宝
    DeviceTypeCandy2,           // 定位糖2
    DeviceTypeWXB2,             // 卫小宝2
    DeviceTypeK2C=6,            // K2C
    DeviceTypeW268C=8,          // W268C
    DeviceTypeCandy2C=9,        // Candy2C
    DeviceTypeK3=10,            // K3
    DeviceTypeStudent=11,       // 学生卡
    DeviceTypeWherecomK5=15,    // K5
    DeviceTypeWherecomQ50=16,   // Q50
    DeviceTypeWherecomK6=17,    // K6
    DeviceTypeWherecomK7=18,    // K7
    DeviceTypeWherecomK5S=19,   // K5S
    DeviceTypeWherecomK8=20,    // K8
    DeviceTypeK8C=21,           // K8C
    DeviceTypeK10S=23,          // K10S
    DeviceTypeWherecomK7C=24,   // K7C
    DeviceTypeWherecomK7S=25,   // K7S
    DeviceTypeWherecomK6S=26,   // K6S
    DeviceTypeWherecomK9=29,    // K9
    DeviceTypeWherecomHOSAN=30, // HOSAN
    DeviceTypeWherecomK10=31,   // K10
    DeviceTypeWherecomK8CO=32,  // K8CO
    DeviceTypeWherecomK10Pro=34,// K10Pro
    DeviceTypeWherecomK19=36,   // K19
    DeviceTypeWherecomK01S=37,  // 定位器
    DeviceTypeWherecomK19W=39,  // K19W
    DeviceTypeWherecomK6W=40,   // K6W
};

#pragma mark - 官方网址
#define  APP_WEB_SITE                                   @"http://www.babywei.cn/wap"
//static NSString *const appFacebook = @"https://www.facebook.com/wherecom";

#pragma mark 服务器
//________________________________________________________________________________________________________
//正式服务器
//国内
#define  APP_URL                                        @"http://api.weixiaobao.com/umeox/api/"
#define  APP_USER_IMAGE                                 @"http://114.215.175.161:80/umeox"
#define  APP_URL_TEMP_FILE                              @"http://114.215.175.161:7878"

//海外
#define  AREA_APP_URL                                   @"https://api.wherecom.com/umeox/api/"
#define  AREA_APP_USER_IMAGE                            @"http://54.171.187.21:8099/umeox"

//________________________________________________________________________________________________________
#define  APP_LOOKUP                                     @"http://itunes.apple.com/lookup?id=1042248287"//查看更新
#define  APP_STORE_Oversea                              @"https://itunes.apple.com/us/app/qun-xiang-dao/id1042248287?ls=1&mt=8"//appStore wherecom下载链接
#define  APP_TAOBAO                                     @"http://umeox.tmall.com/"//官方商城
#define  APP_WEIBO                                      @"http://www.weibo.com/babyweiclub"
//________________________________________________________________________________________________________
#define SHARE_DEFAULT_CONTENT                           @""
#define SHARE_CONTENT                                   @"你的甜蜜分身  时刻守护家人 详情见官网:http://www.wherecom.com "
#define SHARE_TITLE                                     @"在哪儿?"
#define SHARE_DESCRIPTION                               @""
//________________________________________________________________________________________________________
#pragma mark 用户数据缓存
#define USER_DATA_CACHE                                 @"user_data_cache"
//________________________________________________________________________________________________________
#pragma mark 本地设置
#define APP_SETTING                                     @"setting"          //本地设置
#define APP_TRACELINE                                   @"traceLine"        //轨迹连线
#define APP_ALERTTYPE                                   @"alertType"        //是否为免打扰模式
#define APP_ALERTFORCE                                  @"alertForce"       //强制提醒
#define APP_IGNORESTIME                                 @"startTime"        //免打扰开始时间段
#define APP_IGNOREENDTIME                               @"endTime"          //免打扰结束时间段
#define APP_Latitude                                    @"appLatitude"      //纬度
#define APP_Longitude                                   @"app_Longitude"    //经度
//________________________________________________________________________________________________________
#pragma mark 地图类型
#define APP_Map_Type                                        @"mapType"
//________________________________________________________________________________________________________

#pragma mark NotificationHolder
static NSString* const WXBChangeHolder = @"wChangeHolder";    //更新Holder
static NSString* const WXBSwitchHolder = @"wSwitchHolder";    //切换Holder
static NSString* const WXBUnBindHolder = @"wUnBindHolder";    //解除绑定
static NSString* const WXBUpdateRightView = @"WUpdateRightView"; //更新侧边Holder列表
static NSString* const WXBGoHome = @"wGoHome";                //切回地图页面

#pragma mark 远程通知
static NSString* const WXBRemoteNotification = @"remoteNotification";//Sos通知
static NSString* const WXBRemoteNotificationOfLocation = @"remoteNotificationOfLocation";//定位通知
static NSString* const WXBRemoteNotificationOfSos = @"remoteNotificationOfSos" ; //Sos通知
static NSString* const WXBRemoteNotificationOfLowBarrty = @"remoteNotificationOfLowBarrty";//低电通知
static NSString* const WXBRemoteNotificationOfInviteFollow = @"remoteNotificationOfInviteFollow"; //申请关注通知
static NSString* const WXBRemoteNotificationOfApplyFollow =  @"remoteNotificationOfApplyFollow"; //邀请关注
static NSString* const WXBRemoteNotificationOfAgreeFollow = @"remoteNotificationOfAgreeFollow";//同意关注
static NSString* const WXBRemoteNotificationOfRefuseFollow = @"remoteNotificationOfRefuseFollow";//拒绝关注
static NSString* const WXBRemoteNotificationOfUnbound = @"remoteNotificationOfUnbound";//解绑通知
static NSString* const WXBRemoteNotificationOfSystem = @"remoteNotificationOfSystem";//系统消息
static NSString* const WXBRemoteNotificationOfHolder = @"remoteNotificationOfHolder";//设备Push消息
static NSString* const WXBRemoteNotificationChatMessage = @"remoteNotificationChatMEssage";//语聊消息
static NSString* const WXBRemoteNotificationTakePhoto = @"remoteNotificationTakePhoto";//远程拍照
static NSString* const WXBRemoteNotificationCancelVideoCall = @"remoteNotificationCancelVideoCall";//取消视频通话
static NSString* const WXBRemoteNotificationChangeAdmin = @"WXBRemoteNotificationChangeAdmin";//转移管理员
static NSString* const WXBRemoteNotificationDeleteByAdmin = @"WXBRemoteNotificationDeleteByAdmin";//被管理员移除家庭成员

typedef NS_ENUM(NSInteger, RemoteNotiType) {
    RemoteNotiTypeNormalMessage = 1,            //普通消息推送
    RemoteNotiTypeChatMessage = 2,              //语聊消息推送
    RemoteNotiTypeGroupChatMessage = 3,         //语聊群组消息
    RemoteNotiTypeApplyFollow = 4,              //申请关注
    RemoteNotiTypeInviteFollow = 5,             //邀请关注
    RemoteNotiTypePosition = 12,                //当前位置
    RemoteNotiTypeRecord,                       //录音
    RemoteNotiTypeSos,                          //sos警告
    RemoteNotiTypeRail,                         //电子围栏
    RemoteNotiTypeElectric = 17,                //低电警告
    RemoteNotiTypeUnbound = 19,                 //解除绑定
    RemoteNotiTypeStatic,                       //静止提醒
    RemoteNotiTypeLowerMoney,                   //余额提醒
    RemoteNotiTypeAgreeFollow,                  //管理员同意关注
    RemoteNotiTypeRefuseFollow,                 //管理员拒绝关注
    RemoteNotiTypeMove,                         //运动提醒
    RemoteNotiTypeReportCallLocation = 25,      //上报通话位置
    RemoteNotiTypeReportPowerOffLocation = 26,  //关机上报位置
    RemoteNotiTypeWatchFriend = 27,             //成为设备好友
    RemoteNotiTypeImportMessage = 28,           //重要消息
    RemoteNotiTypeDeleteByAdmin = 29,           //被管理员移除家庭成员
    RemoteNotiTypeNewFollow = 30,               //新增关注者
    RemoteNotiTypeVideoCall = 50,               //视频通话
    RemoteNotiTypeCancelVideoCall = 51,         //取消视频通话
    RemoteNotiTypetakePhoto = 52,               //远程拍照
    RemoteNotiTypeWatchShed = 53,               //手表脱落
    RemoteNotiTypeAudioCall = 55,               //语音通话
    RemoteNotiTypeCancelAudioCall = 56,         //取消语音通话
};

#define RemoteAlertTagApplyFollow                       1004  //申请关注
#define RemoteAlertTagInviteFollow                      1005  //邀请关注
#define RemoteAlertTagSos                               1014  //sos警报
#define RemoteAlertTagElectric                          1017  //低电警告
#define RemoteAlertTagUnbound                           1019  //解除绑定
#define RemoteAlertTagRail                              1015  //电子围栏
#define RemoteAlertTagAgreeFollow                       1022  //同意关注
//________________________________________________________________________________________________________
typedef NS_ENUM(NSInteger, ErrorType){
    ErrorTypeBind  = 40001,//绑定芜湖手表失败 sim卡号不一致
    ErrorTypeApply,//申请芜湖手表失败，非移动号码段
    ErrorTypeInvitation,//邀请芜湖手表失败，非移动号码段
    ErrorTypeFamily,//邀请亲情号芜湖手表失败，非移动号码段
    ErrorTypeMember, //绑定失败 会员非移动号码段
};

#define BIND_WH_ERROR                                   40001 //绑定芜湖手表失败 sim卡号不一致
#define APPLY_WH_ERROR                                  40002 //申请芜湖手表失败，非移动号码段
#define INVITATION_WH_ERROR                             40003 //邀请芜湖手表失败，非移动号码段
#define Family_WH_ERROR                                 40004 //邀请亲情号芜湖手表失败，非移动号码段
#define BIND_MEM_WH_ERROR                               40005 //绑定失败 会员非移动号码段

static NSString* const WXBBindWhError = @"您的设备属于定制版，请使用移动号码";
static NSString* const WXBBindMemWhError = @"您的设备属于定制版，请使用移动账号绑定";
static NSString* const WXBApplyWhError = @"您的设备属于定制版，请使用移动号码申请关注";
static NSString* const WXBInvitationWhError = @"您的设备属于定制版，只能邀请移动号码关注";
static NSString* const WXBFamilyWhError = @"您的设备属于定制版，只能添加移动号码作为亲情号";

//________________________________________________________________________________________________________
#define APP_TOKEN                                       @"app_token"            //token
#define APP_ID                                          [[NSBundle mainBundle] bundleIdentifier]   // appid
#define HOLDER_SETTING                                  @"holderSetting"        //本地操作

//________________________________________________________________________________________________________

#pragma mark - 缓存路径
static NSString* const discover = @"discover";
#define DIR_IMAGE_CACHE                                 @"ImageCache"
#define DIR_PLIST_CACHE                                 @"PlistCache/LocalPlist.plist"
#define APP_LOCAL_DB                                    @"LocalDB"                  //本地数据库
#define APP_LOCAL_PT                                    @"LocalPt.plist"            //本地plist文件缓存
#define DIR_HTML_CACHE                                  @"HtmlCache"
#define DIR_VOICE_CACHE                                 @"VoiceCache"
#define DIR_VIDEO_CACHE                                 @"VideoCache"
#define DIR_DISCOVER_CACHE                              @"DiscoverCache"
#define KEY_FAMILY_NUMBER                               @"family_number_"           //亲情号码

//________________________________________________________________________________________________________
#pragma mark - 默认图片
#define DEFAULT_K7_LOGO                                 @"k7relation_7.png"
#define DEFAULT_LOGO                                    @"relation_6.png"
#define DEFAULT_GRIL                                    @"Default_girl.png"
#define DEFAULT_BOY                                     @"Default_boy.png"
#define DEFAULT_WOMEN                                   @"Default_women.png"
#define DEFAULT_MAN                                     @"Default_man.png"
#define DEFAULT_FAMILY_LOGO                             @"default_family_logo.png"
#define DEFAULT_IMAGE                                   @"default_image.png"
#define DEFAULT_HEAD_IMAGE                              @"default_headView.png"
//________________________________________________________________________________________________________

#define kTOKEN_CLIENT_ID_WXB                             @"wxb_api_ios"                          //卫小宝CLIENT_ID
#define kTOKEN_CLIENT_SECRET_WXB                         @"268ba12224ba0ffa022c87b1b982fbe8"     //卫小宝 CLIENT_SECRET
#define kTOKEN_CLIENT_ID_OverSea                         @"wherecom_api_ios"                     //WhereCom CLIENT_ID
#define kTOKEN_CLIENT_SECRET_OverSea                     @"e4eeff1ef2443e799863be62d5b8f1bb"     //WhereCom CLIENT_SECRET

#define kTOKEN_GRANT_TYPE                               @"password"
#define kTOKEN_APP_VERSION                              [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define kTOKEN_APP_TIMEZONE                             [NSTimeZone localTimeZone].description
#define kTOKEN_APP_LANGUAGE                             [NSLocale preferredLanguages].firstObject
#define TOKEN_UPLOAD_QINIU                              @"QiNiuUploadToken" 
#define UPLOAD_BASE_URL                                 @"base_upload_url"

#define URLSchemsData                                   @"URLSchemsData"
#define HomeViewTime                                    @"HomeViewTime"
#define AdressTime                                      @"AdressTime"
#define AdressResult                                    @"AdressResult"

// 视频通话KEY
#define AGORAKEY @"56c51903eced485bad9da141677ea86b"
#define jugeNullValue(value)                            ([value isKindOfClass:[NSNull class]] || value == nil || [value length] < 1) ? @"" : value
#define kStringIsEmpty(str) ([str isKindOfClass:[NSNull class]] || str == nil || [str length] < 1 ? YES : NO )

#endif
