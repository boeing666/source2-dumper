#pragma once

class CDOTA_Ability_Pangolier_Swashbuckle : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x8D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    float32 dash_speed; // offset 0x86C, size 0x4, align 4
    float32 start_radius; // offset 0x870, size 0x4, align 4
    float32 end_radius; // offset 0x874, size 0x4, align 4
    float32 range; // offset 0x878, size 0x4, align 4
    float32 damage; // offset 0x87C, size 0x4, align 4
    float32 attack_damage; // offset 0x880, size 0x4, align 4
    int32 procs_onhit_effects; // offset 0x884, size 0x4, align 4
    float32 slow_duration; // offset 0x888, size 0x4, align 4
    VectorWS m_vDashPosition; // offset 0x88C, size 0xC, align 4
    VectorWS m_vFacePosition; // offset 0x898, size 0xC, align 4
    VectorWS m_vEndpoint; // offset 0x8A4, size 0xC, align 4
    Vector m_vSlashDir; // offset 0x8B0, size 0xC, align 4
    int32 m_nDashProjectileID; // offset 0x8BC, size 0x4, align 4
    VectorWS m_vDashProjectileLocation; // offset 0x8C0, size 0xC, align 4
    char _pad_08CC[0x4]; // offset 0x8CC
};
