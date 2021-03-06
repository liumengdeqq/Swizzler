/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSMutableArray;

@interface SBTabHistoryManager : _ABAddressBookAddRecord
{
    NSMutableArray *_backForwardHistory;
    int _indexInBackForwardHistory;
}

- (void)setBackForwardHistory:(id)fp8;
- (id)backForwardHistory;
- (void)dumpBackForwardHistory;
- (void)undoLastBackForwardHistory;
- (id)currentBackForwardHistoryItem;
- (id)forwardInBackForwardHistory;
- (id)backInBackForwardHistory;
- (id)peekAtForwardInBackForwardHistory;
- (id)peekAtBackInBackForwardHistory;
- (void)updateBackForwardHistoryWithUrlText:(id)fp8 pageTitle:(id)fp12;
- (id)appendBackForwardHistoryWithUrlText:(id)fp8 pageTitle:(id)fp12;
- (void)onRedirectionFromUrlStr:(id)fp8 toUrlStr:(id)fp12;
- (BOOL)canAddBackForwardHistoryForTheUrl:(id)fp8;
- (BOOL)canGoForwardInBackForwardHistory;
- (BOOL)canGoBackInBackForwardHistory;
- (void)dealloc;
- (id)init;

@end

