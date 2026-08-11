#pragma once

class CCitadel_Ability_RiotProtocol : public CCitadelBaseAbility /*0x0*/  // sizeof 0xFF8, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    ParticleIndex_t m_ChargeUpParticle; // offset 0xF70, size 0x4, align 255
    bool m_bActive; // offset 0xF74, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F75[0x83]; // offset 0xF75
};
