//
//  UIView+ChangeFrame.h
//  KidFit-K3
//
//  Created by WZY on 15/12/28.
//  Copyright (c) 2015年 UMEOX. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ChangeFrame)

- (void)changePositionX:(CGFloat)newX;
- (void)changePositionY:(CGFloat)newY;
- (void)changeSizeWidth:(CGFloat)newWidth;
- (void)changeSizeHeight:(CGFloat)newHeight;
- (void)changeCenterX:(CGFloat)newX;
- (void)removeAllSubViews;

@end
