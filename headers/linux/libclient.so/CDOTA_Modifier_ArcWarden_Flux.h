#pragma once

class CDOTA_Modifier_ArcWarden_Flux : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 m_nCasterTeam; // offset 0x1AF8, size 0x4, align 4
    float32 damage_per_second; // offset 0x1AFC, size 0x4, align 4
    int32 search_radius; // offset 0x1B00, size 0x4, align 4
    float32 move_speed_slow_pct; // offset 0x1B04, size 0x4, align 4
    int32 status_resist; // offset 0x1B08, size 0x4, align 4
    float32 think_interval; // offset 0x1B0C, size 0x4, align 4
    int32 applies_silence; // offset 0x1B10, size 0x4, align 4
    int32 m_nCurrentMovementSlow; // offset 0x1B14, size 0x4, align 4
    int32 m_nCurrentStatusResistance; // offset 0x1B18, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B1C, size 0x4, align 255
};
