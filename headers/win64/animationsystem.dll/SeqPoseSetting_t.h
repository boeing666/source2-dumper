#pragma once

enum SeqPoseSetting_t : uint32_t  // sizeof 0x4
{
    SEQ_POSE_SETTING_CONSTANT = 0,
    SEQ_POSE_SETTING_ROTATION = 1,
    SEQ_POSE_SETTING_POSITION = 2,
    SEQ_POSE_SETTING_VELOCITY = 3,
};
