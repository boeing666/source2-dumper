#pragma once

class CCitadel_Ability_Necro_KillSummon : public CCitadelBaseAbility /*0x0*/  // sizeof 0xFF8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xFF2]; // offset 0x0
    bool m_bIsInRecast; // offset 0xFF2, size 0x1, align 1 | MNetworkEnable
    char _pad_0FF3[0x1]; // offset 0xFF3
    GameTime_t m_RecastEndTime; // offset 0xFF4, size 0x4, align 255 | MNetworkEnable
};
