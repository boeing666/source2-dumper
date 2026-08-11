#pragma once

class CDOTA_Ability_Tinker_DeployTurrets : public CDOTABaseAbility /*0x0*/  // sizeof 0x5C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vDashPosition; // offset 0x580, size 0xC, align 4
    VectorWS m_vFacePosition; // offset 0x58C, size 0xC, align 4
    VectorWS m_vEndpoint; // offset 0x598, size 0xC, align 4
    Vector m_vSlashDir; // offset 0x5A4, size 0xC, align 4
    VectorWS m_vDashProjectileLocation; // offset 0x5B0, size 0xC, align 4
    float32 missile_range; // offset 0x5BC, size 0x4, align 4
};
