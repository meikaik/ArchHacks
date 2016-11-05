//
//  ViewController.h
//  ArchHacks
//
//  Created by Mei Kai Koh on 5/11/16.
//  Copyright © 2016 UW. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *label;
- (IBAction)buttonclicked:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *AddMealPage;
@property (weak, nonatomic) IBOutlet UIButton *SettingsPage;

@end

