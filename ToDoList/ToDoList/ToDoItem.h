//
//  ToDoItem.h
//  ToDoList
//
//  Created by Enspirea LLC on 6/25/15.
//  Copyright (c) 2015 Enspirea LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
