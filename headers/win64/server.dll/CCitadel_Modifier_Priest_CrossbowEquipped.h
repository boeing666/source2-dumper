#pragma once

class CCitadel_Modifier_Priest_CrossbowEquipped : public CCitadelModifier /*0x0*/  // sizeof 0x170, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CCitadel_Ability_Priest_CrossbowWeapon* m_pCrossbowWeapon; // offset 0x148, size 0x8, align 8
    char _pad_0150[0x20]; // offset 0x150
};
