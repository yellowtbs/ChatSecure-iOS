//
//  OTRLoginViewController.h
//  Off the Record
//
//  Created by Chris Ballinger on 8/12/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OTRBuddyListViewController.h"
#import "MBProgressHUD.h"

@interface OTRLoginViewController : UIViewController <UITextFieldDelegate, MBProgressHUDDelegate> {
    UITextField *usernameTextField;
    UITextField *passwordTextField;
    
    OTRBuddyListViewController *buddyController;
    MBProgressHUD *HUD;
}

@property (retain, nonatomic) IBOutlet UITextField *usernameTextField;
@property (retain, nonatomic) IBOutlet UITextField *passwordTextField;
@property (nonatomic, retain) OTRBuddyListViewController *buddyController;

- (IBAction)loginPressed:(id)sender;

@end