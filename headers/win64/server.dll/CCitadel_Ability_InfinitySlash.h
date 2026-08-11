#pragma once

class CCitadel_Ability_InfinitySlash : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x1208, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11F8]; // offset 0x0
    GameTime_t m_flExplodeEndTime; // offset 0x11F8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flBuffEndTime; // offset 0x11FC, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    ParticleIndex_t m_nCastEffect; // offset 0x1200, size 0x4, align 255
    char _pad_1204[0x4]; // offset 0x1204
};
