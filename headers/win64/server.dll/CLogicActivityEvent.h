#pragma once

class CLogicActivityEvent : public CLogicalEntity /*0x0*/  // sizeof 0x4C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    int32 m_nEventType; // offset 0x4A8, size 0x4, align 4
    float32 m_flDuration; // offset 0x4AC, size 0x4, align 4
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x4B0, size 0x8, align 8
    CEntityHandle m_hSource; // offset 0x4B8, size 0x4, align 4
    char _pad_04BC[0x4]; // offset 0x4BC
};
