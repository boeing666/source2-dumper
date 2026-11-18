#pragma once

class CTriggerActiveWeaponDetect : public CBaseTrigger /*0x0*/  // sizeof 0xD30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD10]; // offset 0x0
    CEntityIOOutput m_OnTouchedActiveWeapon; // offset 0xD10, size 0x18, align 255
    CUtlSymbolLarge m_iszWeaponClassName; // offset 0xD28, size 0x8, align 8
};
