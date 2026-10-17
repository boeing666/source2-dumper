#pragma once

class CDOTA_Modifier_Visage_SummonFamiliars_In_Formation : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< C_BaseEntity > m_hOwner; // offset 0x1AA8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCurrentTarget; // offset 0x1AAC, size 0x4, align 4
    int32 familiar_index; // offset 0x1AB0, size 0x4, align 4
    int32 back_distance; // offset 0x1AB4, size 0x4, align 4
    int32 side_distance; // offset 0x1AB8, size 0x4, align 4
    VectorWS m_vecDesiredPosition; // offset 0x1ABC, size 0xC, align 4
    float32 max_distance; // offset 0x1AC8, size 0x4, align 4
    float32 return_distance; // offset 0x1ACC, size 0x4, align 4
    float32 attack_range_buffer; // offset 0x1AD0, size 0x4, align 4
    float32 recall_duration; // offset 0x1AD4, size 0x4, align 4
    bool m_bTeleporting; // offset 0x1AD8, size 0x1, align 1
    char _pad_1AD9[0x3]; // offset 0x1AD9
    int32 familiar_attack_range; // offset 0x1ADC, size 0x4, align 4
    float32 additional_target_search_radius; // offset 0x1AE0, size 0x4, align 4
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
