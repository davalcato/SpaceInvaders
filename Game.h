//
//  Game.h
//  Space Invaders
//
//  Created by Daval Cato on 12/12/13.
//  Copyright (c) 2013 Daval Cato. All rights reserved.
//

#import <UIKit/UIKit.h>

int ShipMovement;
int BulletMovement;
int BulletsOnScreen;
int MonstersKilled;

BOOL Monster1Hit;
BOOL Monster2Hit;
BOOL Monster3Hit;
BOOL Monster4Hit;
BOOL Monster5Hit;
BOOL Monster6Hit;
BOOL Monster7Hit;
BOOL Monster8Hit;
BOOL Monster9Hit;
BOOL Monster10Hit;
int MonsterMovement;
int MonsterShooterStart;


@interface Game : UIViewController
{
    IBOutlet UIButton *Start;
    IBOutlet UIButton *Exit;
    IBOutlet UIButton *Shoot;
    
    
    IBOutlet UIImageView *Ship;
    IBOutlet UIImageView *Bullet;
    
    IBOutlet UIImageView *Monster1;
    IBOutlet UIImageView *Monster2;
    IBOutlet UIImageView *Monster3;
    IBOutlet UIImageView *Monster4;
    IBOutlet UIImageView *Monster5;
    IBOutlet UIImageView *Monster6;
    IBOutlet UIImageView *Monster7;
    IBOutlet UIImageView *Monster8;
    IBOutlet UIImageView *Monster9;
    IBOutlet UIImageView *Monster10;
    
    
    IBOutlet UIImageView *MonsterBullet;
    IBOutlet UIImageView *MonsterBullet2;
    IBOutlet UIImageView *MonsterBullet3;
    
    
    IBOutlet UILabel *WinOrLose;
    
    
    NSTimer *MovementTimer;
    
}

-(IBAction)Start:(id)sender;

-(IBAction)Shoot:(id)sender;
-(void)Movement;
-(void)Collision;
-(void)MonstersKilled;
-(void)MonsterMoveDown;
-(void)GameOver;



@end
