#pragma once

class CLogicNPCCounter : public CBaseEntity /*0x0*/  // sizeof 0x9F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CEntityIOOutput m_OnMinCountAll; // offset 0x778, size 0x18, align 255
    CEntityIOOutput m_OnMaxCountAll; // offset 0x790, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactorAll; // offset 0x7A8, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDistAll; // offset 0x7C8, size 0x20, align 8
    CEntityIOOutput m_OnMinCount_1; // offset 0x7E8, size 0x18, align 255
    CEntityIOOutput m_OnMaxCount_1; // offset 0x800, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactor_1; // offset 0x818, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDist_1; // offset 0x838, size 0x20, align 8
    CEntityIOOutput m_OnMinCount_2; // offset 0x858, size 0x18, align 255
    CEntityIOOutput m_OnMaxCount_2; // offset 0x870, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactor_2; // offset 0x888, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDist_2; // offset 0x8A8, size 0x20, align 8
    CEntityIOOutput m_OnMinCount_3; // offset 0x8C8, size 0x18, align 255
    CEntityIOOutput m_OnMaxCount_3; // offset 0x8E0, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactor_3; // offset 0x8F8, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDist_3; // offset 0x918, size 0x20, align 8
    CEntityHandle m_hSource; // offset 0x938, size 0x4, align 4
    char _pad_093C[0x4]; // offset 0x93C
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x940, size 0x8, align 8
    float32 m_flDistanceMax; // offset 0x948, size 0x4, align 4
    bool m_bDisabled; // offset 0x94C, size 0x1, align 1
    char _pad_094D[0x3]; // offset 0x94D
    int32 m_nMinCountAll; // offset 0x950, size 0x4, align 4
    int32 m_nMaxCountAll; // offset 0x954, size 0x4, align 4
    int32 m_nMinFactorAll; // offset 0x958, size 0x4, align 4
    int32 m_nMaxFactorAll; // offset 0x95C, size 0x4, align 4
    char _pad_0960[0x8]; // offset 0x960
    CUtlSymbolLarge m_iszNPCClassname_1; // offset 0x968, size 0x8, align 8
    int32 m_nNPCState_1; // offset 0x970, size 0x4, align 4
    bool m_bInvertState_1; // offset 0x974, size 0x1, align 1
    char _pad_0975[0x3]; // offset 0x975
    int32 m_nMinCount_1; // offset 0x978, size 0x4, align 4
    int32 m_nMaxCount_1; // offset 0x97C, size 0x4, align 4
    int32 m_nMinFactor_1; // offset 0x980, size 0x4, align 4
    int32 m_nMaxFactor_1; // offset 0x984, size 0x4, align 4
    char _pad_0988[0x4]; // offset 0x988
    float32 m_flDefaultDist_1; // offset 0x98C, size 0x4, align 4
    CUtlSymbolLarge m_iszNPCClassname_2; // offset 0x990, size 0x8, align 8
    int32 m_nNPCState_2; // offset 0x998, size 0x4, align 4
    bool m_bInvertState_2; // offset 0x99C, size 0x1, align 1
    char _pad_099D[0x3]; // offset 0x99D
    int32 m_nMinCount_2; // offset 0x9A0, size 0x4, align 4
    int32 m_nMaxCount_2; // offset 0x9A4, size 0x4, align 4
    int32 m_nMinFactor_2; // offset 0x9A8, size 0x4, align 4
    int32 m_nMaxFactor_2; // offset 0x9AC, size 0x4, align 4
    char _pad_09B0[0x4]; // offset 0x9B0
    float32 m_flDefaultDist_2; // offset 0x9B4, size 0x4, align 4
    CUtlSymbolLarge m_iszNPCClassname_3; // offset 0x9B8, size 0x8, align 8
    int32 m_nNPCState_3; // offset 0x9C0, size 0x4, align 4
    bool m_bInvertState_3; // offset 0x9C4, size 0x1, align 1
    char _pad_09C5[0x3]; // offset 0x9C5
    int32 m_nMinCount_3; // offset 0x9C8, size 0x4, align 4
    int32 m_nMaxCount_3; // offset 0x9CC, size 0x4, align 4
    int32 m_nMinFactor_3; // offset 0x9D0, size 0x4, align 4
    int32 m_nMaxFactor_3; // offset 0x9D4, size 0x4, align 4
    char _pad_09D8[0x4]; // offset 0x9D8
    float32 m_flDefaultDist_3; // offset 0x9DC, size 0x4, align 4
    char _pad_09E0[0x18]; // offset 0x9E0
};
