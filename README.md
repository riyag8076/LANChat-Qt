# LAN Chat Application (Qt/C++)

## Overview

LAN Chat is a desktop chat application developed using C++ and Qt. The application provides a graphical user interface for messaging, local chat history storage, visibility controls, and networking functionality using TCP and UDP sockets.

## Technologies Used

* C++
* Qt 6
* Qt Widgets
* TCP Sockets
* UDP Sockets
* CMake

## Features Implemented

### GUI Interface

* Username input
* Visibility checkbox
* Nearby Users panel
* Chat display area
* Message input field
* Send button

### Messaging

* Real-time message transmission using TCP sockets
* Message timestamps
* Message reception and display

### Chat Persistence

* Save chat history to local file
* Load previous chat history on application startup

### User Visibility

* Toggle user visibility through checkbox control

### User Discovery

* UDP-based user discovery mechanism implemented

## Build Instructions

### Requirements

* Qt 6.5 or newer
* CMake 3.19 or newer
* MinGW or MSVC compiler

### Build Steps

1. Open the project in Qt Creator.
2. Configure the project.
3. Build the project.
4. Run the application.

## Current Project Status

### Completed Features

* GUI implementation
* TCP messaging infrastructure
* Message sending and receiving
* Chat history persistence
* Timestamp support
* Visibility controls
* UDP discovery implementation

### Challenges Encountered

The UDP-based nearby user discovery feature has been implemented but requires further validation across multiple devices or application instances in a LAN environment.

## Future Improvements

* Complete LAN user discovery validation
* Private messaging support
* User join/leave notifications
* Improved user interface
* Multi-user chat support
