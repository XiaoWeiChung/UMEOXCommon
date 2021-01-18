//
//  UIViewController+GCDiscreetNotificationView.h
//  Wherecom
//
//  Created by Umeox_Wherecom on 15/7/3.
//  Copyright (c) 2015年 umeox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (GCDiscreetNotificationView)

- (void)showGCDisViewWithText:(NSString *)text inView:(UIView *)view  showActivity:(BOOL)act inPresentationMode:(GCDiscreetNotificationViewPresentationMode)mode dismissAfter:(CGFloat)timeInterval;
- (void)showGCDisViewWithText:(NSString *)text;
@end
