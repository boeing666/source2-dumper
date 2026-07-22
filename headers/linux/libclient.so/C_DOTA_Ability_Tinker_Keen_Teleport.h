#pragma once

class C_DOTA_Ability_Tinker_Keen_Teleport : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 creep_teleport_level; // offset 0x824, size 0x4, align 4
    int32 hero_teleport_level; // offset 0x828, size 0x4, align 4
    float32 outpost_channel_time; // offset 0x82C, size 0x4, align 4
    float32 jungle_outpost_channel_time; // offset 0x830, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTeleportTarget; // offset 0x834, size 0x4, align 4
    ParticleIndex_t m_nFXCaster; // offset 0x838, size 0x4, align 255
    ParticleIndex_t m_nFXOrigin; // offset 0x83C, size 0x4, align 255
    ParticleIndex_t m_nFXDestination; // offset 0x840, size 0x4, align 255
    VectorWS m_vDestination; // offset 0x844, size 0xC, align 4
    int32 m_iMinDistance; // offset 0x850, size 0x4, align 4
    float32 m_flBaseTeleportTime; // offset 0x854, size 0x4, align 4
};
