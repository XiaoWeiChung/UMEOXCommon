//
//  Tooles.h
//  huoche
//
//  Created by kan xu on 11-1-22.
//  Copyright 2011 paduu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Tooles : NSObject {
    
}
+ (NSString *)Date2StrV:(NSDate *)indate;
+ (NSString *)Date2Str:(NSDate *)indate;
+ (void)MsgBox:(NSString *)msg;
+ (NSDateComponents *)DateInfo:(NSDate *)indate;
+ (void)OpenUrl:(NSString *)inUrl;
+ (void)showHUD:(NSString *)msg;
+ (void)showHUD:(NSString *)title andMessage:(NSString*)msg;
+ (void)removeHUD;

@end
