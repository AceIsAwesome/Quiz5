//
//  Task.h
//  Quiz05
//
//  Created by Michael Vitone on 3/18/14.
//  Copyright (c) 2014 Michael Vitone. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) CGFloat urgency;
@property (nonatomic) NSDate *dueDate;

@end
