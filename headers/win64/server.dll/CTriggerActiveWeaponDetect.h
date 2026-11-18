#pragma once

class CTriggerActiveWeaponDetect : public CBaseTrigger /*0x0*/  // sizeof 0xA50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    CEntityIOOutput m_OnTouchedActiveWeapon; // offset 0xA30, size 0x18, align 255
    CUtlSymbolLarge m_iszWeaponClassName; // offset 0xA48, size 0x8, align 8
};
