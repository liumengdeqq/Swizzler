//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface GDAlertProxyLayer : NSObject
{
    NSMutableArray *shownAppAlertViewQ;
    BOOL isQueuingAlerts;
}

+ (id)sharedInstance;
+ (void)initializeGDAlertProxyLayer;
@property(nonatomic) BOOL isQueuingAlerts; // @synthesize isQueuingAlerts;
@property(retain, nonatomic) NSMutableArray *shownAppAlertViewQ; // @synthesize shownAppAlertViewQ;
- (void)dismissAppAlerts;
- (void)showAlertsInQ;
- (void)triggerAlertTakeover;
- (void)triggerAlertRelinquish;
- (void)qAlert:(id)arg1;

@end

