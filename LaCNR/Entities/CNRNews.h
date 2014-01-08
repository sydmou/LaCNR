//
//  CNRNews.h
//  LaCNR
//
//  Created by Marc Audefroy on 08/01/14.
//  Copyright (c) 2014 supinfo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class CNRCategory, CNRComment;

@interface CNRNews : NSManagedObject

@property (nonatomic, retain) NSString * content;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSString * identifier;
@property (nonatomic, retain) NSNumber * isRead;
@property (nonatomic, retain) NSString * link;
@property (nonatomic, retain) NSString * teaser;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSSet *categories;
@property (nonatomic, retain) NSSet *comments;
@end

@interface CNRNews (CoreDataGeneratedAccessors)

- (void)addCategoriesObject:(CNRCategory *)value;
- (void)removeCategoriesObject:(CNRCategory *)value;
- (void)addCategories:(NSSet *)values;
- (void)removeCategories:(NSSet *)values;

- (void)addCommentsObject:(CNRComment *)value;
- (void)removeCommentsObject:(CNRComment *)value;
- (void)addComments:(NSSet *)values;
- (void)removeComments:(NSSet *)values;

@end
