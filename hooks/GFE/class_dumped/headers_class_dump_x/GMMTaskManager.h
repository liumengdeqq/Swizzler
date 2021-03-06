/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@interface GMMTaskManager : _ABAddressBookAddRecord
{
}

+ (id)date:(id)fp8 byAdding:(int)fp12;
+ (BOOL)isDateTheFollowingWeek:(id)fp8;
+ (BOOL)isDateTomorrow:(id)fp8;
+ (BOOL)isDateToday:(id)fp8;
+ (id)formatDueDate:(id)fp8;
+ (id)allScheduledReminders;
+ (void)removeAllScheduledReminders;
+ (void)removeLocalNotificationForTask:(id)fp8;
+ (void)removeReminderForTaskRec:(unsigned short)fp8;
+ (BOOL)scheduleLocalNotificationForTask:(id)fp8;
+ (void)rescheduleReminderForTaskRec:(unsigned short)fp8;
+ (void)editReminderForTaskRec:(unsigned short)fp8;
+ (void)scheduleReminderForTaskRec:(unsigned short)fp8;
+ (void)rescheduleReminders;
+ (void)goToTask;
+ (id)reminderTextForTask:(id)fp8;
+ (void)showModallyInTaskVCTaskForRecordNumber:(int)fp8;
+ (void)presentScheduledReminderForRecordNumber:(int)fp8;
+ (void)presentScheduledReminderForRecordNumber:(int)fp8 withAlert:(BOOL)fp12;
+ (void)presentScheduledReminderForLocalNotification:(id)fp8;
+ (BOOL)isShowReminderIfLocked;
+ (id)allTasks;
+ (BOOL)deleteTaskWithRecNumber:(unsigned short)fp8;
+ (BOOL)syncTasks;
+ (id)createTask;
+ (void)setupDefaultPriorityForTask:(id)fp8;

@end

