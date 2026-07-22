#pragma once

struct CDOTA_Modifier_Item_MagicStick_Hero::ChargeableItem_t  // sizeof 0xC, align 0xFF [trivial_dtor] (server)
{
    CHandle< CDOTA_Item > m_hItem; // offset 0x0, size 0x4, align 4
    float32 m_flChargeRadius; // offset 0x4, size 0x4, align 4
    int32 m_nMaxCharges; // offset 0x8, size 0x4, align 4
};
