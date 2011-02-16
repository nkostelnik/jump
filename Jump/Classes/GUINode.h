//
//  GUINode.h
//  Base Jump
//
//  Created by Nicholas Kostelnik on 09/02/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

#import "HealthNode.h"

@interface GUINode : CCNode {
  
  HealthNode* healthNode;
  CCLabelTTF *roundLabel;
  CCLabelTTF *leagueLabel;
  CCLabelTTF *cashLabel;
  
}

- (void) setHealth:(int)h;
- (void) setRound:(int)r;
- (void) setLeague:(int)l;
- (void) setCash:(int)c;

@end
