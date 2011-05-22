//
//  SetupAccountViewController.h
//  Consumo-iOS
//
//  Created by Felipe Kellermann on 1/4/11.
//  Copyright 2011 Nyvra Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"

@protocol SetupAccountDelegate

@optional

- (void)didCreateAccount:(NSDictionary *)account;
- (void)didChangeAccount:(NSDictionary *)account;
- (void)didCancelAccountSetup;

@end

@interface SetupAccountViewController : BaseViewController <UIActionSheetDelegate, UITextFieldDelegate>
{
	UIBarButtonItem				*buttonSave;
	UIBarButtonItem				*buttonCancel;
	UITextField					*textUsername;
	UITextField					*textPassword;
	UITextField					*textLabel;
	UISwitch					*switchRefresh;
	
	NSDictionary				*services;
	NSString					*serviceCurrent;
	NSDictionary				*account;

	id <SetupAccountDelegate>	delegate;
}

- (id)initWithAccount:(NSDictionary *)anAccount;
- (NSDictionary *)serviceForName:(NSString *)service;
- (NSDictionary *)service;

@property (nonatomic, retain) id<SetupAccountDelegate> delegate;

@end