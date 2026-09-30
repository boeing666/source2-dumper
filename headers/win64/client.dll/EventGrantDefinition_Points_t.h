#pragma once

struct EventGrantDefinition_Points_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    uint32 m_unPoints; // offset 0x8, size 0x4, align 4
    uint32 m_unPremiumPoints; // offset 0xC, size 0x4, align 4
    uint32 m_unAuditAction; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    uint64 m_unAuditData; // offset 0x18, size 0x8, align 8
    EEvent m_eEventID; // offset 0x20, size 0x4, align 4
    bool m_bRequireEventOwnership; // offset 0x24, size 0x1, align 1
    bool m_bRewardSeasonalPoints; // offset 0x25, size 0x1, align 1
    char _pad_0026[0x2]; // offset 0x26
};
