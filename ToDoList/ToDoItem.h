//
//  ToDoItem.h
//  ToDoList
//
//  Created by 焜胡 on 15/9/2.
//  Copyright (c) 2015年 Kun Hu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
