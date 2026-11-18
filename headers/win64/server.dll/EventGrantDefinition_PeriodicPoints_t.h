#pragma once

struct EventGrantDefinition_PeriodicPoints_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    EEvent m_eEventID; // offset 0x8, size 0x4, align 4
    uint32 m_unPoints; // offset 0xC, size 0x4, align 4
    PeriodicResourceID_t m_unPeriodicResourceID; // offset 0x10, size 0x4, align 255
    char _pad_0014[0x4]; // offset 0x14
};
