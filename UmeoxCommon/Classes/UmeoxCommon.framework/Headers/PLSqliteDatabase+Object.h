//
//  PLSqliteDatabase+Object.h
//  Wherecom
//
//  Created by Umeox_Wherecom on 15/6/16.
//  Copyright (c) 2015年 umeox. All rights reserved.
//

#import "PLSqliteDatabase.h"

#define FMDB_ID_COLUMN @"_id"
#define DEFAULT_DB_NAME @"Capsule.db"

@protocol DBObject <NSObject>
@required
+(NSArray*)requestedColumns;
+(NSDictionary*)columnExtras;
+(BOOL)isBlobColumn:(NSString*)name;
@end


@interface PLSqliteDatabase (Object)
#pragma mark -- 打开数据库
+(PLSqliteDatabase*)openDefualtDatabase;
+(PLSqliteDatabase*)openDatabaseWithName:(NSString*)dbName;
#pragma mark -- 增删改查
+(BOOL)insertClass:(Class)clazz values:(NSMutableDictionary*)dict db:(NSString*)dbName;
+(BOOL)updateClass:(Class)clazz values:(NSMutableDictionary*)dict where:(NSString*)selection whereArgs:(NSArray*)wheraArgs db:(NSString*)dbName;
+(NSArray*)queryClass:(Class)clazz selection:(NSString*)slection where:(NSString*)selection whereArgs:(NSArray*)wheraArgs orderBy:(NSString*)orderBy db:(NSString*)dbName;
//+(NSArray*)rawQueryClass:(Class)clazz selection:(NSString*)slection where:(NSString*)selection whereArgs:(NSArray*)wheraArgs orderBy:(NSString*)orderBy db:(NSString*)dbName;
+(BOOL)deleteClass:(Class)clazz where:(NSString*)selection whereArags:(NSArray*)args db:(NSString*)dbName;
#pragma mark--简化的增删改查方法，使用默认数据库名
+(BOOL)insertClass:(Class)clazz values:(NSMutableDictionary*)dict;
+(BOOL)updateClass:(Class)clazz values:(NSMutableDictionary*)dict where:(NSString*)selection whereArgs:(NSArray*)wheraArgs;
+(NSArray*)queryClass:(Class)clazz where:(NSString*)selection whereArgs:(NSArray*)wheraArgs orderBy:(NSString*)orderBy;
+(BOOL)deleteClass:(Class)clazz where:(NSString*)selection whereArags:(NSArray*)args;
#pragma mark--简化的存取
+(NSArray*)queryAllClass:(Class)clazz orderBy:(NSString*)orderBy db:(NSString*)dbName;
+(NSArray*)queryAllClass:(Class)clazz;
+(BOOL)saveOrUpdateObject:(id)obj db:(NSString*)dbName;
+(BOOL)saveOrUpdateObject:(id)obj;
+(BOOL)dropTableByClass:(Class)clazz db:(NSString*)dbName;
+(BOOL)saveOrUpdateArray:(NSArray *)array db:(NSString *)dbName;
+(BOOL)saveOrUpdateArray:(NSArray *)array ;


#pragma mark--相关工具方法
+(NSString*)sqlCreateTable:(Class)clazz;
+(NSString*)tableName:(Class)clazz;
+(id)object:(Class)clazz fromResultSet:(id<PLResultSet>)set;
+(NSMutableDictionary *)valuesFrom:(id)obj;
+(NSMutableDictionary*)propertyNameAndType:(Class)clazz;
+(NSString*)descriptionObj:(id)obj;
#pragma mark -- 数据库升级工具
+(void)versionUpdateClass:(Class)clazz version:(int)version db:(NSString*)dbName;
@end
