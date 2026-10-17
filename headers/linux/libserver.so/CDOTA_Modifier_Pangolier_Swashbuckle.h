#pragma once

class CDOTA_Modifier_Pangolier_Swashbuckle : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_nStrikesLeft; // offset 0x1AA8, size 0x4, align 4
    float32 attack_interval; // offset 0x1AAC, size 0x4, align 4
    VectorWS m_vSpawnPos; // offset 0x1AB0, size 0xC, align 4
    Vector m_vStrikeDir; // offset 0x1ABC, size 0xC, align 4
    VectorWS m_vDashPos; // offset 0x1AC8, size 0xC, align 4
    bool m_bApplyDamagePenalty; // offset 0x1AD4, size 0x1, align 1
    char _pad_1AD5[0x3]; // offset 0x1AD5
};
