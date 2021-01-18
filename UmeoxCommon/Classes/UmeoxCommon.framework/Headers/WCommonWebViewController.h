//
//  CapsuleWebViewController.h
//  Capsule
//
//  Created by saluman on 14-7-11.
//  Copyright (c) 2014年 umeox. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface WCommonWebViewController : UIViewController
@property (nonatomic, strong) WKWebView *webView;
@property (nonatomic) int selectType;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *titleName;
@property (nonatomic, strong) HolderBean *babyBean;
@end
