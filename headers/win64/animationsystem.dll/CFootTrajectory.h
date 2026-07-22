#pragma once

class CFootTrajectory  // sizeof 0x20, align 0x8 [vtable trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    Vector m_vOffset; // offset 0x8, size 0xC, align 4
    float32 m_flRotationOffset; // offset 0x14, size 0x4, align 4
    float32 m_flProgression; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
