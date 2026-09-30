#pragma once

class CCitadelBaseTriggerAbility : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x16E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbilityToTrigger; // offset 0x16D8, size 0x4, align 4
    GameTime_t m_SwappedToTime; // offset 0x16DC, size 0x4, align 255
    char _pad_16E0[0x8]; // offset 0x16E0
};
