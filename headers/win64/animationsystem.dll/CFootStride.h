#pragma once

class CFootStride  // sizeof 0x58, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CFootCycleDefinition m_definition; // offset 0x0, size 0x3C, align 4
    char _pad_003C[0x4]; // offset 0x3C
    CFootTrajectories m_trajectories; // offset 0x40, size 0x18, align 8
};
