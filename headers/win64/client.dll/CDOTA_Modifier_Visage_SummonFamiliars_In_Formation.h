#pragma once

class CDOTA_Modifier_Visage_SummonFamiliars_In_Formation : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hOwner; // offset 0x1A58, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCurrentTarget; // offset 0x1A5C, size 0x4, align 4
    int32 familiar_index; // offset 0x1A60, size 0x4, align 4
    int32 back_distance; // offset 0x1A64, size 0x4, align 4
    int32 side_distance; // offset 0x1A68, size 0x4, align 4
    VectorWS m_vecDesiredPosition; // offset 0x1A6C, size 0xC, align 4
    float32 max_distance; // offset 0x1A78, size 0x4, align 4
    float32 return_distance; // offset 0x1A7C, size 0x4, align 4
    float32 attack_range_buffer; // offset 0x1A80, size 0x4, align 4
    float32 recall_duration; // offset 0x1A84, size 0x4, align 4
    bool m_bTeleporting; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    int32 familiar_attack_range; // offset 0x1A8C, size 0x4, align 4
    float32 additional_target_search_radius; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
