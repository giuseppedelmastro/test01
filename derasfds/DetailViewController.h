//
//  DetailViewController.h
//  derasfds
//
//  Created by Peps on 9/27/13.
//  Copyright (c) 2013 Peps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
