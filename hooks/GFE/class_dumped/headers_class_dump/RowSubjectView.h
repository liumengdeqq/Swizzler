//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "RowView.h"

@class GUAttachmentButton, GUSubjectView, NSString, UIButton, UIImage, UILabel, UIView;

@interface RowSubjectView : RowView
{
    GUSubjectView *_subjectTextView;
    GUAttachmentButton *_attachmentButton;
    UIButton *_showInCalendarButton;
    UIImage *_showInCalendarButtonPortraitImage;
    UIImage *_showInCalendarButtonLandscapeImage;
    UIButton *_calendarAcceptButton;
    UIButton *_calendarTentativeButton;
    UIButton *_calendarDeclineButton;
    UIView *_buttonsContainer;
    UILabel *_responseMessageTextLabel;
    UIView *_bannerForDelegate;
    UILabel *_LabelForDelegageBanner;
    BOOL _isCalendarEmail;
    BOOL _isDelegatedCalendarEmail;
    struct CGSize _layoutedSize;
    float _verticalMargin;
    float _horizontalMargin;
    int _interfaceOrientation;
    int _conflicts;
    BOOL _isShowInCalendarButtonVisible;
    BOOL _areResponseButtonsVisible;
    BOOL _isResponseMessageVisible;
    NSString *_responseMessageText;
    NSString *_subject;
    unsigned int _attachmentsCount;
    NSString *_receivedDate;
    NSString *textInLabelForDelegageBanner;
}

@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(retain, nonatomic) NSString *receivedDate; // @synthesize receivedDate=_receivedDate;
@property(nonatomic) unsigned int attachmentsCount; // @synthesize attachmentsCount=_attachmentsCount;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *textInLabelForDelegageBanner; // @synthesize textInLabelForDelegageBanner;
@property(retain, nonatomic) NSString *responseMessageText; // @synthesize responseMessageText=_responseMessageText;
@property(nonatomic) BOOL isResponseMessageVisible; // @synthesize isResponseMessageVisible=_isResponseMessageVisible;
@property(nonatomic) BOOL areResponseButtonsVisible; // @synthesize areResponseButtonsVisible=_areResponseButtonsVisible;
@property(nonatomic) BOOL isShowInCalendarButtonVisible; // @synthesize isShowInCalendarButtonVisible=_isShowInCalendarButtonVisible;
@property(nonatomic) int conflicts; // @synthesize conflicts=_conflicts;
@property(readonly, nonatomic) UIButton *calendarDeclineButton; // @synthesize calendarDeclineButton=_calendarDeclineButton;
@property(readonly, nonatomic) UIButton *calendarTentativeButton; // @synthesize calendarTentativeButton=_calendarTentativeButton;
@property(readonly, nonatomic) UIButton *calendarAcceptButton; // @synthesize calendarAcceptButton=_calendarAcceptButton;
@property(readonly, nonatomic) UILabel *LabelForDelegageBanner; // @synthesize LabelForDelegageBanner=_LabelForDelegageBanner;
@property(readonly, nonatomic) UIView *bannerForDelegate; // @synthesize bannerForDelegate=_bannerForDelegate;
@property(readonly, nonatomic) UIButton *showInCalendarButton; // @synthesize showInCalendarButton=_showInCalendarButton;
@property(readonly, nonatomic) GUAttachmentButton *attachmentButton; // @synthesize attachmentButton=_attachmentButton;
- (id).cxx_construct;
- (void)layoutSubviews_old;
- (void)setEmail_old:(id)arg1;
- (void)createCalendarResponseButtons;
- (void)createShowInCalendarButton:(int)arg1;
- (void)createCalendarButtonsContainer:(int)arg1;
- (void)setFrameForBanner;
- (float)setUpAttachmentView;
- (id)newResponseMessageTextLabelForText:(id)arg1;
- (id)newBannerForDelegateWith:(struct CGRect)arg1;
- (id)newCalendarButton;
- (void)updateAttachmentView;
- (void)updateSubjectTextView;
- (void)layoutSubviews;
- (void)setEmail:(id)arg1;
- (void)recalculateInsets;
- (void)setContentSizeCategory:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

