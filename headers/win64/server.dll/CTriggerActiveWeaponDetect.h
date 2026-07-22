#pragma once

class CTriggerActiveWeaponDetect : public CBaseTrigger /*0x0*/  // sizeof 0x910, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    CEntityIOOutput m_OnTouchedActiveWeapon; // offset 0x8F0, size 0x18, align 255
    CUtlSymbolLarge m_iszWeaponClassName; // offset 0x908, size 0x8, align 8
};
