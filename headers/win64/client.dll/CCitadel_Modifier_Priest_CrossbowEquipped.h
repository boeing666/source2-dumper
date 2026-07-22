#pragma once

class CCitadel_Modifier_Priest_CrossbowEquipped : public CCitadelModifier /*0x0*/  // sizeof 0x100, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CCitadel_Ability_Priest_CrossbowWeapon* m_pCrossbowWeapon; // offset 0xC0, size 0x8, align 8
    char _pad_00C8[0x38]; // offset 0xC8
};
