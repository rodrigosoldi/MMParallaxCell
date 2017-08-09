//
//  MMParallaxCell.h
//  MMParallaxCell
//
//  Created by Ralph Li on 3/27/15.
//  Copyright (c) 2015 LJC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MMParallaxCell : UITableViewCell

@property (nonatomic, strong) UIImageView *parallaxImage;

@property (nonatomic, assign) CGFloat parallaxRatio; //ratio of cell height, should between [1.0f, 2.0f], default is 1.5f;


/**
 
 Use this method for dealloc visibles cells
 On your ViewController on dealloc call this method.
 
 e.g.
 
 
 - (void)dealloc {
    for (MMParallaxCell *cell in self.tableView.visibleCells) {
        [cell safeRemoveObserver];
    }
 }
 
 
 It will be fix the retain cycle, deallocing all cells in memory
 
 
 */
- (void)safeRemoveObserver;

@end
