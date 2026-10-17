#pragma once

class CTriggerSndSosOpvar : public CBaseTrigger /*0x0*/  // sizeof 0x1008, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // offset 0xCA8, size 0x18, align 8 | MNotSaved
    VectorWS m_flPosition; // offset 0xCC0, size 0xC, align 4 | MNotSaved
    float32 m_flCenterSize; // offset 0xCCC, size 0x4, align 4
    float32 m_flMinVal; // offset 0xCD0, size 0x4, align 4
    float32 m_flMaxVal; // offset 0xCD4, size 0x4, align 4
    CUtlSymbolLarge m_opvarName; // offset 0xCD8, size 0x8, align 8
    CUtlSymbolLarge m_stackName; // offset 0xCE0, size 0x8, align 8
    CUtlSymbolLarge m_operatorName; // offset 0xCE8, size 0x8, align 8
    bool m_bVolIs2D; // offset 0xCF0, size 0x1, align 1
    char[256] m_opvarNameChar; // offset 0xCF1, size 0x100, align 1 | MNotSaved
    char[256] m_stackNameChar; // offset 0xDF1, size 0x100, align 1 | MNotSaved
    char[256] m_operatorNameChar; // offset 0xEF1, size 0x100, align 1 | MNotSaved
    char _pad_0FF1[0x3]; // offset 0xFF1
    Vector m_VecNormPos; // offset 0xFF4, size 0xC, align 4 | MNotSaved
    float32 m_flNormCenterSize; // offset 0x1000, size 0x4, align 4 | MNotSaved
    char _pad_1004[0x4]; // offset 0x1004
};
