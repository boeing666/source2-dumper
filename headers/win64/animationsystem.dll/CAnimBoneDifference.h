#pragma once

class CAnimBoneDifference  // sizeof 0x30, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_name; // offset 0x0, size 0x10, align 8
    CBufferString m_parent; // offset 0x10, size 0x10, align 8
    Vector m_posError; // offset 0x20, size 0xC, align 4
    bool m_bHasRotation; // offset 0x2C, size 0x1, align 1
    bool m_bHasMovement; // offset 0x2D, size 0x1, align 1
    char _pad_002E[0x2]; // offset 0x2E
};
