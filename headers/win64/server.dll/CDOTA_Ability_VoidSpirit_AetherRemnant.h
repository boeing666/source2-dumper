#pragma once

class CDOTA_Ability_VoidSpirit_AetherRemnant : public CDOTABaseAbility /*0x0*/  // sizeof 0x5C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 start_radius; // offset 0x580, size 0x4, align 4
    float32 end_radius; // offset 0x584, size 0x4, align 4
    float32 remnant_watch_distance; // offset 0x588, size 0x4, align 4
    float32 projectile_speed; // offset 0x58C, size 0x4, align 4
    char _pad_0590[0x14]; // offset 0x590
    VectorWS m_vDashPosition; // offset 0x5A4, size 0xC, align 4
    VectorWS m_vFacePosition; // offset 0x5B0, size 0xC, align 4
    VectorWS m_vEndpoint; // offset 0x5BC, size 0xC, align 4
};
