//
//  CapsuleUtils.h
//  Capsule
//
//  Created by rogers on 14-6-4.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MessageUI/MessageUI.h>

//根据用户登录账号设置 也可以手动设置
typedef enum {
    MapTypeBMap = 0,
    MapTypeGMap,
}MapType;

@interface CapsuleUtils : NSObject
+(BOOL)isMobile:(NSString*)phone;
+(BOOL)isToday:(NSString*)date;
+(NSString*)addCallPrefix:(NSString*)phone isStun:(BOOL)isStun;

+ (NSDateFormatter*)getYMDHHMMSSDateFormatter;
+ (NSDateFormatter*)getYMDDateFormatter;
+(NSString*)getNowYMD;
+(NSString*)getNowYMDFromDate:(NSDate*)date;
+(NSString*)getNowYMDHMS;
+(NSString*)getNowYYMMDDHHMMSS;
+ (NSString *)getTimeHoursAndMinutes:(NSDate *)date;
+(NSDate*)getDateWithDateStr:(NSString*)date;
+(NSString*)getYMDSinceNow:(int64_t)time;
+(int)MinDateA:(NSString*)dateA andDateB:(NSString*)dateB;
+(NSString*)getPlaceholderImageNameWithGender:(HolderBean *)bean;


//本地地图类型设置
+(void)setMapType:(MapType)type;
+(NSInteger)getCurrentMapType;
//本地设置
+(void)delSetting:(NSString *)key;
+(id)getSetting:(NSString *)key;
+(void)setSetting:(id)key withValue:(id)value;


+(UIImage*)getImageFromURL:(HolderBean *)holder;
+(UIImage*)getImageFromLocal:(HolderBean*)holder;
+(void)saveToLocal:(UIImage*)image holder:(HolderBean *)holder;
+(UIImage*)getImageFromServer:(NSString *)holder;
+(void)initViewControllerTitle:(UIViewController*)viewController text:(NSString*)text;
+(NSString*)getMinute:(int)value;
+(NSString*)getHHmm:(int)value;
+(float)getCurrentSliderValue:(NSDate*)date;

#pragma  mark - 缓存管理
+(NSString *)getCacheDir;
+(NSString *)getCacheDir:(NSString*)name up:(NSString*)parent;

//暂缓数据
+(NSString *)cacheData:(NSData *)data dir:(NSString *)up name:(NSString *)name;
+(NSData *)getCacheData:(NSString *)up name:(NSString *)name;
//语音暂存路径
+(NSString *)cacheUploadVoice;
+(NSString *)getCacheVoiceUrl:(NSString *)url;
+(NSString *)getNameEncoded:(NSString *)name;
//删除文件
+(void)deleteCacheFile:(NSString *)dir;

//用户设定
+(NSString*)getSystemName;
+(int)getVersion;
+(NSString*)getAppVersion;
+(NSString*)md5StringFromString:(NSString*)string;
//用户数据
+(void)setUserData:(NSDictionary *)data;
+(NSString*)getUserData:(NSString *)key;
+(NSDictionary *)getUserData;
+(void)updateUserData:(id)value forKey:(NSString *)key;
+(void)logout;
+(BOOL)isLogin;
+(float)getWidth;
+(float)getHeight;
+(BOOL)validateMobileWithString:(NSString*)strMobile;
+(void)setLastTime:(NSString*)theDate;
+(NSString*)getLastTime;
+(NSURL*)getImageUrlWithPath:(NSString*)userHead;
+(NSString*)intervalSinceNow:(NSString*)theDate;
+(BOOL)validateString:(NSString*)string;
+(BOOL)validatePasswordWithString:(NSString*)code;
+(BOOL)validateEmailWithString:(NSString*)email;
+(BOOL)validateImeiWithString:(NSString*)imei;
+ (BOOL)validateCandy2Imei:(NSString *)imei;
+(BOOL)hasDollar:(NSString*)email;
+(NSString*)emailToDollar:(NSString*)email;
+(NSString*)dollarToEmail:(NSString*)email;
+(NSString*)getCurrentLanguage;

//获得设备类型
+ (NSInteger)intValueWithString:(NSString*)string;
+(BOOL)compareTime:(NSString*)time1 andTime2:(NSString*)time2;
+(NSString*)separator:(NSString*)week;

//获得最大值
+(NSInteger)getMax:(NSArray*)arr;

+ (BOOL)isBoy:(id)gender;
+ (BOOL)isGirl:(id)gender;
+ (BOOL)isMove:(id)isMoveRemind;
+ (BOOL)isStaticOpen:(id)isStaticOpen;
+ (NSInteger)staticStartHours:(id)startHours;
+ (NSInteger)staticEndHours:(id)endHours;

//获得消息开始时间

+ (NSString *)getDeptWith:(NSString*)date;
//结合数据排序

+ (NSMutableArray*)sort:(NSMutableArray*)arr andOtherArray:(NSArray*)otherArr;
//得到关系
+ (NSString*)getRelationString:(NSString*)relation;
+ (NSInteger)getRelationInteger:(NSString*)relation;
//得到年级
+ (NSString*)getGradeStringFromString:(NSString*)relation;
+ (NSInteger)getGradeIntegerFromString:(NSString*)relation;
//得到正确的字符串
+ (NSString*)getValidateString:(id)value;
//压缩图片
+ (UIImage *)drawImageFromImage:(UIImage*)originImage;

// 时间差
+ (NSInteger)timeIntervalSinceNow:(NSDate*)date;
+ (NSInteger)secIntervalSinceNow:(NSTimeInterval)time;

//是否为强制警报
+ (BOOL)isForceSos;
//是否为免打扰时间段
+ (BOOL)isRestTime;

//pragma mark 包大小转换工具类（将包大小转换成合适单位）
+ (NSString *)getDataSizeString:(int)nSize;

// 替换国外手机号码特殊字符
+ (NSString *)replacePhoneNumCharacter:(NSString *)phoneNumber;

+ (NSString *)getIdentifierName;

// 打印属性名称以及对应属性值描述
+ (void)printPropertysWithClass:(id)object;

// 获取手机型号
+ (NSString *)getiPhoneType;

+ (UIImage *)createImageWithColor:(UIColor *)color imageSize:(CGSize)imgSize;
+ (CGSize)countTextSizeWithContent:(NSString *)content andFont:(UIFont *)font andMaxSize:(CGSize)maxSize;
+ (CGSize)countAttributeTextSizeWithContent:(NSAttributedString *)content andMaxSize:(CGSize)maxSize;
// 截取图片
+ (UIImage *)getSubImage:(CGRect)rect image:(UIImage *)image;
// 压缩图片
+ (UIImage*)imageCompressImage:(UIImage *)sourceImage targetWidth:(CGFloat)defineWidth;
+ (NSString *)saveTempImageInSandBox:(UIImage *)image ;
// json字符串转字典
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;
//数组转json字符串
+ (NSString *)getJsonStringWithArray:(NSArray *)array;
//json字符串转数组
+ (NSArray *)getArrayWithJsonString:(NSString *)jsonString;
// 替换指定字符串
+ (NSString *)replacrStr:(NSString *)str targetStr:(NSString *)targetStr;

#pragma mark - 系统弹框
+ (void)creatSimpleAlert:(NSString *)title msg:(NSString *)msg;
+ (void)creatActionAlertWithTitle:(NSString *)title msg:(NSString *)msg okTitle:(NSString *)okTitle cancelTitle:(NSString *)cancelTitle okSel:(void (^)())okSel cancelSel:(void (^)())cancelSel;

// 设置导航栏标题颜色
+ (void)setNavigationControllerTitleColor:(UIColor *)color;
// 设置导航栏按钮背景颜色
+ (void)setNavigationControllerBarItemBackColor:(UIColor *)color;
// 设置导航栏背景颜色及状态栏字体颜色
+ (void)setNavigationControllerBackColor:(UIColor *)color isSetStatusBarTextColorToBlack:(BOOL)isBlack;

// 适配暗黑模式颜色
+ (void)setBackGroundColorWithView:(UIView *)view darkColor:(UIColor *)darkColor lightColor:(UIColor *)lightColor;
// 暗黑模式颜色
+ (UIColor *)setColorDarkColor:(UIColor *)darkColor lightColor:(UIColor *)lightColor;
// 推送内容显示
+ (NSString *)getBodyString:(NSString *)msg;

// 3D Touch
+ (void)addThree_DTouchAction;
+ (void)removeThree_DTouchAction;

// 打电话
+ (void)callWithPhoneNumber:(NSString *)phoneNumber;
@end
