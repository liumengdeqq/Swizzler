//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GDSecureStoragePwdMgr : NSObject
{
}

+ (int)checkPasswordStrength:(id)arg1;
+ (BOOL)changePassword:(id)arg1 to:(id)arg2;
+ (BOOL)validatePassword:(id)arg1;
+ (BOOL)clearInMemoryPassword;
+ (BOOL)isPwdSet;
+ (BOOL)clearPassword:(id)arg1;
+ (BOOL)setPassword:(id)arg1;

@end
