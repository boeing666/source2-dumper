#pragma once

class CCitadelProjectile_ImmobilizeTrap : public CCitadelProjectile /*0x0*/  // sizeof 0x1348, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x968]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x968, size 0x4, align 255
    Vector m_vecStartPos; // offset 0x96C, size 0xC, align 4
    Vector m_vecEndPos; // offset 0x978, size 0xC, align 4
    GameTime_t m_flProjectileLandTime; // offset 0x984, size 0x4, align 255
    char _pad_0988[0x9C0]; // offset 0x988
};
