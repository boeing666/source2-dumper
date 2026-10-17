#pragma once

struct EventGrantDefinition_MaxPeriodicPoints_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    PeriodicResourceID_t m_unPeriodicPointsType; // offset 0x8, size 0x4, align 255
    uint32 m_unPeriodicPointsToAddToMax; // offset 0xC, size 0x4, align 4
    CUtlString m_strPeriodicPointsName; // offset 0x10, size 0x8, align 8
    CUtlString m_strImage; // offset 0x18, size 0x8, align 8
};
