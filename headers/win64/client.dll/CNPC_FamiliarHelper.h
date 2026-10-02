#pragma once

class CNPC_FamiliarHelper : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1B70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B60]; // offset 0x0
    GameTime_t m_tCooldownStartTime; // offset 0x1B60, size 0x4, align 255
    GameTime_t m_tCooldownEndTime; // offset 0x1B64, size 0x4, align 255
    bool m_bIsHelperAvailableNet; // offset 0x1B68, size 0x1, align 1
    char _pad_1B69[0x7]; // offset 0x1B69
};
