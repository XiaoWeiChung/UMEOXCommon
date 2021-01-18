//
//  myView.h
//  9.8
//
//  Created by Umeox_Wherecom on 15/10/14.
//  Copyright (c) 2015年 sam. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol BtnDelegate <NSObject>
- (void)OkBtnClick;
- (void)CancelBtnClick;
- (void)FromAddressBookClick;
@end
@interface myView : UIView
@property (assign ,nonatomic) id<BtnDelegate>delegate;
@property (nonatomic ,copy) void (^block)();
@property (nonatomic ,copy) void (^BookBlock)();
@property (weak, nonatomic) IBOutlet UITextField *MyTextFiled;
@property (weak, nonatomic) IBOutlet UILabel *TipsLabel;
@property (weak, nonatomic) IBOutlet UIButton *AddressBook;
- (IBAction)FromAddressBook:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *okBtn;
@property (weak, nonatomic) IBOutlet UIButton *cancelBtn;
- (IBAction)ok:(id)sender;
- (IBAction)cancel:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
- (void)ViewShow;
- (void)ViewDismiss;
@end
