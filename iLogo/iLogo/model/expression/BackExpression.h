//
//  BackExpression.h
//  iLogo
//
//  Created by Yuhua Mai on 10/26/13.
//  Copyright (c) 2013 Yuhua Mai. All rights reserved.
//

#import "OneParameterExpression.h"

@interface BackExpression : OneParameterExpression

//- (id)initWithParameter:(NSArray*)commandList;
- (NSMutableArray*)evaluate:(TurtleCommand*)lastTurtleCommand;

@end
