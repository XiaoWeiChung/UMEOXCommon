//
//  K3StyleTextField.h
//  KidFit-K3
//
//  Created by shun on 16/4/12.
//  Copyright (c) 2016年 UMEOX. All rights reserved.
//

#import "ZYTextField.h"

@interface K3StyleTextField : ZYTextField<UITextFieldDelegate>
- (void)initData;
- (void)setImageWithNormalImage:(UIImage *)nImage editingImage:(UIImage *)eImage;
- (void)setTextColorWithNormalTextColor:(UIColor *)nColor editingTextColor:(UIColor *)eColor;
- (void)setLineColorWithNormalLineColor:(UIColor *)nColor editingLineColor:(UIColor *)eColor;

@property (nonatomic,strong) void (^finishEdit)(NSString *text);
@property (nonatomic,strong) void(^upBlock)();
@end
