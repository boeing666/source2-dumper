#pragma once

class CDOTA_Modifier_Item_MagicStick_Hero : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlVector< CDOTA_Modifier_Item_MagicStick_Hero::ChargeableItem_t > m_vecItems; // offset 0x1A78, size 0x18, align 8
};
