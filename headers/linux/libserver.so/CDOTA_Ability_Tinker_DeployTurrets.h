#pragma once

class CDOTA_Ability_Tinker_DeployTurrets : public CDOTABaseAbility /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vDashPosition; // offset 0x85C, size 0xC, align 4
    VectorWS m_vFacePosition; // offset 0x868, size 0xC, align 4
    VectorWS m_vEndpoint; // offset 0x874, size 0xC, align 4
    Vector m_vSlashDir; // offset 0x880, size 0xC, align 4
    VectorWS m_vDashProjectileLocation; // offset 0x88C, size 0xC, align 4
    float32 missile_range; // offset 0x898, size 0x4, align 4
    char _pad_089C[0x4]; // offset 0x89C
};
