//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "SendLogCommandDelegate.h"

@class GUAlertView, SendLogCommand, UIProgressView;

@interface GmmLogSender : NSObject <SendLogCommandDelegate>
{
    id receiver;
    SEL callBack;
    SendLogCommand *sender;
    GUAlertView *progressAlert;
    UIProgressView *progressView;
    BOOL _sendQuietly;
}

@property(retain, nonatomic) id receiver; // @synthesize receiver;
- (id)getMarkFilePath;
- (void)dealloc;
- (void)handleSendLogCommandBackground;
- (void)handleSendLogCommandResume;
- (void)handleSendLogCommandOkCancel;
- (void)handleSendLogBackgroundComplete;
- (BOOL)checkIfNeedSendLonWhenStart;
- (BOOL)removeMarkFileWhenShutdown;
- (BOOL)addMarkFileWhenStartUp;
- (void)sendLogsQuietly;
- (void)sendLogs;
- (void)sendLogWithCallback:(SEL)arg1 target:(id)arg2;
- (id)init;

@end

