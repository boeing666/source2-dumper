#pragma once

class CDOTA_Modifier_Kez_Katana_Shard_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    GameTime_t m_StunTime; // offset 0x1AA8, size 0x4, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AAC, size 0x4, align 4
    bool m_bStunned; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x7]; // offset 0x1AB1
};
