//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NTFileAttributeModifier : NSObject
{
}

+ (BOOL)setPermissions:(unsigned long)arg1 desc:(id)arg2;
+ (BOOL)setStickyBit:(BOOL)arg1 desc:(id)arg2;
+ (BOOL)setGroup:(id)arg1 desc:(id)arg2;
+ (BOOL)setOwner:(id)arg1 desc:(id)arg2;
+ (BOOL)touch:(id)arg1;
+ (BOOL)touchAttributeModificationDate:(id)arg1;
+ (BOOL)setAttributeModificationDate:(id)arg1 desc:(id)arg2;
+ (BOOL)setModificationDate:(id)arg1 desc:(id)arg2;
+ (BOOL)setCreationDate:(id)arg1 desc:(id)arg2;
+ (BOOL)setLock:(BOOL)arg1 desc:(id)arg2;
+ (BOOL)setStationery:(BOOL)arg1 desc:(id)arg2;
+ (BOOL)setType:(unsigned long)arg1 desc:(id)arg2;
+ (BOOL)setCreator:(unsigned long)arg1 desc:(id)arg2;
+ (BOOL)setLabel:(int)arg1 desc:(id)arg2;
+ (BOOL)setFileInfo:(struct FileInfo *)arg1 desc:(id)arg2;
+ (BOOL)setComments:(id)arg1 desc:(id)arg2;
+ (BOOL)setInvisible:(BOOL)arg1 desc:(id)arg2;
+ (BOOL)setLength:(unsigned int)arg1 desc:(id)arg2;
+ (BOOL)setExtensionHidden:(BOOL)arg1 desc:(id)arg2;
+ (BOOL)setApplicationBinding:(id)arg1 forFile:(id)arg2;
+ (BOOL)setApplicationBinding:(id)arg1 forFilesLike:(id)arg2;
+ (BOOL)setHasBundle:(BOOL)arg1 desc:(id)arg2;
+ (BOOL)setAlias:(BOOL)arg1 desc:(id)arg2;
+ (BOOL)setFinderPosition:(struct _NSPoint)arg1 desc:(id)arg2;

@end
