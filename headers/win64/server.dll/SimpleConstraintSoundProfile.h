#pragma once

class SimpleConstraintSoundProfile  // sizeof 0x20, align 0xFF [vtable trivial_dtor] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flKeyPointMinSoundThreshold; // offset 0x8, size 0x4, align 4
    float32 m_flKeyPointMaxSoundThreshold; // offset 0xC, size 0x4, align 4
    float32 m_reversalSoundThresholdSmall; // offset 0x10, size 0x4, align 4
    float32 m_reversalSoundThresholdMedium; // offset 0x14, size 0x4, align 4
    float32 m_reversalSoundThresholdLarge; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
