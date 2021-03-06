/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@interface SBBookmarksExporter : _ABAddressBookAddRecord
{
}

+ (id)exportToJSONFromRecords:(const struct vector<ASBBookmarkRecord *, std::allocator<ASBBookmarkRecord *>> *)fp8;
+ (id)exportToJSON;
+ (id)JSONFromBookmarks:(id)fp8 andHistory:(id)fp12;
+ (id)historyFromRecords:(const struct vector<ASBBookmarkRecord *, std::allocator<ASBBookmarkRecord *>> *)fp8;
+ (id)bookmarksFromRecords:(const struct vector<ASBBookmarkRecord *, std::allocator<ASBBookmarkRecord *>> *)fp8;
+ (id)objectFromBookmarks:(id)fp8 andHistory:(id)fp12;
+ (id)fetchHistoryFromDB;
+ (id)fetchBookmarksFromDB;

@end

