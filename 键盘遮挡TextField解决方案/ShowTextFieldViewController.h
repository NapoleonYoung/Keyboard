//
//  ShowTextFieldViewController.h
//  TCPAssistant
//
//  Created by NapoleonYoung on 16/3/25.
//  Copyright © 2016年 DoubleWood. All rights reserved.
//  需要将TextField的Tag设为非零的值
//  在子类中，需要设定self.textField.delegate = self;

#import <UIKit/UIKit.h>

@interface ShowTextFieldViewController : UIViewController<UITextFieldDelegate>

@end
