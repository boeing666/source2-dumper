#pragma once

class CDOTA_Ability_VoidSpirit_AetherRemnant : public CDOTABaseAbility /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 start_radius; // offset 0x85C, size 0x4, align 4
    float32 end_radius; // offset 0x860, size 0x4, align 4
    float32 remnant_watch_distance; // offset 0x864, size 0x4, align 4
    float32 projectile_speed; // offset 0x868, size 0x4, align 4
    char _pad_086C[0x14]; // offset 0x86C
    VectorWS m_vDashPosition; // offset 0x880, size 0xC, align 4
    VectorWS m_vFacePosition; // offset 0x88C, size 0xC, align 4
    VectorWS m_vEndpoint; // offset 0x898, size 0xC, align 4
    char _pad_08A4[0x4]; // offset 0x8A4
};
