/*
    SwiffFrame.h
    Copyright (c) 2011, musictheory.net, LLC.  All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:
        * Redistributions of source code must retain the above copyright
          notice, this list of conditions and the following disclaimer.
        * Redistributions in binary form must reproduce the above copyright
          notice, this list of conditions and the following disclaimer in the
          documentation and/or other materials provided with the distribution.
        * Neither the name of musictheory.net, LLC nor the names of its contributors
          may be used to endorse or promote products derived from this software
          without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL MUSICTHEORY.NET, LLC BE LIABLE FOR ANY
    DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#import <SwiffImport.h>

@class SwiffScene, SwiffPlacedObject, SwiffSoundDefinition;


@interface SwiffFrame : NSObject {
@private
    SwiffScene           *m_scene;
    NSUInteger            m_indexInScene;

    NSString             *m_label;
    NSArray              *m_placedObjects;
    NSArray              *m_placedObjectsWithNames;

    SwiffSoundDefinition *m_streamSound;
    NSArray              *m_soundEvents;
    NSUInteger            m_streamBlockIndex;
}

- (void) clearWeakReferences;

- (SwiffPlacedObject *) placedObjectWithName:(NSString *)name;

@property (nonatomic, copy, readonly) NSString *label;

@property (nonatomic, assign, readonly) SwiffScene *scene;
@property (nonatomic, assign, readonly) NSUInteger index1InScene;
@property (nonatomic, assign, readonly) NSUInteger indexInScene;
@property (nonatomic, assign, readonly) NSUInteger index1InMovie;
@property (nonatomic, assign, readonly) NSUInteger indexInMovie;

@property (nonatomic, retain, readonly) NSArray *soundEvents;
@property (nonatomic, retain, readonly) SwiffSoundDefinition *streamSound;
@property (nonatomic, assign, readonly) NSUInteger streamBlockIndex;

// Sorted by ascending depth 
@property (nonatomic, retain, readonly) NSArray *placedObjects;
@property (nonatomic, retain, readonly) NSArray *placedObjectsWithNames;

@end