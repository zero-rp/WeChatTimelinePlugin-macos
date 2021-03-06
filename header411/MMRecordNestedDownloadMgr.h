//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt.h"
#import "MMService.h"

@class CdnRecordMediaInfo, FavoritesItemDataField, NSMutableArray, NSString;

@interface MMRecordNestedDownloadMgr : MMService <ICdnComMgrExt, MMService>
{
    FavoritesItemDataField *_m_curDownDataField;
    FavoritesItemDataField *_m_waitDownDataField;
    NSMutableArray *_m_arrCDNDownloadInfo;
    CdnRecordMediaInfo *_m_curDownMediaInfo;
}

@property(retain, nonatomic) CdnRecordMediaInfo *m_curDownMediaInfo; // @synthesize m_curDownMediaInfo=_m_curDownMediaInfo;
@property(retain, nonatomic) NSMutableArray *m_arrCDNDownloadInfo; // @synthesize m_arrCDNDownloadInfo=_m_arrCDNDownloadInfo;
@property(retain, nonatomic) FavoritesItemDataField *m_waitDownDataField; // @synthesize m_waitDownDataField=_m_waitDownDataField;
@property(retain, nonatomic) FavoritesItemDataField *m_curDownDataField; // @synthesize m_curDownDataField=_m_curDownDataField;
- (void).cxx_destruct;
- (void)OnCdnDownloadFinished:(id)arg1;
- (void)DownLoadOK;
- (void)DownloadFail:(int)arg1 Expired:(BOOL)arg2;
- (void)CheckDownloadRecordData;
- (void)StartDownloadCurDataField;
- (void)StartDownloadByDataField:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

