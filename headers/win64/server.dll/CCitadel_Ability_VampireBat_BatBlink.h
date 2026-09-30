#pragma once

class CCitadel_Ability_VampireBat_BatBlink : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1920, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18C8]; // offset 0x0
    int32 m_iRemainingCasts; // offset 0x18C8, size 0x4, align 4
    bool m_bIsBlinking; // offset 0x18CC, size 0x1, align 1
    char _pad_18CD[0x3]; // offset 0x18CD
    GameTime_t m_RecastEndTime; // offset 0x18D0, size 0x4, align 255
    GameTime_t m_BlinkEndTime; // offset 0x18D4, size 0x4, align 255
    char _pad_18D8[0x48]; // offset 0x18D8
};
