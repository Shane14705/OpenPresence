# OpenPresence: *An interface for human sensory experience*
OpenPresence is a WIP project that will attempt to allow for the easy creation and integration of DIY VR peripherals with as wide compatibility as possible. With this goal in mind, OpenPresence is split into two parts: an SDK (as well as plugins for Unreal Engine and Unity later on) allowing for VR Developers to easily implement accessible presence information, and an API for hardware developers to take their peripheral ideas and easily make them compatible with any game supporting OpenPresence, without requiring an immense amount of programming knowledge.

## Design

The OpenPresence API will be modeled in two ways: For the hardware APIs, the implementation will be modeled after different human sensory systems. This means that hardware developers simply need to know what kind of senses their devices are targeting, and then interface with that part of the API.

As for VR developers, I am considering two possible designs: the first would be an environmental model, meaning that developers feed the OpenPresence API as much information as they care to about the player's in-game "environment", and OpenPresence will transform that into the proper sensory data to send to hardware devices using the API. The alternative approach would be to just allow the VR developer to directly control different senses. While the latter would be much easier to implement, the former has the advantage that when new senses are added to the OpenPresence API, it will require little to no developer intervention to make their games work well with any new senses added to the API by the Open Source community. I will cross this bridge when I get to it :)

## Development Stages

This project is a long way out. I have chosen to have this repository public regardless, as I'd like it to be open from start to finish (plus it is good for collaboration)! That being said, I've got a few major stages planned for development.
***
### Stage 1: Get a Baseline
As someone with little experience in DIY hardware, I figured that I should try and get a feel for what such developers would want in a framework before I actually started writing one! Therefore, with much inspiration and help from the folks over at [LucidVR](https://github.com/LucidVR "LucidVR on GitHub"), I decided to create my own pair of their haptic gloves! However, rather than using their (wonderful) firmware, I will be programming my own firmware from scratch! Not only will this give me lots of practice with hardware, but hopefully help elucidate some of the problems DIY VR Peripheral developers face and how I can combat them in OpenPresence! (For example, I plan on implementing some basic utilities for hardware devs who want to get information from the user's positional tracking system!)

### Stage 2: Sensation
This will be the beginning of where the magic happens. It is at this point where I will begin developing and documenting the API. There will be constant change here as I experiment with what API approaches feel most intuitive while also balancing performance and extendability. Feedback will be vital here! Eventually, I will also implement the SDK and hopefully make some simple to use plugins for Unity and Unreal. The important thing to remember here is that, at this point, OpenPresence is a one way street: the game sends sensory information to the hardware through the API, but the hardware cannot send information back to the game...yet. The reasoning for focusing on this "one-way" approach first is that implementing an easy to use SDK for peripherals that can "talk back" to the game developer is far more complicated, so focusing on one-way output helps keep the scope of this stage down while I gain more experience with the different tools I will be working with.

### Stage 3: Expression
This is where things get *really* interesting! Using everything that I have learned from the previous stages, I will begin to tackle expression: the ability for hardware to communicate back to the game developer through the API! This will be difficult to implement in an intuitive way for the VR Development SDK, but will definitely be doable. I will also make sure that both expression and sensation designs are well documented so that the public can contribute their own senses and expressions to OpenPresence for hardware developers to experiment with and VR Developers to implement!

## Senses and Expressions

The following is an example of some of the senses and expressions I hope to have implemented by the end of stage 3:

|Senses|Sensations |
|:------:|:--------:|
| Thermoception| Facial Expression|
| Vestibular/Proprioception| Motor Movement (FBT, Finger Tracking, etc.) |
| Olfaction | Verbal Expression (as a gameplay mechanic) |
| Touch Sensation| Eye movement/Gaze tracking |
| Mechanosensation | 
| Nociception |

***
With all that out of the way, I hope that you enjoy the journey of creating OpenPresence as much as I will!

## Disclaimer:
As this project is in its infancy, expect a lot of changes in the project structure before I settle on one, as it is the first project of this size I have ever worked on :) Additionally, I will be waiting to post build information until around stage 2 of development. I apologize for the delay, but I hope you can be patient with my learning process :)


