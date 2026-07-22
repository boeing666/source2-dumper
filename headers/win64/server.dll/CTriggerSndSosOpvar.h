#pragma once

class CTriggerSndSosOpvar : public CBaseTrigger /*0x0*/  // sizeof 0xC48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // offset 0x8E8, size 0x18, align 8 | MNotSaved
    VectorWS m_flPosition; // offset 0x900, size 0xC, align 4 | MNotSaved
    float32 m_flCenterSize; // offset 0x90C, size 0x4, align 4
    float32 m_flMinVal; // offset 0x910, size 0x4, align 4
    float32 m_flMaxVal; // offset 0x914, size 0x4, align 4
    CUtlSymbolLarge m_opvarName; // offset 0x918, size 0x8, align 8
    CUtlSymbolLarge m_stackName; // offset 0x920, size 0x8, align 8
    CUtlSymbolLarge m_operatorName; // offset 0x928, size 0x8, align 8
    bool m_bVolIs2D; // offset 0x930, size 0x1, align 1
    char[256] m_opvarNameChar; // offset 0x931, size 0x100, align 1 | MNotSaved
    char[256] m_stackNameChar; // offset 0xA31, size 0x100, align 1 | MNotSaved
    char[256] m_operatorNameChar; // offset 0xB31, size 0x100, align 1 | MNotSaved
    char _pad_0C31[0x3]; // offset 0xC31
    Vector m_VecNormPos; // offset 0xC34, size 0xC, align 4 | MNotSaved
    float32 m_flNormCenterSize; // offset 0xC40, size 0x4, align 4 | MNotSaved
    char _pad_0C44[0x4]; // offset 0xC44
};
