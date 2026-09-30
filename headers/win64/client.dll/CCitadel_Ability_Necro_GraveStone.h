#pragma once

class CCitadel_Ability_Necro_GraveStone : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecDeployedGravestones; // offset 0x16D8, size 0x18, align 8
    VectorWS m_vCastPosition; // offset 0x16F0, size 0xC, align 4
    QAngle m_qCastAngle; // offset 0x16FC, size 0xC, align 4
    char _pad_1708[0x4D0]; // offset 0x1708
};
