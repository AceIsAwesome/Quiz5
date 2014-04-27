//
//  TaskManager.h
//  Quiz05
//
//  Created by Michael Vitone on 3/18/14.
//  Copyright (c) 2014 Michael Vitone. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Task.h"

@interface TaskManager : NSObject
{
    NSMutableArray *tasks;
}

- (void) sortTasks;
- (Task *) getTaskAtIndex:(NSInteger)index;

@end
