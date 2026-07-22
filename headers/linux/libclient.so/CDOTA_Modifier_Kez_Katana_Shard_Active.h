#pragma once

class CDOTA_Modifier_Kez_Katana_Shard_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    GameTime_t m_StunTime; // offset 0x1A58, size 0x4, align 255
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A5C, size 0x4, align 4
    bool m_bStunned; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x7]; // offset 0x1A61
};
