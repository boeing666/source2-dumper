#pragma once

class CDOTA_Ability_Pudge_MeatHook : public C_DOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    VectorWS m_vEndpoint; // offset 0x828, size 0xC, align 4
    int32 m_nConsecutiveHits; // offset 0x834, size 0x4, align 4
    bool m_bIsVectorTargeted; // offset 0x838, size 0x1, align 1
    char _pad_0839[0x3]; // offset 0x839
    VectorWS m_vTurnLocation; // offset 0x83C, size 0xC, align 4
    Vector m_vDirectionAfterTurn; // offset 0x848, size 0xC, align 4
    bool m_bHasTurned; // offset 0x854, size 0x1, align 1
    char _pad_0855[0x3]; // offset 0x855
    float32 m_flDistanceAfterTurn; // offset 0x858, size 0x4, align 4
    VectorWS m_vFinalPosition; // offset 0x85C, size 0xC, align 4
    float32 reveal_duration; // offset 0x868, size 0x4, align 4
    int32 curve_hook; // offset 0x86C, size 0x4, align 4
    float32 curve_hook_turn_rate; // offset 0x870, size 0x4, align 4
    int32 curve_hook_debug; // offset 0x874, size 0x4, align 4
    float32 m_fTimeRemaining; // offset 0x878, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x87C, size 0x4, align 4
};
