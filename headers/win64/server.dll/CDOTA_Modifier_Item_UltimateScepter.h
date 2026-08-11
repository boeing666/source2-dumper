#pragma once

class CDOTA_Modifier_Item_UltimateScepter : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1A78, size 0x4, align 255
    int32 bonus_all_stats; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_health; // offset 0x1A80, size 0x4, align 4
    int32 bonus_mana; // offset 0x1A84, size 0x4, align 4
};
