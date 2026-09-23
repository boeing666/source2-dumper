#pragma once

class CTriggerSndSosOpvar : public CBaseTrigger /*0x0*/  // sizeof 0x1000, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // offset 0xCA0, size 0x18, align 8 | MNotSaved
    VectorWS m_flPosition; // offset 0xCB8, size 0xC, align 4 | MNotSaved
    float32 m_flCenterSize; // offset 0xCC4, size 0x4, align 4
    float32 m_flMinVal; // offset 0xCC8, size 0x4, align 4
    float32 m_flMaxVal; // offset 0xCCC, size 0x4, align 4
    CUtlSymbolLarge m_opvarName; // offset 0xCD0, size 0x8, align 8
    CUtlSymbolLarge m_stackName; // offset 0xCD8, size 0x8, align 8
    CUtlSymbolLarge m_operatorName; // offset 0xCE0, size 0x8, align 8
    bool m_bVolIs2D; // offset 0xCE8, size 0x1, align 1
    char[256] m_opvarNameChar; // offset 0xCE9, size 0x100, align 1 | MNotSaved
    char[256] m_stackNameChar; // offset 0xDE9, size 0x100, align 1 | MNotSaved
    char[256] m_operatorNameChar; // offset 0xEE9, size 0x100, align 1 | MNotSaved
    char _pad_0FE9[0x3]; // offset 0xFE9
    Vector m_VecNormPos; // offset 0xFEC, size 0xC, align 4 | MNotSaved
    float32 m_flNormCenterSize; // offset 0xFF8, size 0x4, align 4 | MNotSaved
    char _pad_0FFC[0x4]; // offset 0xFFC
};
