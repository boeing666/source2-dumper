#pragma once

class CDOTA_Ability_Tinker_Keen_Teleport : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 creep_teleport_level; // offset 0x85C, size 0x4, align 4
    int32 hero_teleport_level; // offset 0x860, size 0x4, align 4
    float32 outpost_channel_time; // offset 0x864, size 0x4, align 4
    float32 jungle_outpost_channel_time; // offset 0x868, size 0x4, align 4
    CHandle< CBaseEntity > m_hTeleportTarget; // offset 0x86C, size 0x4, align 4
    ParticleIndex_t m_nFXCaster; // offset 0x870, size 0x4, align 255
    ParticleIndex_t m_nFXOrigin; // offset 0x874, size 0x4, align 255
    ParticleIndex_t m_nFXDestination; // offset 0x878, size 0x4, align 255
    VectorWS m_vDestination; // offset 0x87C, size 0xC, align 4
    int32 m_iMinDistance; // offset 0x888, size 0x4, align 4
    float32 m_flBaseTeleportTime; // offset 0x88C, size 0x4, align 4
};
