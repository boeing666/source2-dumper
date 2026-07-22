#pragma once

class CRoshanPhaseInfo  // sizeof 0x18, align 0xFF [vtable trivial_dtor] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    ERoshanSpawnPhase m_eRoshanPhase; // offset 0x8, size 0x4, align 4
    GameTime_t m_flRoshanPhaseStartTime; // offset 0xC, size 0x4, align 255
    GameTime_t m_flRoshanPhaseEndTime; // offset 0x10, size 0x4, align 255
    char _pad_0014[0x4]; // offset 0x14
};
