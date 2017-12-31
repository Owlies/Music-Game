//
//  MainView.m
//  TapForTempo
//
//  Created by Yang, Huayu on 4/20/17.
//  Copyright © 2017 Yang, Huayu. All rights reserved.
//

#import "MainView.h"
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@interface MainView ()

@property (nonatomic) NSMutableArray* array;
@property (nonatomic) NSDate* startTime;
@property (nonatomic) AVAudioPlayer* player;
@end

@implementation MainView

float startDelay = 5.0f;

- (void)drawRect:(NSRect)dirtyRect {
    [super drawRect:dirtyRect];
    
    // Drawing code here.
}

- (void)playMusic {
    /* Use this code to play an audio file */
    NSString *soundFilePath = [NSString stringWithFormat:@"%@/softly-inspiringwav_z1eLJUBu.wav", [[NSBundle mainBundle] resourcePath]];
    NSURL *soundFileURL = [NSURL fileURLWithPath:soundFilePath];
    
//    NSString *soundFilePath = [[NSBundle mainBundle] pathForResource:@"/TapForTempo/softly-inspiringwav_z1eLJUBu.wav"  ofType:@"wav"];
//    NSURL *soundFileURL = [NSURL fileURLWithPath:soundFilePath];
    
    _player = [[AVAudioPlayer alloc] initWithContentsOfURL:soundFileURL error:nil];
    _player.numberOfLoops = 0; //Infinite
    [_player performSelector:@selector(play) withObject:_player afterDelay:startDelay];
//    [_player play];
}

- (IBAction)StartRecord:(id)sender {
    _array = [NSMutableArray array];
    _startTime = [NSDate date];
    [self playMusic];
}

- (void)keyDown:(NSEvent *)event {
    NSString* str = [event characters];

    NSTimeInterval now = [[NSDate date] timeIntervalSinceDate:_startTime] - startDelay;
//    NSDateFormatter *outputFormatter = [[NSDateFormatter alloc] init];
//    [outputFormatter setDateFormat:@"HH:mm:ss.SSS"];
//    NSString *curTime = [outputFormatter stringFromDate:now];
    
    NSString *button = [NSString stringWithFormat:@""];
    if ([str isEqualToString:@"z"]) {
        button = @"left";
    } else if ([str isEqualToString:@"x"]) {
        button = @"right";
    } else if ([str isEqualToString:@"m"]) {
        button = @"space";
    }
    NSString* record = [NSString stringWithFormat:@"%f,%@", now, button];
    NSLog(@"%@", record);
    [_array addObject:record];
}

- (BOOL)acceptsFirstResponder {
    return YES;
}

- (IBAction)StopRecord:(id)sender {
    NSString* contents = [NSString string];
    for(NSString* str in _array) {
        NSLog(@"%@", str);
        contents = [contents stringByAppendingString:[NSString stringWithFormat:@"%@\n", str]];
    }
    
    NSArray *paths = NSSearchPathForDirectoriesInDomains
    (NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *documentsDirectory = [paths objectAtIndex:0];
    
    //make a file name to write the data to using the documents directory:
    NSString *fileName = [NSString stringWithFormat:@"%@/TempoOutput.txt",
                          documentsDirectory];
    
    [[NSFileManager defaultManager] createFileAtPath:fileName contents:nil attributes:nil];
    
    [contents writeToFile:fileName atomically:NO encoding:NSStringEncodingConversionAllowLossy error:nil];
    
    [_player stop];
}

@end
