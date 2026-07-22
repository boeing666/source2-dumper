#pragma once

class CLogicDistanceCheck : public CLogicalEntity /*0x0*/  // sizeof 0x508, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CUtlSymbolLarge m_iszEntityA; // offset 0x4A8, size 0x8, align 8
    CUtlSymbolLarge m_iszEntityB; // offset 0x4B0, size 0x8, align 8
    float32 m_flZone1Distance; // offset 0x4B8, size 0x4, align 4
    float32 m_flZone2Distance; // offset 0x4BC, size 0x4, align 4
    CEntityIOOutput m_InZone1; // offset 0x4C0, size 0x18, align 255
    CEntityIOOutput m_InZone2; // offset 0x4D8, size 0x18, align 255
    CEntityIOOutput m_InZone3; // offset 0x4F0, size 0x18, align 255
};
