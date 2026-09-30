#pragma once

class CCitadel_Ability_Necro_GraveStone : public CCitadelBaseAbility /*0x0*/  // sizeof 0x19A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecDeployedGravestones; // offset 0x14A0, size 0x18, align 8
    VectorWS m_vCastPosition; // offset 0x14B8, size 0xC, align 4
    QAngle m_qCastAngle; // offset 0x14C4, size 0xC, align 4
    char _pad_14D0[0x4D0]; // offset 0x14D0
};
