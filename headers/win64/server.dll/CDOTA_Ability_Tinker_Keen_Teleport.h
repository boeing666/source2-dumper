#pragma once

class CDOTA_Ability_Tinker_Keen_Teleport : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 creep_teleport_level; // offset 0x580, size 0x4, align 4
    int32 hero_teleport_level; // offset 0x584, size 0x4, align 4
    float32 outpost_channel_time; // offset 0x588, size 0x4, align 4
    float32 jungle_outpost_channel_time; // offset 0x58C, size 0x4, align 4
    CHandle< CBaseEntity > m_hTeleportTarget; // offset 0x590, size 0x4, align 4
    ParticleIndex_t m_nFXCaster; // offset 0x594, size 0x4, align 255
    ParticleIndex_t m_nFXOrigin; // offset 0x598, size 0x4, align 255
    ParticleIndex_t m_nFXDestination; // offset 0x59C, size 0x4, align 255
    VectorWS m_vDestination; // offset 0x5A0, size 0xC, align 4
    int32 m_iMinDistance; // offset 0x5AC, size 0x4, align 4
    float32 m_flBaseTeleportTime; // offset 0x5B0, size 0x4, align 4
    char _pad_05B4[0x4]; // offset 0x5B4
};
