#pragma once

class CDOTA_Modifier_VoidSpirit_AetherRemnant_WatchThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 remnant_watch_radius; // offset 0x1AF8, size 0x4, align 4
    GameTime_t m_flLastDamageTick; // offset 0x1AFC, size 0x4, align 255
    float32 damage_tick_rate; // offset 0x1B00, size 0x4, align 4
    float32 m_flDamage; // offset 0x1B04, size 0x4, align 4
    bool m_bPiercesCreeps; // offset 0x1B08, size 0x1, align 1
    bool bIsArtifice; // offset 0x1B09, size 0x1, align 1
    char _pad_1B0A[0x2]; // offset 0x1B0A
    float32 artifice_pct_effectiveness; // offset 0x1B0C, size 0x4, align 4
};
