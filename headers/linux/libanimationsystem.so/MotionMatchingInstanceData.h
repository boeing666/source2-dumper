#pragma once

class MotionMatchingInstanceData  // sizeof 0x120, align 0x10 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2C]; // offset 0x0
    MotionSelection m_currentSelection; // offset 0x2C, size 0x58, align 4
    MotionSelection m_previousSelection; // offset 0x84, size 0x58, align 4
    char _pad_00DC[0x44]; // offset 0xDC
};
