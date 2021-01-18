//
//  CustomSetSortView.h
//  Wherecom
//
//  Created by umeox on 14-11-7.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CustomSetSortView;

@protocol CustomSetSortViewDelegate <NSObject>

- (void)setSortSuccess:(CustomSetSortView *)view andSort:(NSInteger)sort;
- (void)deleteSortSuccess:(CustomSetSortView*)view;
@end

@interface CustomSetSortView : UIView {
    UIControl *_overlayView;
}
//@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
//@property (weak, nonatomic) IBOutlet UILabel *mobileLabel;
//@property (weak, nonatomic) IBOutlet UITableView *tableView;


@property (retain, nonatomic) SOSNumberBean *sosBean;

@property (weak, nonatomic) IBOutlet UIImageView *tipImg;

@property (weak, nonatomic) IBOutlet UILabel *upLabel;
@property (weak, nonatomic) IBOutlet UIButton *leftButton;
- (IBAction)leftBtnClick:(UIButton *)sender;

@property (weak, nonatomic) IBOutlet UILabel *downLabel;
@property (weak, nonatomic) IBOutlet UIButton *rightButton;
- (IBAction)rightBtnClick:(UIButton *)sender;



@property (assign, nonatomic) id <CustomSetSortViewDelegate>delegate;
- (void)show;

- (void)dismiss;

@end
