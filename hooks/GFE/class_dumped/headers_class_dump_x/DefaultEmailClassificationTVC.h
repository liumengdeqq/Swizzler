/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TableWithSelectableItemsViewController.h"

@class NSMutableArray;

@interface DefaultEmailClassificationTVC : TableWithSelectableItemsViewController
{
    int selectedItemNum;
    NSMutableArray *items;
}

- (void)setItems:(id)fp8;
- (id)items;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)saveClassification;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (id)initWithStyle:(int)fp8;
- (id)getDefaultAutomationScreenName;

@end

