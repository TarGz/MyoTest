#pragma once


// Copyright (C) 2013-2014 Thalmic Labs Inc.
// Distributed under the Myo SDK license agreement. See LICENSE.txt for details.
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include <algorithm>

// The only file that needs to be included to use the Myo C++ SDK is myo.hpp.
#include <myo/myo.hpp>

class DataCollector : public myo::DeviceListener {
public:
    void onUnpair();
    void onOrientationData();
    void onPose();
    void onArmRecognized();
    void onArmLost();
    void print();
    void checkWhip();

};


// These values are set by onArmRecognized() and onArmLost() above.
bool onArm;
bool activated = false;
myo::Arm whichArm;

// These values are set by onOrientationData() and onPose() above.
int roll_w, pitch_w, yaw_w;
myo::Pose currentPose;