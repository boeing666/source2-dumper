#pragma once

class CNavSmartGoal_PrimaryTest : public INavSmartGoal /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x10, size 0x4, align 4
    GameTime_t m_flTimeEnd; // offset 0x14, size 0x4, align 255
    Vector m_vLastGoal; // offset 0x18, size 0xC, align 4
    char _pad_0024[0x4]; // offset 0x24
};
