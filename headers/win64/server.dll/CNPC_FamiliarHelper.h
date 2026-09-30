#pragma once

class CNPC_FamiliarHelper : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1B00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1AE8]; // offset 0x0
    GameTime_t m_tCooldownStartTime; // offset 0x1AE8, size 0x4, align 255
    GameTime_t m_tCooldownEndTime; // offset 0x1AEC, size 0x4, align 255
    bool m_bIsHelperAvailableNet; // offset 0x1AF0, size 0x1, align 1
    char _pad_1AF1[0xF]; // offset 0x1AF1
};
