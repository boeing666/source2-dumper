#pragma once

class CTriggerSndSosOpvar : public CBaseTrigger /*0x0*/  // sizeof 0x1070, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD10]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // offset 0xD10, size 0x18, align 8 | MNotSaved
    VectorWS m_flPosition; // offset 0xD28, size 0xC, align 4 | MNotSaved
    float32 m_flCenterSize; // offset 0xD34, size 0x4, align 4
    float32 m_flMinVal; // offset 0xD38, size 0x4, align 4
    float32 m_flMaxVal; // offset 0xD3C, size 0x4, align 4
    CUtlSymbolLarge m_opvarName; // offset 0xD40, size 0x8, align 8
    CUtlSymbolLarge m_stackName; // offset 0xD48, size 0x8, align 8
    CUtlSymbolLarge m_operatorName; // offset 0xD50, size 0x8, align 8
    bool m_bVolIs2D; // offset 0xD58, size 0x1, align 1
    char[256] m_opvarNameChar; // offset 0xD59, size 0x100, align 1 | MNotSaved
    char[256] m_stackNameChar; // offset 0xE59, size 0x100, align 1 | MNotSaved
    char[256] m_operatorNameChar; // offset 0xF59, size 0x100, align 1 | MNotSaved
    char _pad_1059[0x3]; // offset 0x1059
    Vector m_VecNormPos; // offset 0x105C, size 0xC, align 4 | MNotSaved
    float32 m_flNormCenterSize; // offset 0x1068, size 0x4, align 4 | MNotSaved
    char _pad_106C[0x4]; // offset 0x106C
};
