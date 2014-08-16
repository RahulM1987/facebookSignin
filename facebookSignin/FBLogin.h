//
//  FBLogin.h
//  facebookSignin
//
//  Created by Rahul on 03/08/14.
//  Copyright (c) 2014 Test. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@interface FBLogin : UIViewController <FBLoginViewDelegate>

@property (strong, nonatomic) IBOutlet UIButton *login;
@property (weak, nonatomic) IBOutlet FBLoginView *loginView;


@property (strong, nonatomic) IBOutlet FBProfilePictureView *profilePictureView;
@property (strong, nonatomic) IBOutlet UILabel *nameLabel;
@property (strong, nonatomic) IBOutlet UILabel *statusLabel;


@end
