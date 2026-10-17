#pragma once

class CDOTA_Modifier_Kunkka_Torrent_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bShowEnemies; // offset 0x1AA8, size 0x1, align 1
    bool m_bTorrentStorm; // offset 0x1AA9, size 0x1, align 1
    bool m_bTorrentStarted; // offset 0x1AAA, size 0x1, align 1
    char _pad_1AAB[0x1]; // offset 0x1AAB
    GameTime_t m_fTorrentStartTime; // offset 0x1AAC, size 0x4, align 255
    float32 flDamagePerTick; // offset 0x1AB0, size 0x4, align 4
    float32 flFirstDamage; // offset 0x1AB4, size 0x4, align 4
    float32 damage_tick_interval; // offset 0x1AB8, size 0x4, align 4
    float32 percent_instant; // offset 0x1ABC, size 0x4, align 4
};
