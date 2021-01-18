//
//  WBasePickerView.h
//  Wherecom
//
//  Created by Umeox_Wherecom on 15/5/28.
//  Copyright (c) 2015年 umeox. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WPickerViewDataSources,WPickerViewDelegate;

@interface WPickerView : UIView

@property (nonatomic, strong) NSString *title;

- (void)show;

- (void)dismiss;

- (void)reloadData;

- (void)selectRow:(NSInteger)row inComponent:(NSInteger)component animated:(BOOL)animated;
// 获得第component列的当前选中的行号
- (NSInteger)selectedRowInComponent:(NSInteger)component;

@property (nonatomic, assign) id <WPickerViewDelegate> delegate;
//dataSource
@property (nonatomic, assign) id <WPickerViewDataSources> dataSources;

@end

@protocol WPickerViewDataSources<NSObject>

@required
///由多少部分组成
- (NSInteger)numberOfComponentsInWPickerView:(WPickerView *)wPickerView;
///每部分有多少个元素
- (NSInteger)wPickerView:(WPickerView *)pickerView numberOfRowsInComponent:(NSInteger)component;
@optional
///每部分的内容
- (NSString *)wPickerView:(WPickerView *)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component;

- (NSAttributedString *)wPickerView:(WPickerView *)pickerView attributedTitleForRow:(NSInteger)row forComponent:(NSInteger)component;

- (UIView *)wpickerView:(WPickerView *)pickerView viewForRow:(NSInteger)row forComponent:(NSInteger)component reusingView:(UIView *)view;



@end

@protocol WPickerViewDelegate <NSObject>

// OK按钮
- (void)wPickerViewCompleteSelected:(WPickerView *)pickerView;

- (NSString *)wPickerView:(WPickerView *)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component;

- (void)wPickerView:(WPickerView *)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component;

- (void)whilePickViewDismiss;

@end
