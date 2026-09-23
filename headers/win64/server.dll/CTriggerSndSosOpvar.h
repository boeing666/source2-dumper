#pragma once

class CTriggerSndSosOpvar : public CBaseTrigger /*0x0*/  // sizeof 0xD28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9C8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // offset 0x9C8, size 0x18, align 8 | MNotSaved
    VectorWS m_flPosition; // offset 0x9E0, size 0xC, align 4 | MNotSaved
    float32 m_flCenterSize; // offset 0x9EC, size 0x4, align 4
    float32 m_flMinVal; // offset 0x9F0, size 0x4, align 4
    float32 m_flMaxVal; // offset 0x9F4, size 0x4, align 4
    CUtlSymbolLarge m_opvarName; // offset 0x9F8, size 0x8, align 8
    CUtlSymbolLarge m_stackName; // offset 0xA00, size 0x8, align 8
    CUtlSymbolLarge m_operatorName; // offset 0xA08, size 0x8, align 8
    bool m_bVolIs2D; // offset 0xA10, size 0x1, align 1
    char[256] m_opvarNameChar; // offset 0xA11, size 0x100, align 1 | MNotSaved
    char[256] m_stackNameChar; // offset 0xB11, size 0x100, align 1 | MNotSaved
    char[256] m_operatorNameChar; // offset 0xC11, size 0x100, align 1 | MNotSaved
    char _pad_0D11[0x3]; // offset 0xD11
    Vector m_VecNormPos; // offset 0xD14, size 0xC, align 4 | MNotSaved
    float32 m_flNormCenterSize; // offset 0xD20, size 0x4, align 4 | MNotSaved
    char _pad_0D24[0x4]; // offset 0xD24
};
