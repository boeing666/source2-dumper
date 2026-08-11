#pragma once

class CCitadel_Ability_Necro_GraveStone : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1320, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecDeployedGravestones; // offset 0xF70, size 0x18, align 8 | MNetworkEnable
    Vector m_vCastPosition; // offset 0xF88, size 0xC, align 4
    QAngle m_qCastAngle; // offset 0xF94, size 0xC, align 4
    char _pad_0FA0[0x380]; // offset 0xFA0
};
