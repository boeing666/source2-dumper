#pragma once

class CCitadelBaseTriggerAbility : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbilityToTrigger; // offset 0x14A8, size 0x4, align 4
    GameTime_t m_SwappedToTime; // offset 0x14AC, size 0x4, align 255
    char _pad_14B0[0x8]; // offset 0x14B0
};
