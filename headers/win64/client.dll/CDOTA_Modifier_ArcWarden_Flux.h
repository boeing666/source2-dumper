#pragma once

class CDOTA_Modifier_ArcWarden_Flux : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_nCasterTeam; // offset 0x1AA8, size 0x4, align 4
    float32 damage_per_second; // offset 0x1AAC, size 0x4, align 4
    int32 search_radius; // offset 0x1AB0, size 0x4, align 4
    float32 move_speed_slow_pct; // offset 0x1AB4, size 0x4, align 4
    int32 status_resist; // offset 0x1AB8, size 0x4, align 4
    float32 think_interval; // offset 0x1ABC, size 0x4, align 4
    int32 applies_silence; // offset 0x1AC0, size 0x4, align 4
    int32 m_nCurrentMovementSlow; // offset 0x1AC4, size 0x4, align 4
    int32 m_nCurrentStatusResistance; // offset 0x1AC8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1ACC, size 0x4, align 255
};
