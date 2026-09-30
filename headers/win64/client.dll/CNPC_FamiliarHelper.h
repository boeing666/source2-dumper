#pragma once

class CNPC_FamiliarHelper : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1B18, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    GameTime_t m_tCooldownStartTime; // offset 0x1B08, size 0x4, align 255
    GameTime_t m_tCooldownEndTime; // offset 0x1B0C, size 0x4, align 255
    bool m_bIsHelperAvailableNet; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x7]; // offset 0x1B11
};
