#pragma once

struct EventGrantDefinition_Trophy_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    uint16 m_unTrophyID; // offset 0x8, size 0x2, align 2
    char _pad_000A[0x2]; // offset 0xA
    uint32 m_unTrophyScore; // offset 0xC, size 0x4, align 4
    ETrophyScoreMode m_eScoreMode; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
