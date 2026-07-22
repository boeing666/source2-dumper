#pragma once

class CCitadel_Ability_Necro_GraveStone : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1588, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecDeployedGravestones; // offset 0x11D8, size 0x18, align 8 | MNetworkEnable
    Vector m_vCastPosition; // offset 0x11F0, size 0xC, align 4
    QAngle m_qCastAngle; // offset 0x11FC, size 0xC, align 4
    char _pad_1208[0x380]; // offset 0x1208
};
