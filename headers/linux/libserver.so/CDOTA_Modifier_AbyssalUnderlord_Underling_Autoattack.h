#pragma once

class CDOTA_Modifier_AbyssalUnderlord_Underling_Autoattack : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CBaseEntity > m_hBestTarget; // offset 0x1AA8, size 0x4, align 4
    float32 underling_search_radius; // offset 0x1AAC, size 0x4, align 4
    bool m_bRunningToFountain; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    int32 underling_building_damage_reduction; // offset 0x1AB4, size 0x4, align 4
};
