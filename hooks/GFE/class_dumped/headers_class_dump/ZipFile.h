//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "ArchiveFile.h"

@class NSMutableDictionary;

@interface ZipFile : ArchiveFile
{
    NSMutableDictionary *zipEntriesMap;
}

- (void)dealloc;
- (id)initWithTOC:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)findEntry:(id)arg1;
- (BOOL)isInvisible:(id)arg1;
- (void)loadZipEntries;

@end

