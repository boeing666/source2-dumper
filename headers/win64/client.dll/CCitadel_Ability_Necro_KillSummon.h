#pragma once

class CCitadel_Ability_Necro_KillSummon : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1798, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1792]; // offset 0x0
    bool m_bIsInRecast; // offset 0x1792, size 0x1, align 1
    char _pad_1793[0x1]; // offset 0x1793
    GameTime_t m_RecastEndTime; // offset 0x1794, size 0x4, align 255
};
