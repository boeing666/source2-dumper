#pragma once

class CDOTA_Modifier_Kunkka_Torrent_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bShowEnemies; // offset 0x1AF8, size 0x1, align 1
    bool m_bTorrentStorm; // offset 0x1AF9, size 0x1, align 1
    bool m_bTorrentStarted; // offset 0x1AFA, size 0x1, align 1
    char _pad_1AFB[0x1]; // offset 0x1AFB
    GameTime_t m_fTorrentStartTime; // offset 0x1AFC, size 0x4, align 255
    float32 flDamagePerTick; // offset 0x1B00, size 0x4, align 4
    float32 flFirstDamage; // offset 0x1B04, size 0x4, align 4
    float32 damage_tick_interval; // offset 0x1B08, size 0x4, align 4
    float32 percent_instant; // offset 0x1B0C, size 0x4, align 4
};
