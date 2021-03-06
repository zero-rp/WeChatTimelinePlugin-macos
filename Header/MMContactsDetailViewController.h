//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

#import "IContactMgrExt.h"
#import "MMViewerWindowDelegate.h"
#import "NSTextFieldDelegate.h"

@class MMFriendRequestData, MMOutlineButton, MMView, NSBox, NSData, NSImageView, NSMutableArray, NSScrollView, NSString, NSTextField, NSTextView, NSView, WCContactData;

__attribute__((visibility("hidden")))
@interface MMContactsDetailViewController : MMViewController <NSTextFieldDelegate, MMViewerWindowDelegate, IContactMgrExt>
{
    BOOL _friendAdded;
    int _addedHeight;
    int _diffHeight;
    int _currentDetailIndex;
    int _macKeyLabelWidth;
    NSScrollView *_scrollViewContainer;
    NSView *_detailContainerView;
    MMView *_placeHolderView;
    NSView *_contactDetailContainerView;
    NSTextField *_contactNameLabel;
    NSImageView *_sexIcon;
    NSImageView *_avatarImage;
    NSTextView *_descriptionTextView;
    NSView *_keyValueRow;
    NSView *_keyValueContainer;
    NSBox *_dividerLine;
    NSView *_greetingRow;
    NSTextField *_brandDescription;
    NSString *_originalRemark;
    NSTextField *_remarkInput;
    MMOutlineButton *_sendMsgButton;
    NSData *_kvRowPrototype;
    NSData *_kvGreetingRowPrototype;
    WCContactData *_currContactData;
    MMFriendRequestData *_currFriendRequestData;
    NSMutableArray *_keyLabelList;
    NSMutableArray *_valueLabelList;
    NSView *_groupChatContainerView;
    NSImageView *_groupChatAVatar;
    NSTextField *_groupChatNameLabel;
    MMOutlineButton *_removeGroupChatButton;
    NSView *_sendGroupMsgBox;
}

@property(nonatomic) __weak NSView *sendGroupMsgBox; // @synthesize sendGroupMsgBox=_sendGroupMsgBox;
@property(retain, nonatomic) MMOutlineButton *removeGroupChatButton; // @synthesize removeGroupChatButton=_removeGroupChatButton;
@property(nonatomic) __weak NSTextField *groupChatNameLabel; // @synthesize groupChatNameLabel=_groupChatNameLabel;
@property(nonatomic) __weak NSImageView *groupChatAVatar; // @synthesize groupChatAVatar=_groupChatAVatar;
@property(retain, nonatomic) NSView *groupChatContainerView; // @synthesize groupChatContainerView=_groupChatContainerView;
@property(retain, nonatomic) NSMutableArray *valueLabelList; // @synthesize valueLabelList=_valueLabelList;
@property(retain, nonatomic) NSMutableArray *keyLabelList; // @synthesize keyLabelList=_keyLabelList;
@property(nonatomic) int macKeyLabelWidth; // @synthesize macKeyLabelWidth=_macKeyLabelWidth;
@property(nonatomic) int currentDetailIndex; // @synthesize currentDetailIndex=_currentDetailIndex;
@property(nonatomic) int diffHeight; // @synthesize diffHeight=_diffHeight;
@property(nonatomic) BOOL friendAdded; // @synthesize friendAdded=_friendAdded;
@property(retain, nonatomic) MMFriendRequestData *currFriendRequestData; // @synthesize currFriendRequestData=_currFriendRequestData;
@property(retain, nonatomic) WCContactData *currContactData; // @synthesize currContactData=_currContactData;
@property(retain, nonatomic) NSData *kvGreetingRowPrototype; // @synthesize kvGreetingRowPrototype=_kvGreetingRowPrototype;
@property(retain, nonatomic) NSData *kvRowPrototype; // @synthesize kvRowPrototype=_kvRowPrototype;
@property(nonatomic) int addedHeight; // @synthesize addedHeight=_addedHeight;
@property(retain, nonatomic) MMOutlineButton *sendMsgButton; // @synthesize sendMsgButton=_sendMsgButton;
@property(retain, nonatomic) NSTextField *remarkInput; // @synthesize remarkInput=_remarkInput;
@property(retain, nonatomic) NSString *originalRemark; // @synthesize originalRemark=_originalRemark;
@property(retain, nonatomic) NSTextField *brandDescription; // @synthesize brandDescription=_brandDescription;
@property(retain, nonatomic) NSView *greetingRow; // @synthesize greetingRow=_greetingRow;
@property(retain, nonatomic) NSBox *dividerLine; // @synthesize dividerLine=_dividerLine;
@property(nonatomic) __weak NSView *keyValueContainer; // @synthesize keyValueContainer=_keyValueContainer;
@property(retain, nonatomic) NSView *keyValueRow; // @synthesize keyValueRow=_keyValueRow;
@property(retain, nonatomic) NSTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(nonatomic) __weak NSImageView *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(nonatomic) __weak NSImageView *sexIcon; // @synthesize sexIcon=_sexIcon;
@property(nonatomic) __weak NSTextField *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property __weak NSView *contactDetailContainerView; // @synthesize contactDetailContainerView=_contactDetailContainerView;
@property(retain, nonatomic) MMView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property(retain, nonatomic) NSView *detailContainerView; // @synthesize detailContainerView=_detailContainerView;
@property(nonatomic) __weak NSScrollView *scrollViewContainer; // @synthesize scrollViewContainer=_scrollViewContainer;
- (void).cxx_destruct;
- (void)handleAppFontSize;
- (void)onDeleteContacts:(id)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)onModifyUserImage:(id)arg1;
- (void)addTextButtonWithTitle:(id)arg1 action:(SEL)arg2 rect:(struct CGRect)arg3 verticalPos:(double)arg4 container:(id)arg5;
- (void)addRectButtonWithTitle:(id)arg1 action:(SEL)arg2 rect:(struct CGRect)arg3 container:(id)arg4;
- (void)createButtonWithTitle:(id)arg1 action:(SEL)arg2 rect:(struct CGRect)arg3;
- (void)setupGroupChatDetail:(id)arg1;
- (void)clearContactData:(id)arg1;
- (void)recvOAHistoryMsg:(id)arg1;
- (id)getOAHistoryRecordUrl:(id)arg1;
- (void)deleteGroupChat:(id)arg1;
- (void)acceptRequest:(id)arg1;
- (void)rejectRequest:(id)arg1;
- (void)sendMsg:(id)arg1;
- (struct CGRect)originScreenRectForAnimationForWindow:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)resetDetailContainerHeight;
- (void)addGreetingRow:(id)arg1;
- (id)_newRowViewWithKeyText:(id)arg1 valueText:(id)arg2;
- (void)addBrandDescription:(id)arg1;
- (void)addLine;
- (void)addRemark:(id)arg1 valueText:(id)arg2;
- (id)addRow:(id)arg1 valueText:(id)arg2;
- (void)adjustPanel;
- (void)resetPanel;
- (void)setupBrandContactDetail:(id)arg1;
- (void)setupFriendRequestDetail:(id)arg1;
- (void)setupContactDetail:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

