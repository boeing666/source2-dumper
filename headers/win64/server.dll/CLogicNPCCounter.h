#pragma once

class CLogicNPCCounter : public CBaseEntity /*0x0*/  // sizeof 0x728, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CEntityIOOutput m_OnMinCountAll; // offset 0x4A8, size 0x18, align 255
    CEntityIOOutput m_OnMaxCountAll; // offset 0x4C0, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactorAll; // offset 0x4D8, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDistAll; // offset 0x4F8, size 0x20, align 8
    CEntityIOOutput m_OnMinCount_1; // offset 0x518, size 0x18, align 255
    CEntityIOOutput m_OnMaxCount_1; // offset 0x530, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactor_1; // offset 0x548, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDist_1; // offset 0x568, size 0x20, align 8
    CEntityIOOutput m_OnMinCount_2; // offset 0x588, size 0x18, align 255
    CEntityIOOutput m_OnMaxCount_2; // offset 0x5A0, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactor_2; // offset 0x5B8, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDist_2; // offset 0x5D8, size 0x20, align 8
    CEntityIOOutput m_OnMinCount_3; // offset 0x5F8, size 0x18, align 255
    CEntityIOOutput m_OnMaxCount_3; // offset 0x610, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactor_3; // offset 0x628, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDist_3; // offset 0x648, size 0x20, align 8
    CEntityHandle m_hSource; // offset 0x668, size 0x4, align 4
    char _pad_066C[0x4]; // offset 0x66C
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x670, size 0x8, align 8
    float32 m_flDistanceMax; // offset 0x678, size 0x4, align 4
    bool m_bDisabled; // offset 0x67C, size 0x1, align 1
    char _pad_067D[0x3]; // offset 0x67D
    int32 m_nMinCountAll; // offset 0x680, size 0x4, align 4
    int32 m_nMaxCountAll; // offset 0x684, size 0x4, align 4
    int32 m_nMinFactorAll; // offset 0x688, size 0x4, align 4
    int32 m_nMaxFactorAll; // offset 0x68C, size 0x4, align 4
    char _pad_0690[0x8]; // offset 0x690
    CUtlSymbolLarge m_iszNPCClassname_1; // offset 0x698, size 0x8, align 8
    int32 m_nNPCState_1; // offset 0x6A0, size 0x4, align 4
    bool m_bInvertState_1; // offset 0x6A4, size 0x1, align 1
    char _pad_06A5[0x3]; // offset 0x6A5
    int32 m_nMinCount_1; // offset 0x6A8, size 0x4, align 4
    int32 m_nMaxCount_1; // offset 0x6AC, size 0x4, align 4
    int32 m_nMinFactor_1; // offset 0x6B0, size 0x4, align 4
    int32 m_nMaxFactor_1; // offset 0x6B4, size 0x4, align 4
    char _pad_06B8[0x4]; // offset 0x6B8
    float32 m_flDefaultDist_1; // offset 0x6BC, size 0x4, align 4
    CUtlSymbolLarge m_iszNPCClassname_2; // offset 0x6C0, size 0x8, align 8
    int32 m_nNPCState_2; // offset 0x6C8, size 0x4, align 4
    bool m_bInvertState_2; // offset 0x6CC, size 0x1, align 1
    char _pad_06CD[0x3]; // offset 0x6CD
    int32 m_nMinCount_2; // offset 0x6D0, size 0x4, align 4
    int32 m_nMaxCount_2; // offset 0x6D4, size 0x4, align 4
    int32 m_nMinFactor_2; // offset 0x6D8, size 0x4, align 4
    int32 m_nMaxFactor_2; // offset 0x6DC, size 0x4, align 4
    char _pad_06E0[0x4]; // offset 0x6E0
    float32 m_flDefaultDist_2; // offset 0x6E4, size 0x4, align 4
    CUtlSymbolLarge m_iszNPCClassname_3; // offset 0x6E8, size 0x8, align 8
    int32 m_nNPCState_3; // offset 0x6F0, size 0x4, align 4
    bool m_bInvertState_3; // offset 0x6F4, size 0x1, align 1
    char _pad_06F5[0x3]; // offset 0x6F5
    int32 m_nMinCount_3; // offset 0x6F8, size 0x4, align 4
    int32 m_nMaxCount_3; // offset 0x6FC, size 0x4, align 4
    int32 m_nMinFactor_3; // offset 0x700, size 0x4, align 4
    int32 m_nMaxFactor_3; // offset 0x704, size 0x4, align 4
    char _pad_0708[0x4]; // offset 0x708
    float32 m_flDefaultDist_3; // offset 0x70C, size 0x4, align 4
    char _pad_0710[0x18]; // offset 0x710
};
