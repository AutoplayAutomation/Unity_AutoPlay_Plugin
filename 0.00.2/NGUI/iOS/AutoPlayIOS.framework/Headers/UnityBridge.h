//
//  UnityBridge.h
//  testXCUI
//
//  Created by alexey.bedunkevich on 4/28/18.
//  Copyright © 2018 alexey.bedunkevich. All rights reserved.
//

#import "InputModule.h"

#ifdef __cplusplus
extern "C" {
#endif
    void autoplay_tap_by_coordinates(int x, int y);
    
    void autoplay_hold_by_coordinates(int x, int y);
    
    void autoplay_move_to_by_coordinates(int x, int y);
#ifdef __cplusplus
}
#endif
