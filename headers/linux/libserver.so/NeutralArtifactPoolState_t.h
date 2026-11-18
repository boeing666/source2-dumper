#pragma once

struct NeutralArtifactPoolState_t  // sizeof 0x58, align 0xFF [vtable] (server)
{
    char _pad_0000[0x30]; // offset 0x0
    AbilityID_t[9] m_nOptions; // offset 0x30, size 0x24, align 4
    char _pad_0054[0x4]; // offset 0x54
};
