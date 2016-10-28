//
//  InboxViewController.h
//  Ribbit
//
//  Copyright (c) 2013 Treehouse. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import "User.h"

@class Message;

@interface InboxViewController : UITableViewController

//Solution so the right view controller is displayed on app launch
@property (nonatomic, strong) User *currentUser;

@property (nonatomic, strong) Message *selectedMessage;
@property (nonatomic, strong) MPMoviePlayerController *moviePlayer;

- (IBAction)logout:(id)sender;

@end
