#pragma once

class CDOTABehaviorMoveTo  // sizeof 0xE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xB8]; // offset 0x0
    CountdownTimer m_repathTimer; // offset 0xB8, size 0x18, align 8
    bool m_bSetAnimation; // offset 0xD0, size 0x1, align 1
    bool m_bUseSwimAnimations; // offset 0xD1, size 0x1, align 1
    char _pad_00D2[0x2]; // offset 0xD2
    int32 m_nIdleActivity; // offset 0xD4, size 0x4, align 4
    int32 m_nRunActivity; // offset 0xD8, size 0x4, align 4
    float32 m_flTargetDist; // offset 0xDC, size 0x4, align 4
    bool m_bIsDirectional; // offset 0xE0, size 0x1, align 1
    bool m_bIsRelative; // offset 0xE1, size 0x1, align 1
    char _pad_00E2[0x6]; // offset 0xE2
};
