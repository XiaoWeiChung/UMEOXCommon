//
//  ProgressDialog.h
//  Wherecom
//
//  Created by Umeox_Wherecom on 15/7/18.
//  Copyright (c) 2015年 umeox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProgressDialog : NSObject
@property (nonatomic,assign) BOOL touchOutSideCancelAble;
//显示对话框 当前View
+ (void)showProgressDialogWithMsg:(NSString*)msg;
+ (void)dismissDialogWithMsg:(NSString*)msg success:(BOOL)isSuccess;
+ (void)dismissDialogWithMsg:(NSString*)msg success:(BOOL)isSuccess complete:(void(^)())block;
+ (void)dismissProgressDialog;
+ (void)showNotice:(NSString *)notice;

@end
