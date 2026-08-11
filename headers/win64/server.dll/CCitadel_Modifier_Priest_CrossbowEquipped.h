#pragma once

class CCitadel_Modifier_Priest_CrossbowEquipped : public CCitadelModifier /*0x0*/  // sizeof 0x110, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CCitadel_Ability_Priest_CrossbowWeapon* m_pCrossbowWeapon; // offset 0xD0, size 0x8, align 8
    char _pad_00D8[0x38]; // offset 0xD8
};
