#pragma once

class CDOTA_Ability_SatyrSoulstealer_ManaBurn : public CDOTABaseAbility /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > hNeutralTarget; // offset 0x580, size 0x4, align 4
    GameTime_t m_flTimeBuffer; // offset 0x584, size 0x4, align 255
};
