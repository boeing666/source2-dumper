#pragma once

class CLogicMeasureMovement : public CLogicalEntity /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlSymbolLarge m_strMeasureTarget; // offset 0x788, size 0x8, align 8
    CUtlSymbolLarge m_strMeasureReference; // offset 0x790, size 0x8, align 8
    CUtlSymbolLarge m_strTargetReference; // offset 0x798, size 0x8, align 8
    CHandle< CBaseEntity > m_hMeasureTarget; // offset 0x7A0, size 0x4, align 4
    CHandle< CBaseEntity > m_hMeasureReference; // offset 0x7A4, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x7A8, size 0x4, align 4
    CHandle< CBaseEntity > m_hTargetReference; // offset 0x7AC, size 0x4, align 4
    float32 m_flScale; // offset 0x7B0, size 0x4, align 4
    int32 m_nMeasureType; // offset 0x7B4, size 0x4, align 4
};
