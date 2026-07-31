#pragma once

class CDOTA_Modifier_AbyssalUnderlord_Underling_Autoattack : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< C_BaseEntity > m_hBestTarget; // offset 0x1A78, size 0x4, align 4
    float32 underling_search_radius; // offset 0x1A7C, size 0x4, align 4
    bool m_bRunningToFountain; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    int32 underling_building_damage_reduction; // offset 0x1A84, size 0x4, align 4
};
