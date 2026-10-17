#pragma once

class CTriggerActiveWeaponDetect : public CBaseTrigger /*0x0*/  // sizeof 0xCC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    CEntityIOOutput m_OnTouchedActiveWeapon; // offset 0xCA8, size 0x18, align 255
    CUtlSymbolLarge m_iszWeaponClassName; // offset 0xCC0, size 0x8, align 8
};
