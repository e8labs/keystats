//
//  YVKeyLogger.h
//  Keystats
//
//  Created by Yoshiki Vázquez Baeza on 10/27/13.
//  Basede in code from J. Koivisto S.A.C. found in OSXKeyLogger
//  https://code.google.com/p/osxkeylogger
//
//  Copyright (c) 2013 Yoshiki Vázquez Baeza. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void __block (^YVBKeyPressed)(NSString *string, long long keyCode);

@interface YVBKeyLogger : NSObject{
	YVBKeyPressed keyPressedHandler;
	BOOL isLogging;
}

-(id)init;
-(id)initWithKeyPressedHandler:(YVBKeyPressed)handler;

-(void)startLogging;
-(void)stopLogging;

@property (nonatomic, strong) YVBKeyPressed keyPressedHandler;
@property (nonatomic, readonly) BOOL isLogging;

@end