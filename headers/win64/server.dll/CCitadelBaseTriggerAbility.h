#pragma once

class CCitadelBaseTriggerAbility : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbilityToTrigger; // offset 0x14A0, size 0x4, align 4
    GameTime_t m_SwappedToTime; // offset 0x14A4, size 0x4, align 255
    char _pad_14A8[0x8]; // offset 0x14A8
};
