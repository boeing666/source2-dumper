#pragma once

class CTriggerSndSosOpvar : public CBaseTrigger /*0x0*/  // sizeof 0xD50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // offset 0x9F0, size 0x18, align 8 | MNotSaved
    VectorWS m_flPosition; // offset 0xA08, size 0xC, align 4 | MNotSaved
    float32 m_flCenterSize; // offset 0xA14, size 0x4, align 4
    float32 m_flMinVal; // offset 0xA18, size 0x4, align 4
    float32 m_flMaxVal; // offset 0xA1C, size 0x4, align 4
    CUtlSymbolLarge m_opvarName; // offset 0xA20, size 0x8, align 8
    CUtlSymbolLarge m_stackName; // offset 0xA28, size 0x8, align 8
    CUtlSymbolLarge m_operatorName; // offset 0xA30, size 0x8, align 8
    bool m_bVolIs2D; // offset 0xA38, size 0x1, align 1
    char[256] m_opvarNameChar; // offset 0xA39, size 0x100, align 1 | MNotSaved
    char[256] m_stackNameChar; // offset 0xB39, size 0x100, align 1 | MNotSaved
    char[256] m_operatorNameChar; // offset 0xC39, size 0x100, align 1 | MNotSaved
    char _pad_0D39[0x3]; // offset 0xD39
    Vector m_VecNormPos; // offset 0xD3C, size 0xC, align 4 | MNotSaved
    float32 m_flNormCenterSize; // offset 0xD48, size 0x4, align 4 | MNotSaved
    char _pad_0D4C[0x4]; // offset 0xD4C
};
