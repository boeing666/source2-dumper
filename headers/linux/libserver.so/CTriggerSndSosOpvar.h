#pragma once

class CTriggerSndSosOpvar : public CBaseTrigger /*0x0*/  // sizeof 0xF28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // offset 0xBC8, size 0x18, align 8 | MNotSaved
    VectorWS m_flPosition; // offset 0xBE0, size 0xC, align 4 | MNotSaved
    float32 m_flCenterSize; // offset 0xBEC, size 0x4, align 4
    float32 m_flMinVal; // offset 0xBF0, size 0x4, align 4
    float32 m_flMaxVal; // offset 0xBF4, size 0x4, align 4
    CUtlSymbolLarge m_opvarName; // offset 0xBF8, size 0x8, align 8
    CUtlSymbolLarge m_stackName; // offset 0xC00, size 0x8, align 8
    CUtlSymbolLarge m_operatorName; // offset 0xC08, size 0x8, align 8
    bool m_bVolIs2D; // offset 0xC10, size 0x1, align 1
    char[256] m_opvarNameChar; // offset 0xC11, size 0x100, align 1 | MNotSaved
    char[256] m_stackNameChar; // offset 0xD11, size 0x100, align 1 | MNotSaved
    char[256] m_operatorNameChar; // offset 0xE11, size 0x100, align 1 | MNotSaved
    char _pad_0F11[0x3]; // offset 0xF11
    Vector m_VecNormPos; // offset 0xF14, size 0xC, align 4 | MNotSaved
    float32 m_flNormCenterSize; // offset 0xF20, size 0x4, align 4 | MNotSaved
    char _pad_0F24[0x4]; // offset 0xF24
};
