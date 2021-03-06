//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GDSQLEntity, NSPropertyDescription, NSString;

@interface GDSQLProperty : NSObject
{
    GDSQLEntity *_entity;
    NSPropertyDescription *_propertyDescription;
    NSString *_name;
    NSString *_columnName;
    unsigned int _type;
    BOOL _fullColumnRequired;
    NSString *_ownedByEntityName;
}

+ (id)sqlPropertyWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (BOOL)isManyToMany;
- (BOOL)isToOne;
- (BOOL)isToMany;
- (id)propertyDescription;
- (id)defaultValue;
- (unsigned int)type;
- (BOOL)isRelationship;
- (BOOL)isColumn;
- (BOOL)isAttribute;
- (id)fullColumnName;
- (id)entityOwnerName;
- (void)setEntityOwnerName:(id)arg1;
- (id)columnName;
- (id)name;
- (BOOL)isFullColumnRequired;
- (void)fullColumnRequired;
- (id)entity;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;

@end

