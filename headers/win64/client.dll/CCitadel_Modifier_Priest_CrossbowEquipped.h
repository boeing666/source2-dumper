#pragma once

class CCitadel_Modifier_Priest_CrossbowEquipped : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CCitadel_Ability_Priest_CrossbowWeapon* m_pCrossbowWeapon; // offset 0x138, size 0x8, align 8
    char _pad_0140[0x20]; // offset 0x140
};
