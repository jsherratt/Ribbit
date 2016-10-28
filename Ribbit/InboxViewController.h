//
//  InboxViewController.h
//  Ribbit
//
//  Copyright (c) 2013 Treehouse. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "User.h"
#import <AVFoundation/AVFoundation.h>
#import <AVKit/AVKit.h>

@class Message;

@interface InboxViewController : UITableViewController

//Solution - The right view controller is displayed on app launch
@property (nonatomic, strong) User *currentUser;

@property (nonatomic, strong) Message *selectedMessage;

//Solution - Added AVPlayer to replaced the deprecated MPMoviePlayerController API
@property (nonatomic, strong) AVPlayer *moviePlayer;

- (IBAction)logout:(id)sender;

@end
