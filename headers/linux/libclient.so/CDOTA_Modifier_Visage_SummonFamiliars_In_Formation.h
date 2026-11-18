#pragma once

class CDOTA_Modifier_Visage_SummonFamiliars_In_Formation : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< C_BaseEntity > m_hOwner; // offset 0x1AF8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCurrentTarget; // offset 0x1AFC, size 0x4, align 4
    int32 familiar_index; // offset 0x1B00, size 0x4, align 4
    int32 back_distance; // offset 0x1B04, size 0x4, align 4
    int32 side_distance; // offset 0x1B08, size 0x4, align 4
    VectorWS m_vecDesiredPosition; // offset 0x1B0C, size 0xC, align 4
    float32 max_distance; // offset 0x1B18, size 0x4, align 4
    float32 return_distance; // offset 0x1B1C, size 0x4, align 4
    float32 attack_range_buffer; // offset 0x1B20, size 0x4, align 4
    float32 recall_duration; // offset 0x1B24, size 0x4, align 4
    bool m_bTeleporting; // offset 0x1B28, size 0x1, align 1
    char _pad_1B29[0x3]; // offset 0x1B29
    int32 familiar_attack_range; // offset 0x1B2C, size 0x4, align 4
    float32 additional_target_search_radius; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
};
