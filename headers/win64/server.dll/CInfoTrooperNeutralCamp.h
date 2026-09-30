#pragma once

class CInfoTrooperNeutralCamp : public CPointEntity /*0x0*/  // sizeof 0x550, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x4B0, size 0x20, align 255
    char _pad_04D0[0x18]; // offset 0x4D0
    CUtlSymbolLarge m_iszCampName; // offset 0x4E8, size 0x8, align 8
    float32 m_flTetherRadiusOverride; // offset 0x4F0, size 0x4, align 4
    char _pad_04F4[0x44]; // offset 0x4F4
    CEntityIOOutput m_OnCampCleared; // offset 0x538, size 0x18, align 255
};
