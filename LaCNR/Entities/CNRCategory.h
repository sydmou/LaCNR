//
//  CNRCategory.h
//  LaCNR
//
//  Created by Marc Audefroy on 08/01/14.
//  Copyright (c) 2014 supinfo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class CNRNews;

@interface CNRCategory : NSManagedObject

@property (nonatomic, retain) NSString * identifier;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *news;
@end

@interface CNRCategory (CoreDataGeneratedAccessors)

- (void)addNewsObject:(CNRNews *)value;
- (void)removeNewsObject:(CNRNews *)value;
- (void)addNews:(NSSet *)values;
- (void)removeNews:(NSSet *)values;

@end
