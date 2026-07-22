#pragma once

class CLogicNPCCounter : public CBaseEntity /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CEntityIOOutput m_OnMinCountAll; // offset 0x788, size 0x18, align 255
    CEntityIOOutput m_OnMaxCountAll; // offset 0x7A0, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactorAll; // offset 0x7B8, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDistAll; // offset 0x7D8, size 0x20, align 8
    CEntityIOOutput m_OnMinCount_1; // offset 0x7F8, size 0x18, align 255
    CEntityIOOutput m_OnMaxCount_1; // offset 0x810, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactor_1; // offset 0x828, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDist_1; // offset 0x848, size 0x20, align 8
    CEntityIOOutput m_OnMinCount_2; // offset 0x868, size 0x18, align 255
    CEntityIOOutput m_OnMaxCount_2; // offset 0x880, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactor_2; // offset 0x898, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDist_2; // offset 0x8B8, size 0x20, align 8
    CEntityIOOutput m_OnMinCount_3; // offset 0x8D8, size 0x18, align 255
    CEntityIOOutput m_OnMaxCount_3; // offset 0x8F0, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactor_3; // offset 0x908, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDist_3; // offset 0x928, size 0x20, align 8
    CEntityHandle m_hSource; // offset 0x948, size 0x4, align 4
    char _pad_094C[0x4]; // offset 0x94C
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x950, size 0x8, align 8
    float32 m_flDistanceMax; // offset 0x958, size 0x4, align 4
    bool m_bDisabled; // offset 0x95C, size 0x1, align 1
    char _pad_095D[0x3]; // offset 0x95D
    int32 m_nMinCountAll; // offset 0x960, size 0x4, align 4
    int32 m_nMaxCountAll; // offset 0x964, size 0x4, align 4
    int32 m_nMinFactorAll; // offset 0x968, size 0x4, align 4
    int32 m_nMaxFactorAll; // offset 0x96C, size 0x4, align 4
    char _pad_0970[0x8]; // offset 0x970
    CUtlSymbolLarge m_iszNPCClassname_1; // offset 0x978, size 0x8, align 8
    int32 m_nNPCState_1; // offset 0x980, size 0x4, align 4
    bool m_bInvertState_1; // offset 0x984, size 0x1, align 1
    char _pad_0985[0x3]; // offset 0x985
    int32 m_nMinCount_1; // offset 0x988, size 0x4, align 4
    int32 m_nMaxCount_1; // offset 0x98C, size 0x4, align 4
    int32 m_nMinFactor_1; // offset 0x990, size 0x4, align 4
    int32 m_nMaxFactor_1; // offset 0x994, size 0x4, align 4
    char _pad_0998[0x4]; // offset 0x998
    float32 m_flDefaultDist_1; // offset 0x99C, size 0x4, align 4
    CUtlSymbolLarge m_iszNPCClassname_2; // offset 0x9A0, size 0x8, align 8
    int32 m_nNPCState_2; // offset 0x9A8, size 0x4, align 4
    bool m_bInvertState_2; // offset 0x9AC, size 0x1, align 1
    char _pad_09AD[0x3]; // offset 0x9AD
    int32 m_nMinCount_2; // offset 0x9B0, size 0x4, align 4
    int32 m_nMaxCount_2; // offset 0x9B4, size 0x4, align 4
    int32 m_nMinFactor_2; // offset 0x9B8, size 0x4, align 4
    int32 m_nMaxFactor_2; // offset 0x9BC, size 0x4, align 4
    char _pad_09C0[0x4]; // offset 0x9C0
    float32 m_flDefaultDist_2; // offset 0x9C4, size 0x4, align 4
    CUtlSymbolLarge m_iszNPCClassname_3; // offset 0x9C8, size 0x8, align 8
    int32 m_nNPCState_3; // offset 0x9D0, size 0x4, align 4
    bool m_bInvertState_3; // offset 0x9D4, size 0x1, align 1
    char _pad_09D5[0x3]; // offset 0x9D5
    int32 m_nMinCount_3; // offset 0x9D8, size 0x4, align 4
    int32 m_nMaxCount_3; // offset 0x9DC, size 0x4, align 4
    int32 m_nMinFactor_3; // offset 0x9E0, size 0x4, align 4
    int32 m_nMaxFactor_3; // offset 0x9E4, size 0x4, align 4
    char _pad_09E8[0x4]; // offset 0x9E8
    float32 m_flDefaultDist_3; // offset 0x9EC, size 0x4, align 4
    char _pad_09F0[0x18]; // offset 0x9F0
};
