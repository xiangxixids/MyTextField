//
//  ViewController.h
//  MyTextField
//
//  Created by xiangxixids on 16/1/11.
//  Copyright © 2016年 xiangxixids. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *userNameTextField;
@property (weak, nonatomic) IBOutlet UITextField *passwordTextField;


@end

