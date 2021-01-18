//
//  RootViewController.h
//  KidFit-K3
//
//  Created by WZY on 15/12/16.
//  Copyright (c) 2015年 UMEOX. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController
@property (nonatomic,strong) UIImageView *circleImageView;
@property (nonatomic,strong) HolderBean *rootBabyBean;
@property (nonatomic,assign) BOOL isAdmin;
@property (nonatomic,assign) BOOL canSlideToBack;
//判断是否打开推送设置
- (void)openSystemSetting;

//弹出一个提示框
- (void)showRemindAlertViewWithTitle:(NSString *)remindTitle content:(NSString *)remindContent confirmText:(NSString *)confirm confirmBlock:(void (^)(NSInteger buttonIndex))confirmBlock;

//自定义Alert框
- (void)showAlertViewWithTitle:(NSString *)remindTitle content:(NSString *)remindContent buttons:(NSArray *)buttonTitles confirmBlock:(void (^)(NSString * buttonTitle))confirmBlock;

//拍照
- (void)takePhotoSuccessBlock:(void (^)(UIImage *image))takePhotoBlock;

//获取相册图片
- (void)getSinglePictureSuccessBlock:(void (^)(UIImage *image))getSinglePicBlock;

//监测输入框并执行block
- (void)checkInputFiledWithFieldArray:(NSArray *)fieldArray andBlock:(void (^)(BOOL status))statusBlock;

//添加键盘退出响应
- (void)addTextFieldResignFirstResponseFunction;

//获取通讯录内容
- (void)getContactNameAndPhoneNumber:(void(^)(NSString *contactName,NSString *phoneNumber))contactData;

//actionSheet弹出
- (void)creatActionSheetWithTitle:(NSString *)title btnTitles:(NSArray <NSString *>*)btnTitles cancelTitle:(NSString *)cancelTitle btnSel:(void(^)(NSString *title))btnSel;

//延迟多少秒之后推一个本地推送
- (void)setLocalPush:(NSString *)title content:(NSString *)body sinceNowTime:(NSUInteger)SinceTime;

//带阴影效果的圆形图片(但不支持触摸响应)
- (void)makeImageViewCircleAndShadow;
@end
