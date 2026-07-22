#pragma once

class CCitadelRegenComponent : public CEntityComponent /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    GameTime_t m_flLastRegenThinkTime; // offset 0x10, size 0x4, align 255 | MNotSaved
    float32 m_flRegenAccumulator; // offset 0x14, size 0x4, align 4
    char _pad_0018[0x148]; // offset 0x18
};
