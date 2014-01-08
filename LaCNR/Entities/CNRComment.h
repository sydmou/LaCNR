//
//  CNRComment.h
//  LaCNR
//
//  Created by Marc Audefroy on 08/01/14.
//  Copyright (c) 2014 supinfo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class CNRNews;

@interface CNRComment : NSManagedObject

@property (nonatomic, retain) NSString * content;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSString * identifier;
@property (nonatomic, retain) NSString * summary;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) CNRNews *news;

@end
