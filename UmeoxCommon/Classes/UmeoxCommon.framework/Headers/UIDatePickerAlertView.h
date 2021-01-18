//
//  UIDatePickerAlertView.h
//  Capsule
//
//  Created by saluman on 14-7-9.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <UIKit/UIKit.h>

@class  UIDatePickerAlertView;


@protocol UIDatePickerAlertViewDelegate <NSObject>
- (void)commitDatePicker:(UIDatePickerAlertView*)datePicker andDate:(NSString*)date;
@end

@protocol UIDatePickerAlertViewDataSource <NSObject>

@required

- (NSString *)setDate:(UIDatePickerAlertView*)datePicker;

@end

@interface UIDatePickerAlertView : UIView
{
    UIButton *_okBtn;
}

@property (nonatomic,assign) id <UIDatePickerAlertViewDataSource> dataSource;

@property (nonatomic,strong) NSString *title;

@property (nonatomic,assign) id <UIDatePickerAlertViewDelegate>delegate;

- (void)show;
- (void)dismiss;


@end
