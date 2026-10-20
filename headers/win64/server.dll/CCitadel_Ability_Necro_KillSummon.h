#pragma once

class CCitadel_Ability_Necro_KillSummon : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1560, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x155A]; // offset 0x0
    bool m_bIsInRecast; // offset 0x155A, size 0x1, align 1
    char _pad_155B[0x1]; // offset 0x155B
    GameTime_t m_RecastEndTime; // offset 0x155C, size 0x4, align 255
};
