//
//  AlertTypeTableViewCell.h
//  Wherecom
//
//  Created by umeox on 14-10-13.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <UIKit/UIKit.h>
@class AlertTypeTableViewCell;
@protocol AlertTypeTableViewCelleDelegate <NSObject>

- (void)alertTypeValueChangeSuccessWithOn:(BOOL)isOn andCell:(AlertTypeTableViewCell*)cell;

@end

@interface AlertTypeTableViewCell : UITableViewCell

@property (assign, nonatomic) id <AlertTypeTableViewCelleDelegate>delegate;
@property (weak, nonatomic) IBOutlet UISwitch *alertTypeSwitch;
@property (weak, nonatomic) IBOutlet UILabel *alertTypeTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *alertTypeDetailLabel;

@end
