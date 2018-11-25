//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMDraggableWindowController.h"

#import "AccountServiceExt.h"

@class NSString, NSTextField, NSVisualEffectView;

__attribute__((visibility("hidden")))
@interface WhatsNewWindowController : MMDraggableWindowController <AccountServiceExt>
{
    NSTextField *_versionLabel;
    NSTextField *_descriptionLabel;
    NSVisualEffectView *_visualEffectView;
}

@property __weak NSVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property __weak NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property __weak NSTextField *versionLabel; // @synthesize versionLabel=_versionLabel;
- (void).cxx_destruct;
- (void)onUserLogout;
- (void)closeWindow:(id)arg1;
- (void)setupDesction;
- (void)dealloc;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
