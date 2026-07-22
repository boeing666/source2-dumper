#pragma once

class CCitadelProjectile_ImmobilizeTrap : public CCitadelProjectile /*0x0*/  // sizeof 0xFA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x860, size 0x4, align 255
    Vector m_vecStartPos; // offset 0x864, size 0xC, align 4
    Vector m_vecEndPos; // offset 0x870, size 0xC, align 4
    GameTime_t m_flProjectileLandTime; // offset 0x87C, size 0x4, align 255
    char _pad_0880[0x720]; // offset 0x880
};
