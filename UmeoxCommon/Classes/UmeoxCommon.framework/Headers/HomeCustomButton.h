//
//  HomeCustomButton.h
//  Capsule
//
//  Created by saluman on 14-7-12.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeCustomButton : UIButton
{
    UIImage *_image;
    UIImage *_selectImage;
    UIImage *_hightedImage;
}

@property (nonatomic,retain)UIImageView *titleImage;
@property (nonatomic,retain)UILabel *title;

- (void)setTitleText:(NSString*)title;
- (void)setTitleLabel:(NSString *)title andImageFrame:(CGRect)rect;
- (void)setaSelected:(BOOL)selected;
- (id)initWithFrame:(CGRect)frame andImage:(NSString*)imageName andSelected:(NSString*)selectImage andImageSize:(CGRect)imageFrame andTitle:(NSString*)title;

@end
