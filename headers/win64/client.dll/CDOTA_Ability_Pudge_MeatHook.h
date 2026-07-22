#pragma once

class CDOTA_Ability_Pudge_MeatHook : public C_DOTABaseAbility /*0x0*/  // sizeof 0x700, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x6A8, size 0xC, align 4
    int32 m_nConsecutiveHits; // offset 0x6B4, size 0x4, align 4
    bool m_bIsVectorTargeted; // offset 0x6B8, size 0x1, align 1
    char _pad_06B9[0x3]; // offset 0x6B9
    VectorWS m_vTurnLocation; // offset 0x6BC, size 0xC, align 4
    Vector m_vDirectionAfterTurn; // offset 0x6C8, size 0xC, align 4
    bool m_bHasTurned; // offset 0x6D4, size 0x1, align 1
    char _pad_06D5[0x3]; // offset 0x6D5
    float32 m_flDistanceAfterTurn; // offset 0x6D8, size 0x4, align 4
    VectorWS m_vFinalPosition; // offset 0x6DC, size 0xC, align 4
    float32 reveal_duration; // offset 0x6E8, size 0x4, align 4
    int32 curve_hook; // offset 0x6EC, size 0x4, align 4
    float32 curve_hook_turn_rate; // offset 0x6F0, size 0x4, align 4
    int32 curve_hook_debug; // offset 0x6F4, size 0x4, align 4
    float32 m_fTimeRemaining; // offset 0x6F8, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x6FC, size 0x4, align 4
};
