//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Oleksandr Isaiev on 27.08.14.
//  Copyright (c) 2014 None. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
