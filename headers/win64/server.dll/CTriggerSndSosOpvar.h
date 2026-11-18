#pragma once

class CTriggerSndSosOpvar : public CBaseTrigger /*0x0*/  // sizeof 0xD90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hTouchingPlayers; // offset 0xA30, size 0x18, align 8 | MNotSaved
    VectorWS m_flPosition; // offset 0xA48, size 0xC, align 4 | MNotSaved
    float32 m_flCenterSize; // offset 0xA54, size 0x4, align 4
    float32 m_flMinVal; // offset 0xA58, size 0x4, align 4
    float32 m_flMaxVal; // offset 0xA5C, size 0x4, align 4
    CUtlSymbolLarge m_opvarName; // offset 0xA60, size 0x8, align 8
    CUtlSymbolLarge m_stackName; // offset 0xA68, size 0x8, align 8
    CUtlSymbolLarge m_operatorName; // offset 0xA70, size 0x8, align 8
    bool m_bVolIs2D; // offset 0xA78, size 0x1, align 1
    char[256] m_opvarNameChar; // offset 0xA79, size 0x100, align 1 | MNotSaved
    char[256] m_stackNameChar; // offset 0xB79, size 0x100, align 1 | MNotSaved
    char[256] m_operatorNameChar; // offset 0xC79, size 0x100, align 1 | MNotSaved
    char _pad_0D79[0x3]; // offset 0xD79
    Vector m_VecNormPos; // offset 0xD7C, size 0xC, align 4 | MNotSaved
    float32 m_flNormCenterSize; // offset 0xD88, size 0x4, align 4 | MNotSaved
    char _pad_0D8C[0x4]; // offset 0xD8C
};
