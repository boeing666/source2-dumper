#pragma once

class CCitadel_Ability_VampireBat_BatBlink : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1928, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18D0]; // offset 0x0
    int32 m_iRemainingCasts; // offset 0x18D0, size 0x4, align 4
    bool m_bIsBlinking; // offset 0x18D4, size 0x1, align 1
    char _pad_18D5[0x3]; // offset 0x18D5
    GameTime_t m_RecastEndTime; // offset 0x18D8, size 0x4, align 255
    GameTime_t m_BlinkEndTime; // offset 0x18DC, size 0x4, align 255
    char _pad_18E0[0x48]; // offset 0x18E0
};
