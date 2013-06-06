//
//  ViewController.h
//  MD5Encode
//
//  Created by Qingqi Wang on 19/04/2012.
//  Copyright (c) 2012 Food Sciences, School of Biosciences, University of Nottingham. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    IBOutlet UITextField *txtBox;
    IBOutlet UILabel *lblMD5;
}

- (NSString *)MD5String:(NSString *)inputString;
- (IBAction)convertMD5:(id)sender;

@end
