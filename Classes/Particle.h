//
//  Particle.h
//  SpringParticles
//
//  Created by Aitor Fernández on 21/02/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

#import "Utils.h"


@interface Particle : CCNode
{
  CGPoint mtPos;
  CGPoint mtVel;
  CGPoint mtAcc;
  
  CGFloat mtDamping;
  
  CCAlphaSprite *mtSprite;
  
  BOOL mtIsFixed;
  BOOL mtIsSpring;
}

// Position
@property (readwrite) CGPoint pos;

@property (readwrite) BOOL fixed;
@property (readwrite) BOOL spring;


+ (id) particleWithPositionAndVelocity: (CGPoint)aPos vel: (CGPoint)aVel;
- (id) initWithPositionAndVelocity: (CGPoint)aPos vel: (CGPoint)aVel;

- (void) resetForce;

- (void) addDampingForce;
- (void) addForce: (CGPoint)aForce;

- (void) addRepulsionForce: (Particle *)apParticle radius: (CGFloat)aRadius scale: (CGFloat)aScale;

- (void) update;

@end
