#pragma once

class CDOTA_Modifier_Pangolier_Swashbuckle : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_nStrikesLeft; // offset 0x1A58, size 0x4, align 4
    float32 attack_interval; // offset 0x1A5C, size 0x4, align 4
    VectorWS m_vSpawnPos; // offset 0x1A60, size 0xC, align 4
    Vector m_vStrikeDir; // offset 0x1A6C, size 0xC, align 4
    VectorWS m_vDashPos; // offset 0x1A78, size 0xC, align 4
    bool m_bApplyDamagePenalty; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
};
