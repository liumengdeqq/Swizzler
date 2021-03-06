//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewController.h"

@class GTArrowView, NSString, UIActivityIndicatorView, UILabel, UITableView, UIView;

@interface GTPullToRefreshTVC : UITableViewController
{
    BOOL _isMultiSelectMode;
    BOOL _isEnabled;
    UILabel *_actionLabel;
    UIView *_refreshHeaderView;
    float _refreshHeaderHeight;
    UILabel *_upperMidLabel;
    UILabel *_lowerMidLabel;
    UILabel *_upperLabel;
    UILabel *_midLabel;
    UILabel *_lowerLabel;
    UIActivityIndicatorView *_activityIndicator;
    GTArrowView *_gtArrowView;
    NSString *_textPull;
    NSString *_textRelease;
    NSString *_textLoading;
    float _refreshLabelWidth;
    UITableView *currentTableView;
}

@property(nonatomic) UITableView *currentTableView; // @synthesize currentTableView;
@property(retain, nonatomic) UIView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) BOOL isMultiSelectMode; // @synthesize isMultiSelectMode=_isMultiSelectMode;
@property(nonatomic) float refreshLabelWidth; // @synthesize refreshLabelWidth=_refreshLabelWidth;
@property(retain, nonatomic) NSString *textLoading; // @synthesize textLoading=_textLoading;
@property(retain, nonatomic) NSString *textRelease; // @synthesize textRelease=_textRelease;
@property(retain, nonatomic) NSString *textPull; // @synthesize textPull=_textPull;
@property(retain, nonatomic) GTArrowView *gtArrowView; // @synthesize gtArrowView=_gtArrowView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *lowerLabel; // @synthesize lowerLabel=_lowerLabel;
@property(retain, nonatomic) UILabel *midLabel; // @synthesize midLabel=_midLabel;
@property(retain, nonatomic) UILabel *upperLabel; // @synthesize upperLabel=_upperLabel;
@property(retain, nonatomic) UILabel *lowerMidLabel; // @synthesize lowerMidLabel=_lowerMidLabel;
@property(retain, nonatomic) UILabel *upperMidLabel; // @synthesize upperMidLabel=_upperMidLabel;
@property(nonatomic) float refreshHeaderHeight; // @synthesize refreshHeaderHeight=_refreshHeaderHeight;
- (void)viewDidUnload;
- (void)startLoading;
- (void)stopLoading;
- (void)refreshHeaderWasHidden;
- (void)hidePullToRefreshHeader;
- (void)showPullToRefreshHeader;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)releaseActionNotTriggered;
- (void)releaseActionTriggered;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updatePullText;
- (void)updateReleaseText;
- (BOOL)canUpdateArrow;
- (BOOL)canUpdateContent;
- (void)prepareHeaderForEditingMode:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isEntireRefreshHeaderCurrentlyShownToUser;
- (BOOL)isPullToRefreshHeaderActive;
- (void)addPullToRefreshHeaderToCurrentTableView;
- (void)setupStrings;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initGTPullToRefreshTVC;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (void)logStringFromGTPullToRefresh:(id)arg1;
- (void)logAndExecuteAssertForUnexpectedValue:(id)arg1 inFunction:(id)arg2;

@end

