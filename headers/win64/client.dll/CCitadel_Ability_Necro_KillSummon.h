#pragma once

class CCitadel_Ability_Necro_KillSummon : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1260, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x125A]; // offset 0x0
    bool m_bIsInRecast; // offset 0x125A, size 0x1, align 1 | MNetworkEnable
    char _pad_125B[0x1]; // offset 0x125B
    GameTime_t m_RecastEndTime; // offset 0x125C, size 0x4, align 255 | MNetworkEnable
};
