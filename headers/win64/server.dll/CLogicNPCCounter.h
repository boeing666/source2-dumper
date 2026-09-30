#pragma once

class CLogicNPCCounter : public CBaseEntity /*0x0*/  // sizeof 0x730, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CEntityIOOutput m_OnMinCountAll; // offset 0x4B0, size 0x18, align 255
    CEntityIOOutput m_OnMaxCountAll; // offset 0x4C8, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactorAll; // offset 0x4E0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDistAll; // offset 0x500, size 0x20, align 8
    CEntityIOOutput m_OnMinCount_1; // offset 0x520, size 0x18, align 255
    CEntityIOOutput m_OnMaxCount_1; // offset 0x538, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactor_1; // offset 0x550, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDist_1; // offset 0x570, size 0x20, align 8
    CEntityIOOutput m_OnMinCount_2; // offset 0x590, size 0x18, align 255
    CEntityIOOutput m_OnMaxCount_2; // offset 0x5A8, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactor_2; // offset 0x5C0, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDist_2; // offset 0x5E0, size 0x20, align 8
    CEntityIOOutput m_OnMinCount_3; // offset 0x600, size 0x18, align 255
    CEntityIOOutput m_OnMaxCount_3; // offset 0x618, size 0x18, align 255
    CEntityOutputTemplate< float32 > m_OnFactor_3; // offset 0x630, size 0x20, align 8
    CEntityOutputTemplate< float32 > m_OnMinPlayerDist_3; // offset 0x650, size 0x20, align 8
    CEntityHandle m_hSource; // offset 0x670, size 0x4, align 4
    char _pad_0674[0x4]; // offset 0x674
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x678, size 0x8, align 8
    float32 m_flDistanceMax; // offset 0x680, size 0x4, align 4
    bool m_bDisabled; // offset 0x684, size 0x1, align 1
    char _pad_0685[0x3]; // offset 0x685
    int32 m_nMinCountAll; // offset 0x688, size 0x4, align 4
    int32 m_nMaxCountAll; // offset 0x68C, size 0x4, align 4
    int32 m_nMinFactorAll; // offset 0x690, size 0x4, align 4
    int32 m_nMaxFactorAll; // offset 0x694, size 0x4, align 4
    char _pad_0698[0x8]; // offset 0x698
    CUtlSymbolLarge m_iszNPCClassname_1; // offset 0x6A0, size 0x8, align 8
    int32 m_nNPCState_1; // offset 0x6A8, size 0x4, align 4
    bool m_bInvertState_1; // offset 0x6AC, size 0x1, align 1
    char _pad_06AD[0x3]; // offset 0x6AD
    int32 m_nMinCount_1; // offset 0x6B0, size 0x4, align 4
    int32 m_nMaxCount_1; // offset 0x6B4, size 0x4, align 4
    int32 m_nMinFactor_1; // offset 0x6B8, size 0x4, align 4
    int32 m_nMaxFactor_1; // offset 0x6BC, size 0x4, align 4
    char _pad_06C0[0x4]; // offset 0x6C0
    float32 m_flDefaultDist_1; // offset 0x6C4, size 0x4, align 4
    CUtlSymbolLarge m_iszNPCClassname_2; // offset 0x6C8, size 0x8, align 8
    int32 m_nNPCState_2; // offset 0x6D0, size 0x4, align 4
    bool m_bInvertState_2; // offset 0x6D4, size 0x1, align 1
    char _pad_06D5[0x3]; // offset 0x6D5
    int32 m_nMinCount_2; // offset 0x6D8, size 0x4, align 4
    int32 m_nMaxCount_2; // offset 0x6DC, size 0x4, align 4
    int32 m_nMinFactor_2; // offset 0x6E0, size 0x4, align 4
    int32 m_nMaxFactor_2; // offset 0x6E4, size 0x4, align 4
    char _pad_06E8[0x4]; // offset 0x6E8
    float32 m_flDefaultDist_2; // offset 0x6EC, size 0x4, align 4
    CUtlSymbolLarge m_iszNPCClassname_3; // offset 0x6F0, size 0x8, align 8
    int32 m_nNPCState_3; // offset 0x6F8, size 0x4, align 4
    bool m_bInvertState_3; // offset 0x6FC, size 0x1, align 1
    char _pad_06FD[0x3]; // offset 0x6FD
    int32 m_nMinCount_3; // offset 0x700, size 0x4, align 4
    int32 m_nMaxCount_3; // offset 0x704, size 0x4, align 4
    int32 m_nMinFactor_3; // offset 0x708, size 0x4, align 4
    int32 m_nMaxFactor_3; // offset 0x70C, size 0x4, align 4
    char _pad_0710[0x4]; // offset 0x710
    float32 m_flDefaultDist_3; // offset 0x714, size 0x4, align 4
    char _pad_0718[0x18]; // offset 0x718
};
