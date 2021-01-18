//
//  UIImageView+ZY_setImage.h
//  LMJS
//
//  Created by Huayra on 15/7/28.
//  Copyright (c) 2015年 Huayra. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (ZY_setImage)

- (void)zy_setCircleHeadImage:(NSString *)headImageName placeholderImage:(NSString *)placeholderImage;
- (void)zy_setImageWithPicName:(NSString *)imgName isNarrow:(BOOL)isNarrow;
- (void)zy_setImageWithPicName:(NSString *)imgName complitedSuccess:(void(^)(UIImage *image))success complitedFail:(void(^)())fail;


@end
