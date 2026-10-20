#pragma once

class CCitadel_Ability_VampireBat_BatBlink : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1B60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    int32 m_iRemainingCasts; // offset 0x1B08, size 0x4, align 4
    bool m_bIsBlinking; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x3]; // offset 0x1B0D
    GameTime_t m_RecastEndTime; // offset 0x1B10, size 0x4, align 255
    GameTime_t m_BlinkEndTime; // offset 0x1B14, size 0x4, align 255
    char _pad_1B18[0x48]; // offset 0x1B18
};
