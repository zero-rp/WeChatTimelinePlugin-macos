//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MMTableDataSource, MessageData, NSArray;

@interface MessageCollectionItem : NSObject <NSCopying>
{
    BOOL _isSearchingResult;
    BOOL _isChosen;
    unsigned int _messageCreateTime;
    MMTableDataSource *_tableDataSource;
    MessageData *_message;
    NSArray *_hightLightWords;
}

@property(nonatomic) BOOL isChosen; // @synthesize isChosen=_isChosen;
@property(retain, nonatomic) NSArray *hightLightWords; // @synthesize hightLightWords=_hightLightWords;
@property(nonatomic) BOOL isSearchingResult; // @synthesize isSearchingResult=_isSearchingResult;
@property(nonatomic) unsigned int messageCreateTime; // @synthesize messageCreateTime=_messageCreateTime;
@property(retain, nonatomic) MessageData *message; // @synthesize message=_message;
@property(nonatomic) __weak MMTableDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessageData:(id)arg1;

@end

