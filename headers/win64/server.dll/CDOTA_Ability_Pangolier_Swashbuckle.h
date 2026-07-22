#pragma once

class CDOTA_Ability_Pangolier_Swashbuckle : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x580*/  // sizeof 0x5F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    float32 dash_speed; // offset 0x590, size 0x4, align 4
    float32 start_radius; // offset 0x594, size 0x4, align 4
    float32 end_radius; // offset 0x598, size 0x4, align 4
    float32 range; // offset 0x59C, size 0x4, align 4
    float32 damage; // offset 0x5A0, size 0x4, align 4
    float32 attack_damage; // offset 0x5A4, size 0x4, align 4
    int32 procs_onhit_effects; // offset 0x5A8, size 0x4, align 4
    float32 slow_duration; // offset 0x5AC, size 0x4, align 4
    VectorWS m_vDashPosition; // offset 0x5B0, size 0xC, align 4
    VectorWS m_vFacePosition; // offset 0x5BC, size 0xC, align 4
    VectorWS m_vEndpoint; // offset 0x5C8, size 0xC, align 4
    Vector m_vSlashDir; // offset 0x5D4, size 0xC, align 4
    int32 m_nDashProjectileID; // offset 0x5E0, size 0x4, align 4
    VectorWS m_vDashProjectileLocation; // offset 0x5E4, size 0xC, align 4
};
