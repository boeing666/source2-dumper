#pragma once

class CCitadel_Ability_Necro_KillSummon : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1790, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x178A]; // offset 0x0
    bool m_bIsInRecast; // offset 0x178A, size 0x1, align 1
    char _pad_178B[0x1]; // offset 0x178B
    GameTime_t m_RecastEndTime; // offset 0x178C, size 0x4, align 255
};
