#pragma once

class CCitadel_Ability_HornetLeap : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x17E8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11DA]; // offset 0x0
    bool m_bLeaping; // offset 0x11DA, size 0x1, align 1 | MNetworkEnable
    char _pad_11DB[0x1]; // offset 0x11DB
    GameTime_t m_flLeapStartTime; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable
    ParticleIndex_t m_nFXIndex; // offset 0x11E0, size 0x4, align 255
    char _pad_11E4[0x604]; // offset 0x11E4
};
